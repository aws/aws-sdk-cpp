/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/RecommendationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

RecommendationData::RecommendationData() : 
    m_documentHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_relevanceLevel(RelevanceLevel::NOT_SET),
    m_relevanceLevelHasBeenSet(false),
    m_relevanceScore(0.0),
    m_relevanceScoreHasBeenSet(false),
    m_type(RecommendationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RecommendationData::RecommendationData(JsonView jsonValue) : 
    m_documentHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_relevanceLevel(RelevanceLevel::NOT_SET),
    m_relevanceLevelHasBeenSet(false),
    m_relevanceScore(0.0),
    m_relevanceScoreHasBeenSet(false),
    m_type(RecommendationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationData& RecommendationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetObject("document");

    m_documentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relevanceLevel"))
  {
    m_relevanceLevel = RelevanceLevelMapper::GetRelevanceLevelForName(jsonValue.GetString("relevanceLevel"));

    m_relevanceLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relevanceScore"))
  {
    m_relevanceScore = jsonValue.GetDouble("relevanceScore");

    m_relevanceScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RecommendationTypeMapper::GetRecommendationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationData::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithObject("document", m_document.Jsonize());

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("recommendationId", m_recommendationId);

  }

  if(m_relevanceLevelHasBeenSet)
  {
   payload.WithString("relevanceLevel", RelevanceLevelMapper::GetNameForRelevanceLevel(m_relevanceLevel));
  }

  if(m_relevanceScoreHasBeenSet)
  {
   payload.WithDouble("relevanceScore", m_relevanceScore);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RecommendationTypeMapper::GetNameForRecommendationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
