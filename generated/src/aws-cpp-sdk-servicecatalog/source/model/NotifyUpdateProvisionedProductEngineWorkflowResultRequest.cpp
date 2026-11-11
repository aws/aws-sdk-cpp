/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/NotifyUpdateProvisionedProductEngineWorkflowResultRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String NotifyUpdateProvisionedProductEngineWorkflowResultRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_workflowTokenHasBeenSet) {
    mapSize++;
  }
  if (m_recordIdHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_failureReasonHasBeenSet) {
    mapSize++;
  }
  if (m_outputsHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_workflowTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkflowToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workflowToken.c_str()));
  }

  if (m_recordIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RecordId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_recordId.c_str()));
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(EngineWorkflowStatusMapper::GetNameForEngineWorkflowStatus(m_status).c_str()));
  }

  if (m_failureReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FailureReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_failureReason.c_str()));
  }

  if (m_outputsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Outputs"));
    encoder.WriteArrayStart(m_outputs.size());
    for (const auto& item_0 : m_outputs) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection NotifyUpdateProvisionedProductEngineWorkflowResultRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
