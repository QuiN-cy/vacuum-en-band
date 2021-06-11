
"use strict";

let Unmigrated = require('./Unmigrated.js');
let MigratedImplicit = require('./MigratedImplicit.js');
let Constants = require('./Constants.js');
let Converged = require('./Converged.js');
let SubUnmigrated = require('./SubUnmigrated.js');
let MigratedMixed = require('./MigratedMixed.js');
let MigratedExplicit = require('./MigratedExplicit.js');
let Simple = require('./Simple.js');
let MigratedAddSub = require('./MigratedAddSub.js');
let Renamed5 = require('./Renamed5.js');
let SimpleMigrated = require('./SimpleMigrated.js');
let PartiallyMigrated = require('./PartiallyMigrated.js');

module.exports = {
  Unmigrated: Unmigrated,
  MigratedImplicit: MigratedImplicit,
  Constants: Constants,
  Converged: Converged,
  SubUnmigrated: SubUnmigrated,
  MigratedMixed: MigratedMixed,
  MigratedExplicit: MigratedExplicit,
  Simple: Simple,
  MigratedAddSub: MigratedAddSub,
  Renamed5: Renamed5,
  SimpleMigrated: SimpleMigrated,
  PartiallyMigrated: PartiallyMigrated,
};
