/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/UpdateRecommendationStatusItem.h>
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

UpdateRecommendationStatusItem::UpdateRecommendationStatusItem() : 
    m_resourceIdHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false),
    m_targetRegionHasBeenSet(false)
{
}

UpdateRecommendationStatusItem::UpdateRecommendationStatusItem(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false),
    m_targetRegionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateRecommendationStatusItem& UpdateRecommendationStatusItem::operator =(JsonView jsonValue)
{
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

JsonValue UpdateRecommendationStatusItem::Jsonize() const
{
  JsonValue payload;

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
