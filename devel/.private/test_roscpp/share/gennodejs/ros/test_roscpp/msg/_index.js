
"use strict";

let TestArray = require('./TestArray.js');
let TestWithHeader = require('./TestWithHeader.js');
let TestStringInt = require('./TestStringInt.js');
let TestEmpty = require('./TestEmpty.js');
let WithTime = require('./WithTime.js');
let CustomHeader = require('./CustomHeader.js');
let Constants = require('./Constants.js');
let WithHeader = require('./WithHeader.js');
let VariableLength = require('./VariableLength.js');
let FixedLength = require('./FixedLength.js');
let VariableLengthArrayOfExternal = require('./VariableLengthArrayOfExternal.js');
let ArrayOfFixedLength = require('./ArrayOfFixedLength.js');
let WithMemberNamedHeaderThatIsNotAHeader = require('./WithMemberNamedHeaderThatIsNotAHeader.js');
let HeaderNotFirstMember = require('./HeaderNotFirstMember.js');
let FixedLengthArrayOfExternal = require('./FixedLengthArrayOfExternal.js');
let ArrayOfVariableLength = require('./ArrayOfVariableLength.js');
let FixedLengthStringArray = require('./FixedLengthStringArray.js');
let WithDuration = require('./WithDuration.js');
let EmbeddedExternal = require('./EmbeddedExternal.js');
let EmbeddedFixedLength = require('./EmbeddedFixedLength.js');
let VariableLengthStringArray = require('./VariableLengthStringArray.js');
let EmbeddedVariableLength = require('./EmbeddedVariableLength.js');
let LatencyMessage = require('./LatencyMessage.js');
let ThroughputMessage = require('./ThroughputMessage.js');
let PointCloud = require('./PointCloud.js');
let ChannelFloat32 = require('./ChannelFloat32.js');
let Point32 = require('./Point32.js');

module.exports = {
  TestArray: TestArray,
  TestWithHeader: TestWithHeader,
  TestStringInt: TestStringInt,
  TestEmpty: TestEmpty,
  WithTime: WithTime,
  CustomHeader: CustomHeader,
  Constants: Constants,
  WithHeader: WithHeader,
  VariableLength: VariableLength,
  FixedLength: FixedLength,
  VariableLengthArrayOfExternal: VariableLengthArrayOfExternal,
  ArrayOfFixedLength: ArrayOfFixedLength,
  WithMemberNamedHeaderThatIsNotAHeader: WithMemberNamedHeaderThatIsNotAHeader,
  HeaderNotFirstMember: HeaderNotFirstMember,
  FixedLengthArrayOfExternal: FixedLengthArrayOfExternal,
  ArrayOfVariableLength: ArrayOfVariableLength,
  FixedLengthStringArray: FixedLengthStringArray,
  WithDuration: WithDuration,
  EmbeddedExternal: EmbeddedExternal,
  EmbeddedFixedLength: EmbeddedFixedLength,
  VariableLengthStringArray: VariableLengthStringArray,
  EmbeddedVariableLength: EmbeddedVariableLength,
  LatencyMessage: LatencyMessage,
  ThroughputMessage: ThroughputMessage,
  PointCloud: PointCloud,
  ChannelFloat32: ChannelFloat32,
  Point32: Point32,
};
