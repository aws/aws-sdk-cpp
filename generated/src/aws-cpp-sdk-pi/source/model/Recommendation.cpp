/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/Recommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

Recommendation::Recommendation() : 
    m_recommendationIdHasBeenSet(false),
    m_recommendationDescriptionHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_recommendationIdHasBeenSet(false),
    m_recommendationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationDescription"))
  {
    m_recommendationDescription = jsonValue.GetString("RecommendationDescription");

    m_recommendationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue Recommendation::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("RecommendationId", m_recommendationId);

  }

  if(m_recommendationDescriptionHasBeenSet)
  {
   payload.WithString("RecommendationDescription", m_recommendationDescription);

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
