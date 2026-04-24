/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/EncryptionState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

EncryptionState::EncryptionState(JsonView jsonValue) { *this = jsonValue; }

EncryptionState& EncryptionState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsEncryptionState")) {
    m_kmsEncryptionState = jsonValue.GetObject("kmsEncryptionState");
    m_kmsEncryptionStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("default")) {
    m_default = jsonValue.GetObject("default");
    m_defaultHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionState::Jsonize() const {
  JsonValue payload;

  if (m_kmsEncryptionStateHasBeenSet) {
    payload.WithObject("kmsEncryptionState", m_kmsEncryptionState.Jsonize());
  }

  if (m_defaultHasBeenSet) {
    payload.WithObject("default", m_default.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
