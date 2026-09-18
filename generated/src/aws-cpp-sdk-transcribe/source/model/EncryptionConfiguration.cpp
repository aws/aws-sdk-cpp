/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribe/model/EncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

EncryptionConfiguration& EncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KMSEncryptionContext")) {
    Aws::Map<Aws::String, JsonView> kMSEncryptionContextJsonMap = jsonValue.GetObject("KMSEncryptionContext").GetAllObjects();
    for (auto& kMSEncryptionContextItem : kMSEncryptionContextJsonMap) {
      m_kMSEncryptionContext[kMSEncryptionContextItem.first] = kMSEncryptionContextItem.second.AsString();
    }
    m_kMSEncryptionContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KMSKey")) {
    m_kMSKey = jsonValue.GetString("KMSKey");
    m_kMSKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_kMSEncryptionContextHasBeenSet) {
    JsonValue kMSEncryptionContextJsonMap;
    for (auto& kMSEncryptionContextItem : m_kMSEncryptionContext) {
      kMSEncryptionContextJsonMap.WithString(kMSEncryptionContextItem.first, kMSEncryptionContextItem.second);
    }
    payload.WithObject("KMSEncryptionContext", std::move(kMSEncryptionContextJsonMap));
  }

  if (m_kMSKeyHasBeenSet) {
    payload.WithString("KMSKey", m_kMSKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
