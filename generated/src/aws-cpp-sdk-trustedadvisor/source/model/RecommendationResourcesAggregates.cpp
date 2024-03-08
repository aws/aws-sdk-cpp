/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationResourcesAggregates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{

RecommendationResourcesAggregates::RecommendationResourcesAggregates() : 
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_okCount(0),
    m_okCountHasBeenSet(false),
    m_warningCount(0),
    m_warningCountHasBeenSet(false)
{
}

RecommendationResourcesAggregates::RecommendationResourcesAggregates(JsonView jsonValue) : 
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_okCount(0),
    m_okCountHasBeenSet(false),
    m_warningCount(0),
    m_warningCountHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationResourcesAggregates& RecommendationResourcesAggregates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCount"))
  {
    m_errorCount = jsonValue.GetInt64("errorCount");

    m_errorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("okCount"))
  {
    m_okCount = jsonValue.GetInt64("okCount");

    m_okCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warningCount"))
  {
    m_warningCount = jsonValue.GetInt64("warningCount");

    m_warningCountHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationResourcesAggregates::Jsonize() const
{
  JsonValue payload;

  if(m_errorCountHasBeenSet)
  {
   payload.WithInt64("errorCount", m_errorCount);

  }

  if(m_okCountHasBeenSet)
  {
   payload.WithInt64("okCount", m_okCount);

  }

  if(m_warningCountHasBeenSet)
  {
   payload.WithInt64("warningCount", m_warningCount);

  }

  return payload;
}

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
