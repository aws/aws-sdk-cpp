/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/GetInsightRuleReportRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetInsightRuleReportRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleNameHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_endTimeHasBeenSet) {
    mapSize++;
  }
  if (m_periodHasBeenSet) {
    mapSize++;
  }
  if (m_maxContributorCountHasBeenSet) {
    mapSize++;
  }
  if (m_metricsHasBeenSet) {
    mapSize++;
  }
  if (m_orderByHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleName.c_str()));
  }

  if (m_startTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTime.Seconds());
  }

  if (m_endTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_endTime.Seconds());
  }

  if (m_periodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Period"));
    (m_period >= 0) ? encoder.WriteUInt(m_period) : encoder.WriteNegInt(m_period);
  }

  if (m_maxContributorCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxContributorCount"));
    (m_maxContributorCount >= 0) ? encoder.WriteUInt(m_maxContributorCount) : encoder.WriteNegInt(m_maxContributorCount);
  }

  if (m_metricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Metrics"));
    encoder.WriteArrayStart(m_metrics.size());
    for (const auto& item_0 : m_metrics) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_orderByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OrderBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_orderBy.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetInsightRuleReportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
