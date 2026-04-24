/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/model/ExternalSecretRotationMetadataItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecretsManager {
namespace Model {

ExternalSecretRotationMetadataItem::ExternalSecretRotationMetadataItem(JsonView jsonValue) { *this = jsonValue; }

ExternalSecretRotationMetadataItem& ExternalSecretRotationMetadataItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Key")) {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalSecretRotationMetadataItem::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("Key", m_key);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
