/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/FailedGroupingRecommendationEntry.h>
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

FailedGroupingRecommendationEntry::FailedGroupingRecommendationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

FailedGroupingRecommendationEntry& FailedGroupingRecommendationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupingRecommendationId"))
  {
    m_groupingRecommendationId = jsonValue.GetString("groupingRecommendationId");
    m_groupingRecommendationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedGroupingRecommendationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_groupingRecommendationIdHasBeenSet)
  {
   payload.WithString("groupingRecommendationId", m_groupingRecommendationId);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
