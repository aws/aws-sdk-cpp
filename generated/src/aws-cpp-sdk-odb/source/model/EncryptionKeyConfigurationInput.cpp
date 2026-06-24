/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/EncryptionKeyConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

EncryptionKeyConfigurationInput::EncryptionKeyConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

EncryptionKeyConfigurationInput& EncryptionKeyConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("awsEncryptionKey")) {
    m_awsEncryptionKey = jsonValue.GetObject("awsEncryptionKey");
    m_awsEncryptionKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionKeyConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_awsEncryptionKeyHasBeenSet) {
    payload.WithObject("awsEncryptionKey", m_awsEncryptionKey.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
