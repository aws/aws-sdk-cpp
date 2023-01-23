/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIFieldWells.h>
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

KPIFieldWells::KPIFieldWells() : 
    m_valuesHasBeenSet(false),
    m_targetValuesHasBeenSet(false),
    m_trendGroupsHasBeenSet(false)
{
}

KPIFieldWells::KPIFieldWells(JsonView jsonValue) : 
    m_valuesHasBeenSet(false),
    m_targetValuesHasBeenSet(false),
    m_trendGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

KPIFieldWells& KPIFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetValues"))
  {
    Aws::Utils::Array<JsonView> targetValuesJsonList = jsonValue.GetArray("TargetValues");
    for(unsigned targetValuesIndex = 0; targetValuesIndex < targetValuesJsonList.GetLength(); ++targetValuesIndex)
    {
      m_targetValues.push_back(targetValuesJsonList[targetValuesIndex].AsObject());
    }
    m_targetValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrendGroups"))
  {
    Aws::Utils::Array<JsonView> trendGroupsJsonList = jsonValue.GetArray("TrendGroups");
    for(unsigned trendGroupsIndex = 0; trendGroupsIndex < trendGroupsJsonList.GetLength(); ++trendGroupsIndex)
    {
      m_trendGroups.push_back(trendGroupsJsonList[trendGroupsIndex].AsObject());
    }
    m_trendGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue KPIFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_targetValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetValuesJsonList(m_targetValues.size());
   for(unsigned targetValuesIndex = 0; targetValuesIndex < targetValuesJsonList.GetLength(); ++targetValuesIndex)
   {
     targetValuesJsonList[targetValuesIndex].AsObject(m_targetValues[targetValuesIndex].Jsonize());
   }
   payload.WithArray("TargetValues", std::move(targetValuesJsonList));

  }

  if(m_trendGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trendGroupsJsonList(m_trendGroups.size());
   for(unsigned trendGroupsIndex = 0; trendGroupsIndex < trendGroupsJsonList.GetLength(); ++trendGroupsIndex)
   {
     trendGroupsJsonList[trendGroupsIndex].AsObject(m_trendGroups[trendGroupsIndex].Jsonize());
   }
   payload.WithArray("TrendGroups", std::move(trendGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
