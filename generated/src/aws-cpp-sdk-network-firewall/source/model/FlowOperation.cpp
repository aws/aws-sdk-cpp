/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FlowOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

FlowOperation::FlowOperation(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowOperation& FlowOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumFlowAgeInSeconds"))
  {
    m_minimumFlowAgeInSeconds = jsonValue.GetInteger("MinimumFlowAgeInSeconds");
    m_minimumFlowAgeInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowFilters"))
  {
    Aws::Utils::Array<JsonView> flowFiltersJsonList = jsonValue.GetArray("FlowFilters");
    for(unsigned flowFiltersIndex = 0; flowFiltersIndex < flowFiltersJsonList.GetLength(); ++flowFiltersIndex)
    {
      m_flowFilters.push_back(flowFiltersJsonList[flowFiltersIndex].AsObject());
    }
    m_flowFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowOperation::Jsonize() const
{
  JsonValue payload;

  if(m_minimumFlowAgeInSecondsHasBeenSet)
  {
   payload.WithInteger("MinimumFlowAgeInSeconds", m_minimumFlowAgeInSeconds);

  }

  if(m_flowFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> flowFiltersJsonList(m_flowFilters.size());
   for(unsigned flowFiltersIndex = 0; flowFiltersIndex < flowFiltersJsonList.GetLength(); ++flowFiltersIndex)
   {
     flowFiltersJsonList[flowFiltersIndex].AsObject(m_flowFilters[flowFiltersIndex].Jsonize());
   }
   payload.WithArray("FlowFilters", std::move(flowFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
