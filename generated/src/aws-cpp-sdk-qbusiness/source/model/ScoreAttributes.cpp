﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ScoreAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ScoreAttributes::ScoreAttributes() : 
    m_scoreConfidence(ScoreConfidence::NOT_SET),
    m_scoreConfidenceHasBeenSet(false)
{
}

ScoreAttributes::ScoreAttributes(JsonView jsonValue)
  : ScoreAttributes()
{
  *this = jsonValue;
}

ScoreAttributes& ScoreAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scoreConfidence"))
  {
    m_scoreConfidence = ScoreConfidenceMapper::GetScoreConfidenceForName(jsonValue.GetString("scoreConfidence"));

    m_scoreConfidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ScoreAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_scoreConfidenceHasBeenSet)
  {
   payload.WithString("scoreConfidence", ScoreConfidenceMapper::GetNameForScoreConfidence(m_scoreConfidence));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
