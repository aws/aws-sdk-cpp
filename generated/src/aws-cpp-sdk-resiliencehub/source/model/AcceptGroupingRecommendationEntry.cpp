/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AcceptGroupingRecommendationEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

AcceptGroupingRecommendationEntry::AcceptGroupingRecommendationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

AcceptGroupingRecommendationEntry& AcceptGroupingRecommendationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupingRecommendationId"))
  {
    m_groupingRecommendationId = jsonValue.GetString("groupingRecommendationId");
    m_groupingRecommendationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AcceptGroupingRecommendationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_groupingRecommendationIdHasBeenSet)
  {
   payload.WithString("groupingRecommendationId", m_groupingRecommendationId);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
