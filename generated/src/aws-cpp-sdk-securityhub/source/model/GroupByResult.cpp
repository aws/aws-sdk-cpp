/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GroupByResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

GroupByResult::GroupByResult(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupByResult& GroupByResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupByField"))
  {
    m_groupByField = jsonValue.GetString("GroupByField");
    m_groupByFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupByValues"))
  {
    Aws::Utils::Array<JsonView> groupByValuesJsonList = jsonValue.GetArray("GroupByValues");
    for(unsigned groupByValuesIndex = 0; groupByValuesIndex < groupByValuesJsonList.GetLength(); ++groupByValuesIndex)
    {
      m_groupByValues.push_back(groupByValuesJsonList[groupByValuesIndex].AsObject());
    }
    m_groupByValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupByResult::Jsonize() const
{
  JsonValue payload;

  if(m_groupByFieldHasBeenSet)
  {
   payload.WithString("GroupByField", m_groupByField);

  }

  if(m_groupByValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByValuesJsonList(m_groupByValues.size());
   for(unsigned groupByValuesIndex = 0; groupByValuesIndex < groupByValuesJsonList.GetLength(); ++groupByValuesIndex)
   {
     groupByValuesJsonList[groupByValuesIndex].AsObject(m_groupByValues[groupByValuesIndex].Jsonize());
   }
   payload.WithArray("GroupByValues", std::move(groupByValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
