/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/PutMetricAlarmRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutMetricAlarmRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_alarmNameHasBeenSet) {
    mapSize++;
  }
  if (m_alarmDescriptionHasBeenSet) {
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
  if (m_metricNameHasBeenSet) {
    mapSize++;
  }
  if (m_namespaceHasBeenSet) {
    mapSize++;
  }
  if (m_statisticHasBeenSet) {
    mapSize++;
  }
  if (m_extendedStatisticHasBeenSet) {
    mapSize++;
  }
  if (m_dimensionsHasBeenSet) {
    mapSize++;
  }
  if (m_periodHasBeenSet) {
    mapSize++;
  }
  if (m_unitHasBeenSet) {
    mapSize++;
  }
  if (m_evaluationPeriodsHasBeenSet) {
    mapSize++;
  }
  if (m_datapointsToAlarmHasBeenSet) {
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
  if (m_evaluateLowSampleCountPercentileHasBeenSet) {
    mapSize++;
  }
  if (m_metricsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_thresholdMetricIdHasBeenSet) {
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

  if (m_metricNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_metricName.c_str()));
  }

  if (m_namespaceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Namespace"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_namespace.c_str()));
  }

  if (m_statisticHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Statistic"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StatisticMapper::GetNameForStatistic(m_statistic).c_str()));
  }

  if (m_extendedStatisticHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExtendedStatistic"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_extendedStatistic.c_str()));
  }

  if (m_dimensionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Dimensions"));
    encoder.WriteArrayStart(m_dimensions.size());
    for (const auto& item_0 : m_dimensions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_periodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Period"));
    (m_period >= 0) ? encoder.WriteUInt(m_period) : encoder.WriteNegInt(m_period);
  }

  if (m_unitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Unit"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StandardUnitMapper::GetNameForStandardUnit(m_unit).c_str()));
  }

  if (m_evaluationPeriodsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EvaluationPeriods"));
    (m_evaluationPeriods >= 0) ? encoder.WriteUInt(m_evaluationPeriods) : encoder.WriteNegInt(m_evaluationPeriods);
  }

  if (m_datapointsToAlarmHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DatapointsToAlarm"));
    (m_datapointsToAlarm >= 0) ? encoder.WriteUInt(m_datapointsToAlarm) : encoder.WriteNegInt(m_datapointsToAlarm);
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

  if (m_evaluateLowSampleCountPercentileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EvaluateLowSampleCountPercentile"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_evaluateLowSampleCountPercentile.c_str()));
  }

  if (m_metricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Metrics"));
    encoder.WriteArrayStart(m_metrics.size());
    for (const auto& item_0 : m_metrics) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_thresholdMetricIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ThresholdMetricId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_thresholdMetricId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutMetricAlarmRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
