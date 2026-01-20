/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/EncryptionSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

EncryptionSettings::EncryptionSettings(JsonView jsonValue) { *this = jsonValue; }

EncryptionSettings& EncryptionSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsEncryptionSettings")) {
    m_kmsEncryptionSettings = jsonValue.GetObject("kmsEncryptionSettings");
    m_kmsEncryptionSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("default")) {
    m_default = jsonValue.GetObject("default");
    m_defaultHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionSettings::Jsonize() const {
  JsonValue payload;

  if (m_kmsEncryptionSettingsHasBeenSet) {
    payload.WithObject("kmsEncryptionSettings", m_kmsEncryptionSettings.Jsonize());
  }

  if (m_defaultHasBeenSet) {
    payload.WithObject("default", m_default.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
