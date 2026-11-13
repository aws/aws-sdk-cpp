/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetMedicalTranscriptionJobRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_medicalTranscriptionJobNameHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_medicalTranscriptionJobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MedicalTranscriptionJobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_medicalTranscriptionJobName.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetMedicalTranscriptionJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
