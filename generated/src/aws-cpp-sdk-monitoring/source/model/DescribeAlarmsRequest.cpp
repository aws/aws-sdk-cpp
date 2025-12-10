/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/DescribeAlarmsRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeAlarmsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_alarmNamesHasBeenSet) {
    mapSize++;
  }
  if (m_alarmNamePrefixHasBeenSet) {
    mapSize++;
  }
  if (m_alarmTypesHasBeenSet) {
    mapSize++;
  }
  if (m_childrenOfAlarmNameHasBeenSet) {
    mapSize++;
  }
  if (m_parentsOfAlarmNameHasBeenSet) {
    mapSize++;
  }
  if (m_stateValueHasBeenSet) {
    mapSize++;
  }
  if (m_actionPrefixHasBeenSet) {
    mapSize++;
  }
  if (m_maxRecordsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_alarmNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmNames"));
    encoder.WriteArrayStart(m_alarmNames.size());
    for (const auto& item_0 : m_alarmNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_alarmNamePrefixHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmNamePrefix"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmNamePrefix.c_str()));
  }

  if (m_alarmTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmTypes"));
    encoder.WriteArrayStart(m_alarmTypes.size());
    for (const auto& item_0 : m_alarmTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(AlarmTypeMapper::GetNameForAlarmType(item_0).c_str()));
    }
  }

  if (m_childrenOfAlarmNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ChildrenOfAlarmName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_childrenOfAlarmName.c_str()));
  }

  if (m_parentsOfAlarmNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParentsOfAlarmName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_parentsOfAlarmName.c_str()));
  }

  if (m_stateValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StateValue"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StateValueMapper::GetNameForStateValue(m_stateValue).c_str()));
  }

  if (m_actionPrefixHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionPrefix"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_actionPrefix.c_str()));
  }

  if (m_maxRecordsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxRecords"));
    (m_maxRecords >= 0) ? encoder.WriteUInt(m_maxRecords) : encoder.WriteNegInt(m_maxRecords);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeAlarmsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
