/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/RankingData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

RankingData::RankingData(JsonView jsonValue)
{
  *this = jsonValue;
}

RankingData& RankingData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relevanceScore"))
  {
    m_relevanceScore = jsonValue.GetDouble("relevanceScore");
    m_relevanceScoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relevanceLevel"))
  {
    m_relevanceLevel = RelevanceLevelMapper::GetRelevanceLevelForName(jsonValue.GetString("relevanceLevel"));
    m_relevanceLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue RankingData::Jsonize() const
{
  JsonValue payload;

  if(m_relevanceScoreHasBeenSet)
  {
   payload.WithDouble("relevanceScore", m_relevanceScore);

  }

  if(m_relevanceLevelHasBeenSet)
  {
   payload.WithString("relevanceLevel", RelevanceLevelMapper::GetNameForRelevanceLevel(m_relevanceLevel));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
