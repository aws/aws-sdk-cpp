﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilledMapConfiguration.h>
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

FilledMapConfiguration::FilledMapConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FilledMapConfiguration& FilledMapConfiguration::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("WindowOptions"))
  {
    m_windowOptions = jsonValue.GetObject("WindowOptions");
    m_windowOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MapStyleOptions"))
  {
    m_mapStyleOptions = jsonValue.GetObject("MapStyleOptions");
    m_mapStyleOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");
    m_interactionsHasBeenSet = true;
  }
  return *this;
}

JsonValue FilledMapConfiguration::Jsonize() const
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

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

  }

  if(m_windowOptionsHasBeenSet)
  {
   payload.WithObject("WindowOptions", m_windowOptions.Jsonize());

  }

  if(m_mapStyleOptionsHasBeenSet)
  {
   payload.WithObject("MapStyleOptions", m_mapStyleOptions.Jsonize());

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
