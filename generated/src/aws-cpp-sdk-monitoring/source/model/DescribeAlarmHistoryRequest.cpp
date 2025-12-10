/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/DescribeAlarmHistoryRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeAlarmHistoryRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_alarmNameHasBeenSet) {
    mapSize++;
  }
  if (m_alarmContributorIdHasBeenSet) {
    mapSize++;
  }
  if (m_alarmTypesHasBeenSet) {
    mapSize++;
  }
  if (m_historyItemTypeHasBeenSet) {
    mapSize++;
  }
  if (m_startDateHasBeenSet) {
    mapSize++;
  }
  if (m_endDateHasBeenSet) {
    mapSize++;
  }
  if (m_maxRecordsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_scanByHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_alarmNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmName.c_str()));
  }

  if (m_alarmContributorIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmContributorId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmContributorId.c_str()));
  }

  if (m_alarmTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmTypes"));
    encoder.WriteArrayStart(m_alarmTypes.size());
    for (const auto& item_0 : m_alarmTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(AlarmTypeMapper::GetNameForAlarmType(item_0).c_str()));
    }
  }

  if (m_historyItemTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HistoryItemType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType).c_str()));
  }

  if (m_startDateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartDate"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startDate.Seconds());
  }

  if (m_endDateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndDate"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_endDate.Seconds());
  }

  if (m_maxRecordsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxRecords"));
    (m_maxRecords >= 0) ? encoder.WriteUInt(m_maxRecords) : encoder.WriteNegInt(m_maxRecords);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_scanByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScanBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ScanByMapper::GetNameForScanBy(m_scanBy).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeAlarmHistoryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
