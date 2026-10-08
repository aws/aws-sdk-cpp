/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/translate/model/StartTextTranslationJobRequest.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartTextTranslationJobRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_jobNameHasBeenSet) {
    mapSize++;
  }
  if (m_inputDataConfigHasBeenSet) {
    mapSize++;
  }
  if (m_outputDataConfigHasBeenSet) {
    mapSize++;
  }
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_sourceLanguageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_targetLanguageCodesHasBeenSet) {
    mapSize++;
  }
  if (m_terminologyNamesHasBeenSet) {
    mapSize++;
  }
  if (m_parallelDataNamesHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_settingsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_jobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_jobName.c_str()));
  }

  if (m_inputDataConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InputDataConfig"));
    m_inputDataConfig.CborEncode(encoder);
  }

  if (m_outputDataConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputDataConfig"));
    m_outputDataConfig.CborEncode(encoder);
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataAccessRoleArn.c_str()));
  }

  if (m_sourceLanguageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceLanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceLanguageCode.c_str()));
  }

  if (m_targetLanguageCodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetLanguageCodes"));
    encoder.WriteArrayStart(m_targetLanguageCodes.size());
    for (const auto& item_0 : m_targetLanguageCodes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_terminologyNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TerminologyNames"));
    encoder.WriteArrayStart(m_terminologyNames.size());
    for (const auto& item_0 : m_terminologyNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_parallelDataNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParallelDataNames"));
    encoder.WriteArrayStart(m_parallelDataNames.size());
    for (const auto& item_0 : m_parallelDataNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Settings"));
    m_settings.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartTextTranslationJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
