﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TreeMapConfiguration.h>
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

TreeMapConfiguration::TreeMapConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TreeMapConfiguration& TreeMapConfiguration::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("GroupLabelOptions"))
  {
    m_groupLabelOptions = jsonValue.GetObject("GroupLabelOptions");
    m_groupLabelOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SizeLabelOptions"))
  {
    m_sizeLabelOptions = jsonValue.GetObject("SizeLabelOptions");
    m_sizeLabelOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColorLabelOptions"))
  {
    m_colorLabelOptions = jsonValue.GetObject("ColorLabelOptions");
    m_colorLabelOptionsHasBeenSet = true;
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
  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");
    m_interactionsHasBeenSet = true;
  }
  return *this;
}

JsonValue TreeMapConfiguration::Jsonize() const
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

  if(m_groupLabelOptionsHasBeenSet)
  {
   payload.WithObject("GroupLabelOptions", m_groupLabelOptions.Jsonize());

  }

  if(m_sizeLabelOptionsHasBeenSet)
  {
   payload.WithObject("SizeLabelOptions", m_sizeLabelOptions.Jsonize());

  }

  if(m_colorLabelOptionsHasBeenSet)
  {
   payload.WithObject("ColorLabelOptions", m_colorLabelOptions.Jsonize());

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

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
