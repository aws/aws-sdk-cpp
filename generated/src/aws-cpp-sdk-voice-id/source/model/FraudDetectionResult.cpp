/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/FraudDetectionResult.h>
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

FraudDetectionResult::FraudDetectionResult() : 
    m_audioAggregationEndedAtHasBeenSet(false),
    m_audioAggregationStartedAtHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_decision(FraudDetectionDecision::NOT_SET),
    m_decisionHasBeenSet(false),
    m_fraudDetectionResultIdHasBeenSet(false),
    m_reasonsHasBeenSet(false),
    m_riskDetailsHasBeenSet(false)
{
}

FraudDetectionResult::FraudDetectionResult(JsonView jsonValue) : 
    m_audioAggregationEndedAtHasBeenSet(false),
    m_audioAggregationStartedAtHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_decision(FraudDetectionDecision::NOT_SET),
    m_decisionHasBeenSet(false),
    m_fraudDetectionResultIdHasBeenSet(false),
    m_reasonsHasBeenSet(false),
    m_riskDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

FraudDetectionResult& FraudDetectionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AudioAggregationEndedAt"))
  {
    m_audioAggregationEndedAt = jsonValue.GetDouble("AudioAggregationEndedAt");

    m_audioAggregationEndedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioAggregationStartedAt"))
  {
    m_audioAggregationStartedAt = jsonValue.GetDouble("AudioAggregationStartedAt");

    m_audioAggregationStartedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Decision"))
  {
    m_decision = FraudDetectionDecisionMapper::GetFraudDetectionDecisionForName(jsonValue.GetString("Decision"));

    m_decisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FraudDetectionResultId"))
  {
    m_fraudDetectionResultId = jsonValue.GetString("FraudDetectionResultId");

    m_fraudDetectionResultIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("Reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(FraudDetectionReasonMapper::GetFraudDetectionReasonForName(reasonsJsonList[reasonsIndex].AsString()));
    }
    m_reasonsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RiskDetails"))
  {
    m_riskDetails = jsonValue.GetObject("RiskDetails");

    m_riskDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue FraudDetectionResult::Jsonize() const
{
  JsonValue payload;

  if(m_audioAggregationEndedAtHasBeenSet)
  {
   payload.WithDouble("AudioAggregationEndedAt", m_audioAggregationEndedAt.SecondsWithMSPrecision());
  }

  if(m_audioAggregationStartedAtHasBeenSet)
  {
   payload.WithDouble("AudioAggregationStartedAt", m_audioAggregationStartedAt.SecondsWithMSPrecision());
  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_decisionHasBeenSet)
  {
   payload.WithString("Decision", FraudDetectionDecisionMapper::GetNameForFraudDetectionDecision(m_decision));
  }

  if(m_fraudDetectionResultIdHasBeenSet)
  {
   payload.WithString("FraudDetectionResultId", m_fraudDetectionResultId);

  }

  if(m_reasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonsJsonList(m_reasons.size());
   for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
   {
     reasonsJsonList[reasonsIndex].AsString(FraudDetectionReasonMapper::GetNameForFraudDetectionReason(m_reasons[reasonsIndex]));
   }
   payload.WithArray("Reasons", std::move(reasonsJsonList));

  }

  if(m_riskDetailsHasBeenSet)
  {
   payload.WithObject("RiskDetails", m_riskDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
