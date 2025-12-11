/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KeyPairCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KeyPairCredentials::KeyPairCredentials(JsonView jsonValue) { *this = jsonValue; }

KeyPairCredentials& KeyPairCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KeyPairUsername")) {
    m_keyPairUsername = jsonValue.GetString("KeyPairUsername");
    m_keyPairUsernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrivateKey")) {
    m_privateKey = jsonValue.GetString("PrivateKey");
    m_privateKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrivateKeyPassphrase")) {
    m_privateKeyPassphrase = jsonValue.GetString("PrivateKeyPassphrase");
    m_privateKeyPassphraseHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyPairCredentials::Jsonize() const {
  JsonValue payload;

  if (m_keyPairUsernameHasBeenSet) {
    payload.WithString("KeyPairUsername", m_keyPairUsername);
  }

  if (m_privateKeyHasBeenSet) {
    payload.WithString("PrivateKey", m_privateKey);
  }

  if (m_privateKeyPassphraseHasBeenSet) {
    payload.WithString("PrivateKeyPassphrase", m_privateKeyPassphrase);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
