/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RecommendationItem.h>
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

RecommendationItem::RecommendationItem() : 
    m_alreadyImplemented(false),
    m_alreadyImplementedHasBeenSet(false),
    m_excludeReason(ExcludeRecommendationReason::NOT_SET),
    m_excludeReasonHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false),
    m_targetRegionHasBeenSet(false)
{
}

RecommendationItem::RecommendationItem(JsonView jsonValue) : 
    m_alreadyImplemented(false),
    m_alreadyImplementedHasBeenSet(false),
    m_excludeReason(ExcludeRecommendationReason::NOT_SET),
    m_excludeReasonHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false),
    m_targetRegionHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationItem& RecommendationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alreadyImplemented"))
  {
    m_alreadyImplemented = jsonValue.GetBool("alreadyImplemented");

    m_alreadyImplementedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excludeReason"))
  {
    m_excludeReason = ExcludeRecommendationReasonMapper::GetExcludeRecommendationReasonForName(jsonValue.GetString("excludeReason"));

    m_excludeReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excluded"))
  {
    m_excluded = jsonValue.GetBool("excluded");

    m_excludedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetAccountId"))
  {
    m_targetAccountId = jsonValue.GetString("targetAccountId");

    m_targetAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetRegion"))
  {
    m_targetRegion = jsonValue.GetString("targetRegion");

    m_targetRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationItem::Jsonize() const
{
  JsonValue payload;

  if(m_alreadyImplementedHasBeenSet)
  {
   payload.WithBool("alreadyImplemented", m_alreadyImplemented);

  }

  if(m_excludeReasonHasBeenSet)
  {
   payload.WithString("excludeReason", ExcludeRecommendationReasonMapper::GetNameForExcludeRecommendationReason(m_excludeReason));
  }

  if(m_excludedHasBeenSet)
  {
   payload.WithBool("excluded", m_excluded);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_targetAccountIdHasBeenSet)
  {
   payload.WithString("targetAccountId", m_targetAccountId);

  }

  if(m_targetRegionHasBeenSet)
  {
   payload.WithString("targetRegion", m_targetRegion);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
