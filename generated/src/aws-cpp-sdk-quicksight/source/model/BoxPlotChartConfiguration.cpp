/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BoxPlotChartConfiguration.h>
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

BoxPlotChartConfiguration::BoxPlotChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_boxPlotOptionsHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
}

BoxPlotChartConfiguration::BoxPlotChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_boxPlotOptionsHasBeenSet(false),
    m_categoryAxisHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_referenceLinesHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
  *this = jsonValue;
}

BoxPlotChartConfiguration& BoxPlotChartConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("BoxPlotOptions"))
  {
    m_boxPlotOptions = jsonValue.GetObject("BoxPlotOptions");

    m_boxPlotOptionsHasBeenSet = true;
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

  if(jsonValue.ValueExists("Legend"))
  {
    m_legend = jsonValue.GetObject("Legend");

    m_legendHasBeenSet = true;
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

JsonValue BoxPlotChartConfiguration::Jsonize() const
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

  if(m_boxPlotOptionsHasBeenSet)
  {
   payload.WithObject("BoxPlotOptions", m_boxPlotOptions.Jsonize());

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

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

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
