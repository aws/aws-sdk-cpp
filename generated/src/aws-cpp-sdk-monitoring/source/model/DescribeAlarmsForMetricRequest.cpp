/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeAlarmsForMetricRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
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

  encoder.WriteMapStart(mapSize);

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
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeAlarmsForMetricRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
