/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GaugeChartConfiguration.h>
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

GaugeChartConfiguration::GaugeChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_gaugeChartOptionsHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipOptionsHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
}

GaugeChartConfiguration::GaugeChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_gaugeChartOptionsHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipOptionsHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
  *this = jsonValue;
}

GaugeChartConfiguration& GaugeChartConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    m_fieldWells = jsonValue.GetObject("FieldWells");

    m_fieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GaugeChartOptions"))
  {
    m_gaugeChartOptions = jsonValue.GetObject("GaugeChartOptions");

    m_gaugeChartOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLabels"))
  {
    m_dataLabels = jsonValue.GetObject("DataLabels");

    m_dataLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TooltipOptions"))
  {
    m_tooltipOptions = jsonValue.GetObject("TooltipOptions");

    m_tooltipOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
  }

  return *this;
}

JsonValue GaugeChartConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   payload.WithObject("FieldWells", m_fieldWells.Jsonize());

  }

  if(m_gaugeChartOptionsHasBeenSet)
  {
   payload.WithObject("GaugeChartOptions", m_gaugeChartOptions.Jsonize());

  }

  if(m_dataLabelsHasBeenSet)
  {
   payload.WithObject("DataLabels", m_dataLabels.Jsonize());

  }

  if(m_tooltipOptionsHasBeenSet)
  {
   payload.WithObject("TooltipOptions", m_tooltipOptions.Jsonize());

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
