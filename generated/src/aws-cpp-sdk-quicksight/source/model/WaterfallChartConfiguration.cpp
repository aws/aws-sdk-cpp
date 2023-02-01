/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WaterfallChartConfiguration.h>
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

WaterfallChartConfiguration::WaterfallChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_waterfallChartOptionsHasBeenSet(false),
    m_categoryAxisLabelOptionsHasBeenSet(false),
    m_categoryAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
}

WaterfallChartConfiguration::WaterfallChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_waterfallChartOptionsHasBeenSet(false),
    m_categoryAxisLabelOptionsHasBeenSet(false),
    m_categoryAxisDisplayOptionsHasBeenSet(false),
    m_primaryYAxisLabelOptionsHasBeenSet(false),
    m_primaryYAxisDisplayOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
  *this = jsonValue;
}

WaterfallChartConfiguration& WaterfallChartConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("WaterfallChartOptions"))
  {
    m_waterfallChartOptions = jsonValue.GetObject("WaterfallChartOptions");

    m_waterfallChartOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryAxisLabelOptions"))
  {
    m_categoryAxisLabelOptions = jsonValue.GetObject("CategoryAxisLabelOptions");

    m_categoryAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryAxisDisplayOptions"))
  {
    m_categoryAxisDisplayOptions = jsonValue.GetObject("CategoryAxisDisplayOptions");

    m_categoryAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryYAxisLabelOptions"))
  {
    m_primaryYAxisLabelOptions = jsonValue.GetObject("PrimaryYAxisLabelOptions");

    m_primaryYAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryYAxisDisplayOptions"))
  {
    m_primaryYAxisDisplayOptions = jsonValue.GetObject("PrimaryYAxisDisplayOptions");

    m_primaryYAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Legend"))
  {
    m_legend = jsonValue.GetObject("Legend");

    m_legendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLabels"))
  {
    m_dataLabels = jsonValue.GetObject("DataLabels");

    m_dataLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
  }

  return *this;
}

JsonValue WaterfallChartConfiguration::Jsonize() const
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

  if(m_waterfallChartOptionsHasBeenSet)
  {
   payload.WithObject("WaterfallChartOptions", m_waterfallChartOptions.Jsonize());

  }

  if(m_categoryAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("CategoryAxisLabelOptions", m_categoryAxisLabelOptions.Jsonize());

  }

  if(m_categoryAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("CategoryAxisDisplayOptions", m_categoryAxisDisplayOptions.Jsonize());

  }

  if(m_primaryYAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("PrimaryYAxisLabelOptions", m_primaryYAxisLabelOptions.Jsonize());

  }

  if(m_primaryYAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("PrimaryYAxisDisplayOptions", m_primaryYAxisDisplayOptions.Jsonize());

  }

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_dataLabelsHasBeenSet)
  {
   payload.WithObject("DataLabels", m_dataLabels.Jsonize());

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
