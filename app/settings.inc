<?php
// SPDX-License-Identifier: Apache-2.0
/**
 * settings.inc — DetailCraft's own panel of the Settings dialog (core/components/app-settings.inc includes it as
 * the "DetailCraft" tab). detailcraft.js reads and stores the fields (localStorage detailcraft.settings), fills them
 * again each time the dialog opens, and resets them on "cc-settings-reset".
 *   steel    us (default): W16x26 / W12x50 / HSS6x6x1/4, A992 (plates A36) · eu: IPE300 / HEB200 / HEA160, S355 —
 *            the profile and grade the placing tools start with; members already placed keep theirs
 *   offset   x, y, z mm (default 6000, 0, 0): how far Duplicate puts the copy, and where typed pastes start
 *   conns    copy end plates and base plates along with their members (default on)
 *   bolts    show bolts and anchor rods in the 3D view (default on)
 *   corner   corner indicator in the 3D view: view cube (default) / axis icon / none (viewcube.js)
 *   kiss     KISS file sizes: auto (imperial when every shape is AISC) / imperial / metric
 *   [data-assistants-settings]   Settings › Assistants (0.4 X.12): host.js mounts it (AGENTS-SPEC §7)
 *   barNames ASTM bars as #5 (imperial) or #16 (soft metric) · shapeCodes bending schedule codes dc / aci / bs8666 (D9)
 *   paper    sheet size for drawings and shop drawings (paper.js keys; default A3; the select is filled by detailcraft.js)
 */
?>
<fieldset class="shell-set" data-dc-settings>
  <legend><?= Lang::e('settings.steel.legend') ?></legend>
  <div class="shell-seg dc-set-seg2" role="radiogroup" aria-label="<?= Lang::e('settings.steel.label') ?>">
    <label><input type="radio" name="dcSteel" value="us"> <i class="bi bi-rulers" aria-hidden="true"></i> <?= Lang::e('settings.steel.us') ?></label>
    <label><input type="radio" name="dcSteel" value="eu"> <i class="bi bi-rulers" aria-hidden="true"></i> <?= Lang::e('settings.steel.eu') ?></label>
  </div>
  <p class="shell-hint-text"><?= Lang::e('settings.steel.hint') ?></p>
</fieldset>
<fieldset class="shell-set">
  <legend><?= Lang::e('settings.offset.legend') ?></legend>
  <div class="shell-row">
    <span id="dc-set-off-h"><?= Lang::e('settings.offset.label') ?></span>
    <span class="dc-set-xyz" role="group" aria-labelledby="dc-set-off-h">
      <label>x <input type="number" name="dcOffX" step="any" inputmode="decimal"></label>
      <label>y <input type="number" name="dcOffY" step="any" inputmode="decimal"></label>
      <label>z <input type="number" name="dcOffZ" step="any" inputmode="decimal"></label>
    </span>
  </div>
  <p class="shell-hint-text"><?= Lang::e('settings.offset.hint', ['key' => 'Ctrl+D']) ?></p>
  <label class="shell-check"><input type="checkbox" name="dcConns"> <?= Lang::e('settings.conns.label') ?></label>
  <p class="shell-hint-text"><?= Lang::e('settings.conns.hint') ?></p>
</fieldset>
<fieldset class="shell-set">
  <legend><?= Lang::e('settings.view.legend') ?></legend>
  <label class="shell-check"><input type="checkbox" name="dcBolts"> <?= Lang::e('settings.bolts.label') ?></label>
  <p class="shell-hint-text"><?= Lang::e('settings.bolts.hint') ?></p>
</fieldset>
<fieldset class="shell-set">
  <legend><?= Lang::e('set.drag.legend') ?></legend>
  <div class="shell-seg" role="radiogroup" aria-label="<?= Lang::e('set.drag.legend') ?>">
    <label><input type="radio" name="dcDragSel" value="rect"> <i class="bi bi-bounding-box" aria-hidden="true"></i> <?= Lang::e('set.drag.rect') ?></label>
    <label><input type="radio" name="dcDragSel" value="lasso"> <i class="bi bi-lasso" aria-hidden="true"></i> <?= Lang::e('set.drag.lasso') ?></label>
  </div>
  <p class="shell-hint-text"><?= Lang::e('set.drag.hint') ?></p>
</fieldset>
<fieldset class="shell-set">
  <legend><?= Lang::e('settings.corner.legend') ?></legend>
  <div class="shell-seg" role="radiogroup" aria-label="<?= Lang::e('settings.corner.legend') ?>">
    <label><input type="radio" name="dcCorner" value="cube"> <i class="bi bi-box" aria-hidden="true"></i> <?= Lang::e('settings.corner.cube') ?></label>
    <label><input type="radio" name="dcCorner" value="axes"> <i class="bi bi-arrows-move" aria-hidden="true"></i> <?= Lang::e('settings.corner.axes') ?></label>
    <label><input type="radio" name="dcCorner" value="none"> <i class="bi bi-slash-circle" aria-hidden="true"></i> <?= Lang::e('settings.corner.none') ?></label>
  </div>
  <p class="shell-hint-text"><?= Lang::e('settings.corner.hint') ?></p>
</fieldset>
<fieldset class="shell-set">
  <legend><?= Lang::e('set.paper.legend') ?></legend>
  <div class="shell-row">
    <label for="dc-set-paper"><?= Lang::e('set.paper.label') ?></label>
    <select id="dc-set-paper" class="select-cc" name="dcPaper"></select>
  </div>
  <p class="shell-hint-text"><?= Lang::e('set.paper.hint') ?></p>
</fieldset>
<fieldset class="shell-set">
  <legend><?= Lang::e('set.kiss.legend') ?></legend>
  <div class="shell-seg" role="radiogroup" aria-label="<?= Lang::e('set.kiss.legend') ?>">
    <label><input type="radio" name="dcKiss" value="auto"> <?= Lang::e('set.kiss.auto') ?></label>
    <label><input type="radio" name="dcKiss" value="imperial"> <?= Lang::e('set.kiss.imperial') ?></label>
    <label><input type="radio" name="dcKiss" value="metric"> <?= Lang::e('set.kiss.metric') ?></label>
  </div>
  <p class="shell-hint-text"><?= Lang::e('set.kiss.hint') ?></p>
</fieldset>
<fieldset class="shell-set">
  <legend><?= Lang::e('set.rebar.legend') ?></legend>
  <div class="shell-seg" role="radiogroup" aria-label="<?= Lang::e('set.rebar.names') ?>">
    <label><input type="radio" name="dcBarNames" value="imperial"> <?= Lang::e('set.rebar.names.imperial') ?></label>
    <label><input type="radio" name="dcBarNames" value="metric"> <?= Lang::e('set.rebar.names.metric') ?></label>
  </div>
  <div class="shell-seg" role="radiogroup" aria-label="<?= Lang::e('set.rebar.codes') ?>">
    <label><input type="radio" name="dcShapeCodes" value="dc"> <?= Lang::e('app.codes.dc') ?></label>
    <label><input type="radio" name="dcShapeCodes" value="aci"> <?= Lang::e('app.codes.aci') ?></label>
    <label><input type="radio" name="dcShapeCodes" value="bs8666"> <?= Lang::e('app.codes.bs8666') ?></label>
  </div>
  <p class="shell-hint-text"><?= Lang::e('set.rebar.hint') ?></p>
</fieldset>
<div data-assistants-settings></div>
