/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/PutLogAlarmRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutLogAlarmRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_alarmNameHasBeenSet) {
    mapSize++;
  }
  if (m_alarmDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_scheduledQueryConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_actionLogLineCountHasBeenSet) {
    mapSize++;
  }
  if (m_actionLogLineRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_actionsEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_oKActionsHasBeenSet) {
    mapSize++;
  }
  if (m_alarmActionsHasBeenSet) {
    mapSize++;
  }
  if (m_insufficientDataActionsHasBeenSet) {
    mapSize++;
  }
  if (m_queryResultsToEvaluateHasBeenSet) {
    mapSize++;
  }
  if (m_queryResultsToAlarmHasBeenSet) {
    mapSize++;
  }
  if (m_thresholdHasBeenSet) {
    mapSize++;
  }
  if (m_comparisonOperatorHasBeenSet) {
    mapSize++;
  }
  if (m_treatMissingDataHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_alarmNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmName.c_str()));
  }

  if (m_alarmDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmDescription.c_str()));
  }

  if (m_scheduledQueryConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScheduledQueryConfiguration"));
    m_scheduledQueryConfiguration.CborEncode(encoder);
  }

  if (m_actionLogLineCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionLogLineCount"));
    (m_actionLogLineCount >= 0) ? encoder.WriteUInt(m_actionLogLineCount) : encoder.WriteNegInt(m_actionLogLineCount);
  }

  if (m_actionLogLineRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionLogLineRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_actionLogLineRoleArn.c_str()));
  }

  if (m_actionsEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionsEnabled"));
    encoder.WriteBool(m_actionsEnabled);
  }

  if (m_oKActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OKActions"));
    encoder.WriteArrayStart(m_oKActions.size());
    for (const auto& item_0 : m_oKActions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_alarmActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmActions"));
    encoder.WriteArrayStart(m_alarmActions.size());
    for (const auto& item_0 : m_alarmActions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_insufficientDataActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InsufficientDataActions"));
    encoder.WriteArrayStart(m_insufficientDataActions.size());
    for (const auto& item_0 : m_insufficientDataActions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_queryResultsToEvaluateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("QueryResultsToEvaluate"));
    (m_queryResultsToEvaluate >= 0) ? encoder.WriteUInt(m_queryResultsToEvaluate) : encoder.WriteNegInt(m_queryResultsToEvaluate);
  }

  if (m_queryResultsToAlarmHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("QueryResultsToAlarm"));
    (m_queryResultsToAlarm >= 0) ? encoder.WriteUInt(m_queryResultsToAlarm) : encoder.WriteNegInt(m_queryResultsToAlarm);
  }

  if (m_thresholdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Threshold"));
    encoder.WriteFloat(m_threshold);
  }

  if (m_comparisonOperatorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComparisonOperator"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator).c_str()));
  }

  if (m_treatMissingDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TreatMissingData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_treatMissingData.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutLogAlarmRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
