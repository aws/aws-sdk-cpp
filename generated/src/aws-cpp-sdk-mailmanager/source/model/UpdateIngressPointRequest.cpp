/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/UpdateIngressPointRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateIngressPointRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ingressPointIdHasBeenSet) {
    mapSize++;
  }
  if (m_ingressPointNameHasBeenSet) {
    mapSize++;
  }
  if (m_statusToUpdateHasBeenSet) {
    mapSize++;
  }
  if (m_ruleSetIdHasBeenSet) {
    mapSize++;
  }
  if (m_trafficPolicyIdHasBeenSet) {
    mapSize++;
  }
  if (m_ingressPointConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_tlsPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ingressPointIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IngressPointId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ingressPointId.c_str()));
  }

  if (m_ingressPointNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IngressPointName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ingressPointName.c_str()));
  }

  if (m_statusToUpdateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatusToUpdate"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(IngressPointStatusToUpdateMapper::GetNameForIngressPointStatusToUpdate(m_statusToUpdate).c_str()));
  }

  if (m_ruleSetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleSetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleSetId.c_str()));
  }

  if (m_trafficPolicyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrafficPolicyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trafficPolicyId.c_str()));
  }

  if (m_ingressPointConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IngressPointConfiguration"));
    m_ingressPointConfiguration.CborEncode(encoder);
  }

  if (m_tlsPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TlsPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateIngressPointRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
