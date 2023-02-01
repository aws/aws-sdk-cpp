/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HeatMapSortConfiguration.h>
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

HeatMapSortConfiguration::HeatMapSortConfiguration() : 
    m_heatMapRowSortHasBeenSet(false),
    m_heatMapColumnSortHasBeenSet(false),
    m_heatMapRowItemsLimitConfigurationHasBeenSet(false),
    m_heatMapColumnItemsLimitConfigurationHasBeenSet(false)
{
}

HeatMapSortConfiguration::HeatMapSortConfiguration(JsonView jsonValue) : 
    m_heatMapRowSortHasBeenSet(false),
    m_heatMapColumnSortHasBeenSet(false),
    m_heatMapRowItemsLimitConfigurationHasBeenSet(false),
    m_heatMapColumnItemsLimitConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

HeatMapSortConfiguration& HeatMapSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeatMapRowSort"))
  {
    Aws::Utils::Array<JsonView> heatMapRowSortJsonList = jsonValue.GetArray("HeatMapRowSort");
    for(unsigned heatMapRowSortIndex = 0; heatMapRowSortIndex < heatMapRowSortJsonList.GetLength(); ++heatMapRowSortIndex)
    {
      m_heatMapRowSort.push_back(heatMapRowSortJsonList[heatMapRowSortIndex].AsObject());
    }
    m_heatMapRowSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeatMapColumnSort"))
  {
    Aws::Utils::Array<JsonView> heatMapColumnSortJsonList = jsonValue.GetArray("HeatMapColumnSort");
    for(unsigned heatMapColumnSortIndex = 0; heatMapColumnSortIndex < heatMapColumnSortJsonList.GetLength(); ++heatMapColumnSortIndex)
    {
      m_heatMapColumnSort.push_back(heatMapColumnSortJsonList[heatMapColumnSortIndex].AsObject());
    }
    m_heatMapColumnSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeatMapRowItemsLimitConfiguration"))
  {
    m_heatMapRowItemsLimitConfiguration = jsonValue.GetObject("HeatMapRowItemsLimitConfiguration");

    m_heatMapRowItemsLimitConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeatMapColumnItemsLimitConfiguration"))
  {
    m_heatMapColumnItemsLimitConfiguration = jsonValue.GetObject("HeatMapColumnItemsLimitConfiguration");

    m_heatMapColumnItemsLimitConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue HeatMapSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_heatMapRowSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> heatMapRowSortJsonList(m_heatMapRowSort.size());
   for(unsigned heatMapRowSortIndex = 0; heatMapRowSortIndex < heatMapRowSortJsonList.GetLength(); ++heatMapRowSortIndex)
   {
     heatMapRowSortJsonList[heatMapRowSortIndex].AsObject(m_heatMapRowSort[heatMapRowSortIndex].Jsonize());
   }
   payload.WithArray("HeatMapRowSort", std::move(heatMapRowSortJsonList));

  }

  if(m_heatMapColumnSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> heatMapColumnSortJsonList(m_heatMapColumnSort.size());
   for(unsigned heatMapColumnSortIndex = 0; heatMapColumnSortIndex < heatMapColumnSortJsonList.GetLength(); ++heatMapColumnSortIndex)
   {
     heatMapColumnSortJsonList[heatMapColumnSortIndex].AsObject(m_heatMapColumnSort[heatMapColumnSortIndex].Jsonize());
   }
   payload.WithArray("HeatMapColumnSort", std::move(heatMapColumnSortJsonList));

  }

  if(m_heatMapRowItemsLimitConfigurationHasBeenSet)
  {
   payload.WithObject("HeatMapRowItemsLimitConfiguration", m_heatMapRowItemsLimitConfiguration.Jsonize());

  }

  if(m_heatMapColumnItemsLimitConfigurationHasBeenSet)
  {
   payload.WithObject("HeatMapColumnItemsLimitConfiguration", m_heatMapColumnItemsLimitConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
