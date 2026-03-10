/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/PutCompositeAlarmRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutCompositeAlarmRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_actionsEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_alarmActionsHasBeenSet) {
    mapSize++;
  }
  if (m_alarmDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_alarmNameHasBeenSet) {
    mapSize++;
  }
  if (m_alarmRuleHasBeenSet) {
    mapSize++;
  }
  if (m_insufficientDataActionsHasBeenSet) {
    mapSize++;
  }
  if (m_oKActionsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_actionsSuppressorHasBeenSet) {
    mapSize++;
  }
  if (m_actionsSuppressorWaitPeriodHasBeenSet) {
    mapSize++;
  }
  if (m_actionsSuppressorExtensionPeriodHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_actionsEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionsEnabled"));
    encoder.WriteBool(m_actionsEnabled);
  }

  if (m_alarmActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmActions"));
    encoder.WriteArrayStart(m_alarmActions.size());
    for (const auto& item_0 : m_alarmActions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_alarmDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmDescription.c_str()));
  }

  if (m_alarmNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmName.c_str()));
  }

  if (m_alarmRuleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlarmRule"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alarmRule.c_str()));
  }

  if (m_insufficientDataActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InsufficientDataActions"));
    encoder.WriteArrayStart(m_insufficientDataActions.size());
    for (const auto& item_0 : m_insufficientDataActions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_oKActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OKActions"));
    encoder.WriteArrayStart(m_oKActions.size());
    for (const auto& item_0 : m_oKActions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_actionsSuppressorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionsSuppressor"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_actionsSuppressor.c_str()));
  }

  if (m_actionsSuppressorWaitPeriodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionsSuppressorWaitPeriod"));
    (m_actionsSuppressorWaitPeriod >= 0) ? encoder.WriteUInt(m_actionsSuppressorWaitPeriod)
                                         : encoder.WriteNegInt(m_actionsSuppressorWaitPeriod);
  }

  if (m_actionsSuppressorExtensionPeriodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionsSuppressorExtensionPeriod"));
    (m_actionsSuppressorExtensionPeriod >= 0) ? encoder.WriteUInt(m_actionsSuppressorExtensionPeriod)
                                              : encoder.WriteNegInt(m_actionsSuppressorExtensionPeriod);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutCompositeAlarmRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
