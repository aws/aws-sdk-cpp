/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/TlsEncryption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

TlsEncryption::TlsEncryption(JsonView jsonValue) { *this = jsonValue; }

TlsEncryption& TlsEncryption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionType")) {
    m_encryptionType = TlsEncryptionTypeMapper::GetTlsEncryptionTypeForName(jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TlsEncryption::Jsonize() const {
  JsonValue payload;

  if (m_encryptionTypeHasBeenSet) {
    payload.WithString("encryptionType", TlsEncryptionTypeMapper::GetNameForTlsEncryptionType(m_encryptionType));
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
