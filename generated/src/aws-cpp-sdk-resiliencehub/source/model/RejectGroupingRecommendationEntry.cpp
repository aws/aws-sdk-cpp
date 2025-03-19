/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RejectGroupingRecommendationEntry.h>
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

RejectGroupingRecommendationEntry::RejectGroupingRecommendationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

RejectGroupingRecommendationEntry& RejectGroupingRecommendationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupingRecommendationId"))
  {
    m_groupingRecommendationId = jsonValue.GetString("groupingRecommendationId");
    m_groupingRecommendationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rejectionReason"))
  {
    m_rejectionReason = GroupingRecommendationRejectionReasonMapper::GetGroupingRecommendationRejectionReasonForName(jsonValue.GetString("rejectionReason"));
    m_rejectionReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue RejectGroupingRecommendationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_groupingRecommendationIdHasBeenSet)
  {
   payload.WithString("groupingRecommendationId", m_groupingRecommendationId);

  }

  if(m_rejectionReasonHasBeenSet)
  {
   payload.WithString("rejectionReason", GroupingRecommendationRejectionReasonMapper::GetNameForGroupingRecommendationRejectionReason(m_rejectionReason));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
