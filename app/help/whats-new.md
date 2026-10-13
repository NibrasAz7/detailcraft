---
title: What's new in 0.4
summary: Phases, stairs, splices, brace gussets and shear tabs, clash check, cut list, weight report, KISS export, drawing sizes, revisions and DWG sheets, window and lasso selection, move, rotate and mirror, and DetailCraft in your language.
section: start
order: 5
keywords: whats new, what's new, release notes, changelog, changes, 0.4, version, new features, phases, stairs, splice, gusset, shear tab, clash, cut list, weight report, kiss, dwg, dxf, revision, lasso, touch, language, spanish, recover
---

This is what changed in DetailCraft 0.4, compared with 0.3, the version Try ran before. It is a big release: more connections, stairs and phases, new checks and reports, and drawings on more sheet sizes with revisions.

:::warning
DetailCraft 0.4 saves models in file format 2. DetailCraft 0.3 cannot open them. 0.4 opens your older models, with every part in phase 1.
:::

## New

### Modeling

- **Select with a window.** Drag in {{ui:Plan}} or {{ui:Elevation}}, or {{key:Shift}}+drag in {{ui:3D}}. Drag to the right to take what is wholly inside; drag to the left to take what the window touches. See [Select by window, move, rotate, mirror, change many](topic:select-and-change#select-with-a-window).
- **Lasso.** In {{ui:Settings}}, on the {{ui:DetailCraft}} tab, set {{ui:Dragging to select}} to {{ui:Lasso}} to draw a freehand line instead. {{key:Space}} switches between inside, touching and fence while you drag. See [Lasso](topic:select-and-change#lasso).
- **Move, rotate and mirror** a selection, or a copy of it: by a typed offset, by clicking two grid intersections ({{key:M}}), about a grid intersection, or in a grid line. Mirrored parts are true mirror images, holes and copes included.
- **Drag parts.** Press on a selected part and drag it. It snaps onto grid intersections; {{key:Esc}} puts it back. See [Drag parts to move them](topic:select-and-change#drag-parts-to-move-them).
- **Change many members at once.** Select several and change the profile, material, position or rotation in {{ui:Properties}}. Fields that differ say {{ui:Varies}}. See [Change a property on many members](topic:select-and-change#change-a-property-on-many-members).
- **Phases.** Put members and footings in phases, show or hide each phase, and number marks per phase (2-b1, 2-B1). See [Phases](topic:phases).
- **Stairs.** {{ui:Place}} › {{ui:Stair}} ({{key:S}}) places a straight steel stair: two stringers and tread plates, sized from the rise and checked against IBC 1011.5.2. See [Stairs](topic:stairs).

### Connections

- **Shear tabs** to a column flange or web, also for beams that meet the column at an angle in plan or slope: {{ui:Connect}} › {{ui:More}} › {{ui:Shear tabs}}. See [Shear tabs](topic:shear-tabs).
- **End plates on a column web**, not only on a flange. See [End plates](topic:end-plates).
- **Splices.** Bolted flange and web cover plates join two pieces of one I-shape, in a beam or a column: {{ui:Connect}} › {{ui:More}} › {{ui:Splice}}. See [Splices](topic:splices).
- **Brace gussets.** Angle and flat-bar braces are bolted, tube braces are slotted and welded, and the brace is cut back clear of the joint: {{ui:Connect}} › {{ui:More}} › {{ui:Gusset}}. See [Brace gussets](topic:brace-gussets).
- **Base details.** A base plate can have a grout gap, stiffeners, a shear lug and plate washers sized from AISC Design Guide 1. All are off until you set them. See [Base details](topic:base-plates#base-details-grout-stiffeners-shear-lug-washers).

### Checks and reports

- **Clash check.** The {{ui:Clashes}} tab at the bottom finds parts that run into each other, leaving out the parts a connection means to join. {{ui:Show}} goes to each clash. See [Check for clashes](topic:clash-check).
- **Cut list.** The {{ui:Cut list}} tab nests beams, columns, braces and stair stringers into your stock lengths with saw kerf, and says how many bars to buy and the waste. See [Cut list](topic:cut-list).
- **Weight report by phase.** Cut lengths, counts, weights, paint areas, bolts and rebar for each phase, as a table, CSV or PDF. See [Material and weight report by phase](topic:weight-report).
- **KISS export.** {{ui:Output}} › {{ui:More}} › {{ui:KISS file for fabrication software}} writes the bill of materials as a KISS 1.1 file, phases as sequences. See [KISS export](topic:kiss-export).

### Drawings

- **Sheet sizes.** Drawings and shop drawings come on A4, A3, A2, A1, ANSI B, ANSI C or ANSI D sheets. Bigger sheets draw at larger scales. See [Choose the sheet size](topic:drawings#choose-the-sheet-size).
- **DWG and DXF sheets.** Download a sheet, or all of them, as DWG (2000 to 2018 formats) or DXF R12, full size, with a layer per pen. See [Download](topic:drawings#download).
- **Issues and revisions.** Issue sheets with revision letters. Each sheet gets a revision table, and the {{ui:Drawings}} window says when a sheet needs a new issue. See [Issue drawings and revisions](topic:drawings#issue-drawings-and-revisions).
- **Revision clouds.** From a sheet's second issue on, changed parts are clouded, with a revision triangle. See [Revision clouds](topic:drawings#revision-clouds).
- **Anchor bolt plan.** When the model has base plates, the set has an anchor bolt sheet with rod and base plate schedules and a typical rod pattern.
- **Weld symbols.** Assembly drawings show fillet weld symbols at every welded plate.
- **Hidden lines.** Plans and elevations leave out what is behind other parts; assembly drawings draw it dashed. See [What is in the set](topic:drawings#what-is-in-the-set).

### Your work and your language

- **Recover your work.** While the model has unsaved changes, DetailCraft keeps a copy in this browser. After a crash or a closed tab, it asks **Recover your work?** next time. See [Recover unsaved work](common:recover).
- **Recent models** are listed on the start screen in Chrome and Edge. Click one to open it again. See [Open, save and export files](topic:files#lost-work-recent-files-the-desktop-app).
- **Language.** Every word on screen, in drawings and in reports comes from a language file. {{ui:Settings}} › {{ui:General}} › {{ui:Language}} offers {{ui:Español (México)}}: a machine-made draft that nobody has reviewed yet. Help topics are still in English.
- **Find a tool.** Press {{key:Mod+K}}, or choose {{ui:Find}} in the bar at the top, and type a few letters to run a tool, open a setting or a help topic. See [Find a tool or setting](common:find-tools).
- **Touch.** Tap to select or place, long press to add to the selection or take away, drag selected parts with one finger, pinch with two. See [Touch](topic:keyboard#touch).
- **Open from BimCraft.** {{ui:Open in DetailCraft}} in BimCraft opens its IFC model here in a new tab, with nothing uploaded.

## Improved

- **IFC import** brings in round holes, copes and bolts, not only members and plates. Bolts come in as loose bolts. See [Import](topic:ifc-export#import).
- **IFC is read by cc-ifc**, our own IFC engine. DetailCraft no longer downloads a separate IFC reader, so saving it for offline use keeps about half as much.
- **NC files** for channels, angles, and rectangular and round tubes, not only I-shapes and plates. See [Send NC files to the shop](topic:nc-export) and [NC file fields](topic:nc1-fields).
- **Metric rebar.** BS 4449 bars H8 to H40, bent to BS 8666:2020. Bending schedules can use BS 8666 or ACI 315 shape codes, and ASTM bars can use their soft-metric names. See [Rebar reference](topic:rebar-reference) and [Rebar settings](topic:settings#rebar).
- **More panels windows.** Each panel can have a window of its own, up to four, and you can drag a panel from one window to another. See [Arrange the panels](common:arrange-panels).
- The view cube's words come from the language file too.

## Fixed

- A hole in a channel's web is now drawn on the web, in 3D and in drawings. It used to be drawn at the middle of the section.

## Not in this version yet

- **AI assistants.** {{ui:Settings}} has an {{ui:Assistants}} switch, but an assistant can only connect through CadCraft Studio on your computer, and Studio is not available yet. See [Use DetailCraft with an AI assistant](topic:use-with-ai-assistants).
- Cloud saving and the desktop app are not available yet.
- Shop drawings of channels, angles and tubes; weld symbols other than fillets; portrait sheets and A0.
- Clip angles, slotted holes, and splices between different sizes.
- More is listed in [What is not built yet](topic:not-built-yet).
