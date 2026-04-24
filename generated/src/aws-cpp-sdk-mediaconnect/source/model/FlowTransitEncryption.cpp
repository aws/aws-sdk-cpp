/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/FlowTransitEncryption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

FlowTransitEncryption::FlowTransitEncryption(JsonView jsonValue) { *this = jsonValue; }

FlowTransitEncryption& FlowTransitEncryption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionKeyType")) {
    m_encryptionKeyType =
        FlowTransitEncryptionKeyTypeMapper::GetFlowTransitEncryptionKeyTypeForName(jsonValue.GetString("encryptionKeyType"));
    m_encryptionKeyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyConfiguration")) {
    m_encryptionKeyConfiguration = jsonValue.GetObject("encryptionKeyConfiguration");
    m_encryptionKeyConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTransitEncryption::Jsonize() const {
  JsonValue payload;

  if (m_encryptionKeyTypeHasBeenSet) {
    payload.WithString("encryptionKeyType",
                       FlowTransitEncryptionKeyTypeMapper::GetNameForFlowTransitEncryptionKeyType(m_encryptionKeyType));
  }

  if (m_encryptionKeyConfigurationHasBeenSet) {
    payload.WithObject("encryptionKeyConfiguration", m_encryptionKeyConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
