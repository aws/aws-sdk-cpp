/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/CreateVoiceRequest.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateVoiceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_languageCodeHasBeenSet) {
    payload.WithString("LanguageCode", CustomVoiceLanguageCodeMapper::GetNameForCustomVoiceLanguageCode(m_languageCode));
  }

  if (m_termsAcceptedHasBeenSet) {
    payload.WithBool("TermsAccepted", m_termsAccepted);
  }

  if (m_voiceCreationDataHasBeenSet) {
    payload.WithObject("VoiceCreationData", m_voiceCreationData.Jsonize());
  }

  if (m_customerManagedEncryptionHasBeenSet) {
    payload.WithObject("CustomerManagedEncryption", m_customerManagedEncryption.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
