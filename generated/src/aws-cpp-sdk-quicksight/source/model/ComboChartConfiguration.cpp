/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComboChartConfiguration.h>
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

ComboChartConfiguration::ComboChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_barsArrangement(BarsArrangement::NOT_SET),
    m_barsArrangementHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_secondaryYAxisDisplayOptionsHasBeenSet(false),
    m_secondaryYAxisLabelOptionsHasBeenSet(false),
    m_colorLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_barDataLabelsHasBeenSet(false),
    m_lineDataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
}

ComboChartConfiguration::ComboChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_barsArrangement(BarsArrangement::NOT_SET),
    m_barsArrangementHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_secondaryYAxisDisplayOptionsHasBeenSet(false),
    m_secondaryYAxisLabelOptionsHasBeenSet(false),
    m_colorLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_barDataLabelsHasBeenSet(false),
    m_lineDataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
  *this = jsonValue;
}

ComboChartConfiguration& ComboChartConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("BarsArrangement"))
  {
    m_barsArrangement = BarsArrangementMapper::GetBarsArrangementForName(jsonValue.GetString("BarsArrangement"));

    m_barsArrangementHasBeenSet = true;
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

  if(jsonValue.ValueExists("PrimaryYAxisDisplayOptions"))
  {
    m_primaryYAxisDisplayOptions = jsonValue.GetObject("PrimaryYAxisDisplayOptions");

    m_primaryYAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryYAxisLabelOptions"))
  {
    m_primaryYAxisLabelOptions = jsonValue.GetObject("PrimaryYAxisLabelOptions");

    m_primaryYAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryYAxisDisplayOptions"))
  {
    m_secondaryYAxisDisplayOptions = jsonValue.GetObject("SecondaryYAxisDisplayOptions");

    m_secondaryYAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryYAxisLabelOptions"))
  {
    m_secondaryYAxisLabelOptions = jsonValue.GetObject("SecondaryYAxisLabelOptions");

    m_secondaryYAxisLabelOptionsHasBeenSet = true;
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

  if(jsonValue.ValueExists("BarDataLabels"))
  {
    m_barDataLabels = jsonValue.GetObject("BarDataLabels");

    m_barDataLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineDataLabels"))
  {
    m_lineDataLabels = jsonValue.GetObject("LineDataLabels");

    m_lineDataLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetObject("Tooltip");

    m_tooltipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceLines"))
  {
    Aws::Utils::Array<JsonView> referenceLinesJsonList = jsonValue.GetArray("ReferenceLines");
    for(unsigned referenceLinesIndex = 0; referenceLinesIndex < referenceLinesJsonList.GetLength(); ++referenceLinesIndex)
    {
      m_referenceLines.push_back(referenceLinesJsonList[referenceLinesIndex].AsObject());
    }
    m_referenceLinesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
  }

  return *this;
}

JsonValue ComboChartConfiguration::Jsonize() const
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

  if(m_barsArrangementHasBeenSet)
  {
   payload.WithString("BarsArrangement", BarsArrangementMapper::GetNameForBarsArrangement(m_barsArrangement));
  }

  if(m_categoryAxisHasBeenSet)
  {
   payload.WithObject("CategoryAxis", m_categoryAxis.Jsonize());

  }

  if(m_categoryLabelOptionsHasBeenSet)
  {
   payload.WithObject("CategoryLabelOptions", m_categoryLabelOptions.Jsonize());

  }

  if(m_primaryYAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("PrimaryYAxisDisplayOptions", m_primaryYAxisDisplayOptions.Jsonize());

  }

  if(m_primaryYAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("PrimaryYAxisLabelOptions", m_primaryYAxisLabelOptions.Jsonize());

  }

  if(m_secondaryYAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("SecondaryYAxisDisplayOptions", m_secondaryYAxisDisplayOptions.Jsonize());

  }

  if(m_secondaryYAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("SecondaryYAxisLabelOptions", m_secondaryYAxisLabelOptions.Jsonize());

  }

  if(m_colorLabelOptionsHasBeenSet)
  {
   payload.WithObject("ColorLabelOptions", m_colorLabelOptions.Jsonize());

  }

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_barDataLabelsHasBeenSet)
  {
   payload.WithObject("BarDataLabels", m_barDataLabels.Jsonize());

  }

  if(m_lineDataLabelsHasBeenSet)
  {
   payload.WithObject("LineDataLabels", m_lineDataLabels.Jsonize());

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

  }

  if(m_referenceLinesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referenceLinesJsonList(m_referenceLines.size());
   for(unsigned referenceLinesIndex = 0; referenceLinesIndex < referenceLinesJsonList.GetLength(); ++referenceLinesIndex)
   {
     referenceLinesJsonList[referenceLinesIndex].AsObject(m_referenceLines[referenceLinesIndex].Jsonize());
   }
   payload.WithArray("ReferenceLines", std::move(referenceLinesJsonList));

  }

  if(m_visualPaletteHasBeenSet)
  {
   payload.WithObject("VisualPalette", m_visualPalette.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
