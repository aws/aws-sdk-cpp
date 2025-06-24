/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetFindingStatisticsV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetFindingStatisticsV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_groupByRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByRulesJsonList(m_groupByRules.size());
   for(unsigned groupByRulesIndex = 0; groupByRulesIndex < groupByRulesJsonList.GetLength(); ++groupByRulesIndex)
   {
     groupByRulesJsonList[groupByRulesIndex].AsObject(m_groupByRules[groupByRulesIndex].Jsonize());
   }
   payload.WithArray("GroupByRules", std::move(groupByRulesJsonList));

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_maxStatisticResultsHasBeenSet)
  {
   payload.WithInteger("MaxStatisticResults", m_maxStatisticResults);

  }

  return payload.View().WriteReadable();
}




