/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/EnrollmentJobFraudDetectionConfig.h>
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

EnrollmentJobFraudDetectionConfig::EnrollmentJobFraudDetectionConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EnrollmentJobFraudDetectionConfig& EnrollmentJobFraudDetectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FraudDetectionAction"))
  {
    m_fraudDetectionAction = FraudDetectionActionMapper::GetFraudDetectionActionForName(jsonValue.GetString("FraudDetectionAction"));
    m_fraudDetectionActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RiskThreshold"))
  {
    m_riskThreshold = jsonValue.GetInteger("RiskThreshold");
    m_riskThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WatchlistIds"))
  {
    Aws::Utils::Array<JsonView> watchlistIdsJsonList = jsonValue.GetArray("WatchlistIds");
    for(unsigned watchlistIdsIndex = 0; watchlistIdsIndex < watchlistIdsJsonList.GetLength(); ++watchlistIdsIndex)
    {
      m_watchlistIds.push_back(watchlistIdsJsonList[watchlistIdsIndex].AsString());
    }
    m_watchlistIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue EnrollmentJobFraudDetectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fraudDetectionActionHasBeenSet)
  {
   payload.WithString("FraudDetectionAction", FraudDetectionActionMapper::GetNameForFraudDetectionAction(m_fraudDetectionAction));
  }

  if(m_riskThresholdHasBeenSet)
  {
   payload.WithInteger("RiskThreshold", m_riskThreshold);

  }

  if(m_watchlistIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> watchlistIdsJsonList(m_watchlistIds.size());
   for(unsigned watchlistIdsIndex = 0; watchlistIdsIndex < watchlistIdsJsonList.GetLength(); ++watchlistIdsIndex)
   {
     watchlistIdsJsonList[watchlistIdsIndex].AsString(m_watchlistIds[watchlistIdsIndex]);
   }
   payload.WithArray("WatchlistIds", std::move(watchlistIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
