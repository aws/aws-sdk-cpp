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
    m_riskThresholdHasBeenSet(false),
    m_watchlistIdHasBeenSet(false)
{
}

FraudDetectionConfiguration::FraudDetectionConfiguration(JsonView jsonValue) : 
    m_riskThreshold(0),
    m_riskThresholdHasBeenSet(false),
    m_watchlistIdHasBeenSet(false)
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

  if(jsonValue.ValueExists("WatchlistId"))
  {
    m_watchlistId = jsonValue.GetString("WatchlistId");

    m_watchlistIdHasBeenSet = true;
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

  if(m_watchlistIdHasBeenSet)
  {
   payload.WithString("WatchlistId", m_watchlistId);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
