/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WaterfallChartColorConfiguration.h>
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

WaterfallChartColorConfiguration::WaterfallChartColorConfiguration() : 
    m_groupColorConfigurationHasBeenSet(false)
{
}

WaterfallChartColorConfiguration::WaterfallChartColorConfiguration(JsonView jsonValue) : 
    m_groupColorConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WaterfallChartColorConfiguration& WaterfallChartColorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupColorConfiguration"))
  {
    m_groupColorConfiguration = jsonValue.GetObject("GroupColorConfiguration");

    m_groupColorConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WaterfallChartColorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_groupColorConfigurationHasBeenSet)
  {
   payload.WithObject("GroupColorConfiguration", m_groupColorConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
