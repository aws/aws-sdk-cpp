/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ScatterPlotSortConfiguration.h>
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

ScatterPlotSortConfiguration::ScatterPlotSortConfiguration() : 
    m_scatterPlotLimitConfigurationHasBeenSet(false)
{
}

ScatterPlotSortConfiguration::ScatterPlotSortConfiguration(JsonView jsonValue) : 
    m_scatterPlotLimitConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ScatterPlotSortConfiguration& ScatterPlotSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScatterPlotLimitConfiguration"))
  {
    m_scatterPlotLimitConfiguration = jsonValue.GetObject("ScatterPlotLimitConfiguration");

    m_scatterPlotLimitConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ScatterPlotSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scatterPlotLimitConfigurationHasBeenSet)
  {
   payload.WithObject("ScatterPlotLimitConfiguration", m_scatterPlotLimitConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
