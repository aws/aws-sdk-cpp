/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HeatMapConfiguration.h>
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

HeatMapConfiguration::HeatMapConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_rowLabelOptionsHasBeenSet(false),
    m_columnLabelOptionsHasBeenSet(false),
    m_colorScaleHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false)
{
}

HeatMapConfiguration::HeatMapConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_rowLabelOptionsHasBeenSet(false),
    m_columnLabelOptionsHasBeenSet(false),
    m_colorScaleHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false)
{
  *this = jsonValue;
}

HeatMapConfiguration& HeatMapConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("RowLabelOptions"))
  {
    m_rowLabelOptions = jsonValue.GetObject("RowLabelOptions");

    m_rowLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnLabelOptions"))
  {
    m_columnLabelOptions = jsonValue.GetObject("ColumnLabelOptions");

    m_columnLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColorScale"))
  {
    m_colorScale = jsonValue.GetObject("ColorScale");

    m_colorScaleHasBeenSet = true;
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

  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetObject("Tooltip");

    m_tooltipHasBeenSet = true;
  }

  return *this;
}

JsonValue HeatMapConfiguration::Jsonize() const
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

  if(m_rowLabelOptionsHasBeenSet)
  {
   payload.WithObject("RowLabelOptions", m_rowLabelOptions.Jsonize());

  }

  if(m_columnLabelOptionsHasBeenSet)
  {
   payload.WithObject("ColumnLabelOptions", m_columnLabelOptions.Jsonize());

  }

  if(m_colorScaleHasBeenSet)
  {
   payload.WithObject("ColorScale", m_colorScale.Jsonize());

  }

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_dataLabelsHasBeenSet)
  {
   payload.WithObject("DataLabels", m_dataLabels.Jsonize());

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
