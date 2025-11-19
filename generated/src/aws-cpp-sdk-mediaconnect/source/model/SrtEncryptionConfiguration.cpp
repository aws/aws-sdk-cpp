/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SrtEncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SrtEncryptionConfiguration::SrtEncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

SrtEncryptionConfiguration& SrtEncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionKey")) {
    m_encryptionKey = jsonValue.GetObject("encryptionKey");
    m_encryptionKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtEncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_encryptionKeyHasBeenSet) {
    payload.WithObject("encryptionKey", m_encryptionKey.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
