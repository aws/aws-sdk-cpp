/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ScoringComponentResiliencyScore.h>
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

ScoringComponentResiliencyScore::ScoringComponentResiliencyScore() : 
    m_excludedCount(0),
    m_excludedCountHasBeenSet(false),
    m_outstandingCount(0),
    m_outstandingCountHasBeenSet(false),
    m_possibleScore(0.0),
    m_possibleScoreHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

ScoringComponentResiliencyScore::ScoringComponentResiliencyScore(JsonView jsonValue) : 
    m_excludedCount(0),
    m_excludedCountHasBeenSet(false),
    m_outstandingCount(0),
    m_outstandingCountHasBeenSet(false),
    m_possibleScore(0.0),
    m_possibleScoreHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

ScoringComponentResiliencyScore& ScoringComponentResiliencyScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excludedCount"))
  {
    m_excludedCount = jsonValue.GetInt64("excludedCount");

    m_excludedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outstandingCount"))
  {
    m_outstandingCount = jsonValue.GetInt64("outstandingCount");

    m_outstandingCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("possibleScore"))
  {
    m_possibleScore = jsonValue.GetDouble("possibleScore");

    m_possibleScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue ScoringComponentResiliencyScore::Jsonize() const
{
  JsonValue payload;

  if(m_excludedCountHasBeenSet)
  {
   payload.WithInt64("excludedCount", m_excludedCount);

  }

  if(m_outstandingCountHasBeenSet)
  {
   payload.WithInt64("outstandingCount", m_outstandingCount);

  }

  if(m_possibleScoreHasBeenSet)
  {
   payload.WithDouble("possibleScore", m_possibleScore);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
