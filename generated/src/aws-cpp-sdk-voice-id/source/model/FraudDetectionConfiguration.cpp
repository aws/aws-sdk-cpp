/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/FraudDetectionConfiguration.h>
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

FraudDetectionConfiguration::FraudDetectionConfiguration() : 
    m_riskThreshold(0),
    m_riskThresholdHasBeenSet(false)
{
}

FraudDetectionConfiguration::FraudDetectionConfiguration(JsonView jsonValue) : 
    m_riskThreshold(0),
    m_riskThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

FraudDetectionConfiguration& FraudDetectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RiskThreshold"))
  {
    m_riskThreshold = jsonValue.GetInteger("RiskThreshold");

    m_riskThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue FraudDetectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_riskThresholdHasBeenSet)
  {
   payload.WithInteger("RiskThreshold", m_riskThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
