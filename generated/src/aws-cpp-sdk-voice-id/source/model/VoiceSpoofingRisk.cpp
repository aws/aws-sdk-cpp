/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/VoiceSpoofingRisk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

VoiceSpoofingRisk::VoiceSpoofingRisk() : 
    m_riskScore(0),
    m_riskScoreHasBeenSet(false)
{
}

VoiceSpoofingRisk::VoiceSpoofingRisk(JsonView jsonValue) : 
    m_riskScore(0),
    m_riskScoreHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceSpoofingRisk& VoiceSpoofingRisk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RiskScore"))
  {
    m_riskScore = jsonValue.GetInteger("RiskScore");

    m_riskScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceSpoofingRisk::Jsonize() const
{
  JsonValue payload;

  if(m_riskScoreHasBeenSet)
  {
   payload.WithInteger("RiskScore", m_riskScore);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
