---
title: Profile catalog
summary: Every built-in steel size, how profile names are written, where the dimensions come from, and how plates and custom sections are named.
section: reference
order: 20
keywords: profiles, sections, catalog, sizes, w shapes, wide flange, channel, angle, hss, tube, ipe, hea, heb, plate, aisc, en 10365, naming
---

DetailCraft has 45 built-in sizes, each copied from a published table and checked by the app's tests: the area worked out from the dimensions must match the published area, and the published weight must match that area times the density of steel. Plates and custom profiles are made from their dimensions.

## Naming

- **US shapes** are written the way the AISC Manual prints them, with a lowercase x: W12x50, C10x15.3, L4x4x1/2, HSS6x6x1/4, HSS6.625x0.280. Typing is not case-sensitive.
- **European shapes** are written as in EN 10365: IPE200, HEA240, HEB300 (no space).
- **Plates** are `PL<thickness>x<width>` in millimeters: PL20x200 is 20 mm thick and 200 mm wide. Any size from the {{ui:Plate}} tool works.
- **Custom profiles** have whatever name you give them, as long as it is not a catalog name and does not look like a plate name.

In the {{ui:Profile}} lists, each group's heading names its source, for example "W shapes — AISC Shapes Database v16.0".

## Sources

| Group | Source | Notes |
|---|---|---|
| W shapes, Channels (C), Angles (L), HSS | AISC Shapes Database v16.0 | Dimensions converted from inches to millimeters exactly; mass per meter from the published lb/ft |
| IPE, HEA, HEB | EN 10365:2017 | Millimeters and kg/m as published |
| Plates | Parametric | Mass from area × 7850 kg/m³ |
| Custom | Your dimensions | Mass from area × 7850 kg/m³ |

How shapes are drawn:

- **W shapes:** the AISC database gives no fillet radius, so DetailCraft draws the fillet as r = kdes − tf.
- **Channels:** parallel flanges of the published average thickness, square corners (the real flange is sloped).
- **Angles:** square corners.
- **Rectangular HSS:** the design wall thickness (0.93 × nominal, as AISC 360-22 B4.2 allows) with an outer corner radius of twice that.
- **Round HSS:** design wall thickness.
- **IPE, HEA, HEB:** the published root radius.

## The sizes

| Group | Sizes |
|---|---|
| W shapes (15) | W8x10, W8x31, W10x33, W10x49, W12x26, W12x40, W12x50, W14x22, W14x30, W14x90, W16x26, W16x31, W18x35, W21x44, W24x55 |
| Channels (3) | C8x11.5, C10x15.3, C12x20.7 |
| Angles, equal legs (5) | L3x3x1/4, L4x4x3/8, L4x4x1/2, L5x5x1/2, L6x6x1/2 |
| Rectangular HSS (5) | HSS4x4x1/4, HSS6x4x1/4, HSS6x6x1/4, HSS8x8x3/8, HSS8x8x1/2 |
| Round HSS (2) | HSS4.500x0.237, HSS6.625x0.280 |
| IPE (7) | IPE100, IPE160, IPE200, IPE240, IPE300, IPE360, IPE400 |
| HEA (4) | HEA160, HEA200, HEA240, HEA300 |
| HEB (4) | HEB160, HEB200, HEB240, HEB300 |

Choose a placing tool and pick a size to see its depth, flange width, web and flange thickness, fillet radius, area (cm²), mass (kg/m) and source in the {{ui:Profile}} box of the {{ui:Properties}} panel.

## What each shape can do

| Shape | Holes | Copes | End plates and base plates | NC file | Shop drawing |
|---|---|---|---|---|---|
| I-shapes (W, IPE, HEA, HEB, custom I) | Web, top flange, bottom flange | Yes | End plates: beam and column. Base plates: yes | Yes | Yes |
| Channels | Web, top flange, bottom flange | No | Base plates only | Not yet | Not yet |
| Rectangular HSS | Side wall (web), top, bottom | No | Base plates only | Not yet | Not yet |
| Round HSS | Not yet | No | Base plates only | Not yet | Not yet |
| Angles | Not yet | No | Base plates only | Not yet | Not yet |
| Plates and custom flat bars | Plate face | No | No | Yes | Yes |

For a rectangular tube, a hole on the "web" face goes through both side walls.

## Need another size?

Add it as a [custom profile](topic:plates-and-profiles#add-a-custom-profile). The built-in list cannot be edited from the app yet.
