#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/student/rosws/src/ros_comm-noetic-devel/utilities/roslz4"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/student/rosws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/student/rosws/install/lib/python2.7/dist-packages:/home/student/rosws/build/roslz4/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/student/rosws/build/roslz4" \
    "/usr/bin/python2" \
    "/home/student/rosws/src/ros_comm-noetic-devel/utilities/roslz4/setup.py" \
    build --build-base "/home/student/rosws/build/roslz4" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/student/rosws/install" --install-scripts="/home/student/rosws/install/bin"
