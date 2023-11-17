/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationPillarSpecificAggregates.h>
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

RecommendationPillarSpecificAggregates::RecommendationPillarSpecificAggregates() : 
    m_costOptimizingHasBeenSet(false)
{
}

RecommendationPillarSpecificAggregates::RecommendationPillarSpecificAggregates(JsonView jsonValue) : 
    m_costOptimizingHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationPillarSpecificAggregates& RecommendationPillarSpecificAggregates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("costOptimizing"))
  {
    m_costOptimizing = jsonValue.GetObject("costOptimizing");

    m_costOptimizingHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationPillarSpecificAggregates::Jsonize() const
{
  JsonValue payload;

  if(m_costOptimizingHasBeenSet)
  {
   payload.WithObject("costOptimizing", m_costOptimizing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
