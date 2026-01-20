/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/KmsEncryptionState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

KmsEncryptionState::KmsEncryptionState(JsonView jsonValue) { *this = jsonValue; }

KmsEncryptionState& KmsEncryptionState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionContext")) {
    Aws::Map<Aws::String, JsonView> encryptionContextJsonMap = jsonValue.GetObject("encryptionContext").GetAllObjects();
    for (auto& encryptionContextItem : encryptionContextJsonMap) {
      m_encryptionContext[encryptionContextItem.first] = encryptionContextItem.second.AsString();
    }
    m_encryptionContextHasBeenSet = true;
  }
  return *this;
}

JsonValue KmsEncryptionState::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_encryptionContextHasBeenSet) {
    JsonValue encryptionContextJsonMap;
    for (auto& encryptionContextItem : m_encryptionContext) {
      encryptionContextJsonMap.WithString(encryptionContextItem.first, encryptionContextItem.second);
    }
    payload.WithObject("encryptionContext", std::move(encryptionContextJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
