---
title: What's new in 0.6
summary: An Analysis tab that finds the forces, reactions and deflections of the model's own beams, columns and braces, and calculations in the Properties number fields.
section: start
order: 5
keywords: whats new, what's new, release notes, changelog, changes, 0.6, version, new features, analysis, frame analysis, forces, moments, reactions, deflection, load case, combination, report, craftscript, calculation, arithmetic, properties, toolbar, interface size, pen, touch, indonesian
---

This is what changed in DetailCraft 0.6, compared with 0.5. The model you detail can now be analyzed where it stands.

## New

### Frame analysis

- **The Analysis tab.** Put loads on members, spread or point, in any direction, in load cases and combinations, then choose {{ui:Run analysis}}. You get the forces, moments, reactions and deflections of every beam, column and brace, and the deflected shape or a moment diagram on the model. See [Analyse the frame](topic:frame-analysis).
- **Supports from the model.** Base plates and end plates are rigid and shear tabs are pinned, and you can give any member's ends or a column's base a rule of its own. Starting assumptions, all changeable in the panel: column bases fixed, beam ends without a connection rigid, braces pinned, E 200 GPa, G 77 GPa. See [What the frame is made of](topic:frame-analysis#what-the-frame-is-made-of).
- **Mechanisms are named.** With pinned bases a frame may be able to move without bending, and the panel says where and which way.
- **A report.** {{ui:Report (PDF)}} and {{ui:Report (CSV)}} hold the assumptions, the loads and every result. {{ui:Export as CraftScript}} hands the frame to PartCraft's `frame3d` script, which gives the same results in readable code. See [The report](topic:frame-analysis#the-report).
- **An analysis aid, not a code check.** It sizes nothing and checks no capacities or connections: an engineer checks the model, the loads and what the numbers mean.

### Type a calculation

- **Arithmetic in Properties.** The number fields in the {{ui:Properties}} panel take a calculation, such as `2*450` or `4500/3`. See [Change a property on many members](topic:select-and-change#change-a-property-on-many-members).

## Changed

- The number boxes in Properties are now text boxes, so they can take a calculation. The arrow keys no longer step their values.

## Fixed

- Two messages used the wrong verb form in English.

## In every app

- **The toolbar can't get lost.** While full screen hides the bars, a small {{ui:Show bars}} tab stays at the top of the window. {{ui:Settings}} › {{ui:General}} › {{ui:Reset the layout}} puts the toolbar, panels, screen mode and menu style back to how the app starts (your interface size and panel text size stay). In CadCraft Studio, its own {{ui:Settings}} has {{ui:Reset the layout in every app}}. See [Where did my toolbar go?](common:lost-toolbar).
- **A menu on the toolbar.** Right-click the toolbar, or press and hold it, to arrange it, lock it so nothing moves by accident, or reset it. Ribbon menu styles collapse to their tab names: a tab opens its tools for one command; double-click a tab or use the pin to keep the ribbon open. See [The toolbar's own menu](common:lost-toolbar#the-toolbars-own-menu).
- **Interface size.** {{ui:Settings}} › {{ui:General}} › {{ui:Interface size}} makes the bars, toolbars, panels and dialogs 80 % to 140 % of normal, for this app only, so two apps side by side on one monitor both fit. The drawing keeps its own zoom. See [Everything is too big or too small](common:lost-toolbar#everything-is-too-big-or-too-small).
- **Pen and touch.** On a tablet or a touch-screen laptop with a pen, your palm is ignored while you draw, fingers can be left to moving the view, a two-finger tap undoes and a three-finger tap redoes, and the pen's side button and eraser end can undo or redo. {{ui:Settings}} › {{ui:General}} › {{ui:Pen and touch}}. See [Draw with a pen on a tablet](common:pen-and-touch).
- **Live sessions can grow past 20 people.** In CadCraft Studio, when more people knock than the usual 20, Studio tells you what to expect and you choose {{ui:Allow anyway}} for this session or {{ui:Keep it at 20}}. {{ui:Recent edits}} in the Live panel shows who changed what. See [Work together live](common:work-together-live#when-many-people-join).
- **Bahasa Indonesia** is new in {{ui:Settings}} › {{ui:General}} › {{ui:Language}}: a machine-made draft of every word, not yet reviewed by a native speaker. **Spanish (Mexico)** is still a draft too. Help topics are in English.
- **Installers are still not signed** (signing comes next, in 0.7), and CadCraft Studio is not in an app store yet. Check the SHA-256 beside each file on getcadcraft.com/download. On Windows, if SmartScreen stops the installer, choose {{ui:More info}}, then {{ui:Run anyway}}. On a Mac, the first time, right-click CadCraft Studio and choose {{ui:Open}}. There is no iPad or iPhone build yet.
- **Fixed:** with the bars hidden, {{ui:Arrange the toolbar…}} in Settings was grayed out, and from the keyboard it lost its place after the first move.

## Not in this version yet

- Frame analysis is first-order and linear, and checks no design code. Torsion constants for arbitrary outlines are estimates, and the panel says so. It hasn't been tried by an engineer on a real job yet. See [Analysis](topic:not-built-yet#analysis).
- Everything else is in [What is not built yet](topic:not-built-yet).
