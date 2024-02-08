/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RadarChartConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RadarChartConfiguration::RadarChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_shape(RadarChartShape::NOT_SET),
    m_shapeHasBeenSet(false),
    m_baseSeriesSettingsHasBeenSet(false),
    m_startAngle(0.0),
    m_startAngleHasBeenSet(false),
    m_visualPaletteHasBeenSet(false),
    m_alternateBandColorsVisibility(Visibility::NOT_SET),
    m_alternateBandColorsVisibilityHasBeenSet(false),
    m_alternateBandEvenColorHasBeenSet(false),
    m_alternateBandOddColorHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_colorAxisHasBeenSet(false),
    m_colorLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_axesRangeScale(RadarChartAxesRangeScale::NOT_SET),
    m_axesRangeScaleHasBeenSet(false),
    m_interactionsHasBeenSet(false)
{
}

RadarChartConfiguration::RadarChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_shape(RadarChartShape::NOT_SET),
    m_shapeHasBeenSet(false),
    m_baseSeriesSettingsHasBeenSet(false),
    m_startAngle(0.0),
    m_startAngleHasBeenSet(false),
    m_visualPaletteHasBeenSet(false),
    m_alternateBandColorsVisibility(Visibility::NOT_SET),
    m_alternateBandColorsVisibilityHasBeenSet(false),
    m_alternateBandEvenColorHasBeenSet(false),
    m_alternateBandOddColorHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_colorAxisHasBeenSet(false),
    m_colorLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_axesRangeScale(RadarChartAxesRangeScale::NOT_SET),
    m_axesRangeScaleHasBeenSet(false),
    m_interactionsHasBeenSet(false)
{
  *this = jsonValue;
}

RadarChartConfiguration& RadarChartConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    m_fieldWells = jsonValue.GetObject("FieldWells");

    m_fieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortConfiguration"))
  {
    m_sortConfiguration = jsonValue.GetObject("SortConfiguration");

    m_sortConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shape"))
  {
    m_shape = RadarChartShapeMapper::GetRadarChartShapeForName(jsonValue.GetString("Shape"));

    m_shapeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseSeriesSettings"))
  {
    m_baseSeriesSettings = jsonValue.GetObject("BaseSeriesSettings");

    m_baseSeriesSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartAngle"))
  {
    m_startAngle = jsonValue.GetDouble("StartAngle");

    m_startAngleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlternateBandColorsVisibility"))
  {
    m_alternateBandColorsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("AlternateBandColorsVisibility"));

    m_alternateBandColorsVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlternateBandEvenColor"))
  {
    m_alternateBandEvenColor = jsonValue.GetString("AlternateBandEvenColor");

    m_alternateBandEvenColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlternateBandOddColor"))
  {
    m_alternateBandOddColor = jsonValue.GetString("AlternateBandOddColor");

    m_alternateBandOddColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryAxis"))
  {
    m_categoryAxis = jsonValue.GetObject("CategoryAxis");

    m_categoryAxisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryLabelOptions"))
  {
    m_categoryLabelOptions = jsonValue.GetObject("CategoryLabelOptions");

    m_categoryLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColorAxis"))
  {
    m_colorAxis = jsonValue.GetObject("ColorAxis");

    m_colorAxisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColorLabelOptions"))
  {
    m_colorLabelOptions = jsonValue.GetObject("ColorLabelOptions");

    m_colorLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Legend"))
  {
    m_legend = jsonValue.GetObject("Legend");

    m_legendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AxesRangeScale"))
  {
    m_axesRangeScale = RadarChartAxesRangeScaleMapper::GetRadarChartAxesRangeScaleForName(jsonValue.GetString("AxesRangeScale"));

    m_axesRangeScaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");

    m_interactionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RadarChartConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   payload.WithObject("FieldWells", m_fieldWells.Jsonize());

  }

  if(m_sortConfigurationHasBeenSet)
  {
   payload.WithObject("SortConfiguration", m_sortConfiguration.Jsonize());

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("Shape", RadarChartShapeMapper::GetNameForRadarChartShape(m_shape));
  }

  if(m_baseSeriesSettingsHasBeenSet)
  {
   payload.WithObject("BaseSeriesSettings", m_baseSeriesSettings.Jsonize());

  }

  if(m_startAngleHasBeenSet)
  {
   payload.WithDouble("StartAngle", m_startAngle);

  }

  if(m_visualPaletteHasBeenSet)
  {
   payload.WithObject("VisualPalette", m_visualPalette.Jsonize());

  }

  if(m_alternateBandColorsVisibilityHasBeenSet)
  {
   payload.WithString("AlternateBandColorsVisibility", VisibilityMapper::GetNameForVisibility(m_alternateBandColorsVisibility));
  }

  if(m_alternateBandEvenColorHasBeenSet)
  {
   payload.WithString("AlternateBandEvenColor", m_alternateBandEvenColor);

  }

  if(m_alternateBandOddColorHasBeenSet)
  {
   payload.WithString("AlternateBandOddColor", m_alternateBandOddColor);

  }

  if(m_categoryAxisHasBeenSet)
  {
   payload.WithObject("CategoryAxis", m_categoryAxis.Jsonize());

  }

  if(m_categoryLabelOptionsHasBeenSet)
  {
   payload.WithObject("CategoryLabelOptions", m_categoryLabelOptions.Jsonize());

  }

  if(m_colorAxisHasBeenSet)
  {
   payload.WithObject("ColorAxis", m_colorAxis.Jsonize());

  }

  if(m_colorLabelOptionsHasBeenSet)
  {
   payload.WithObject("ColorLabelOptions", m_colorLabelOptions.Jsonize());

  }

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_axesRangeScaleHasBeenSet)
  {
   payload.WithString("AxesRangeScale", RadarChartAxesRangeScaleMapper::GetNameForRadarChartAxesRangeScale(m_axesRangeScale));
  }

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
