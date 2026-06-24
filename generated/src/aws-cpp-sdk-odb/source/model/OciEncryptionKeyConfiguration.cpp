/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/OciEncryptionKeyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

OciEncryptionKeyConfiguration::OciEncryptionKeyConfiguration(JsonView jsonValue) { *this = jsonValue; }

OciEncryptionKeyConfiguration& OciEncryptionKeyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vaultId")) {
    m_vaultId = jsonValue.GetString("vaultId");
    m_vaultIdHasBeenSet = true;
  }
  return *this;
}

JsonValue OciEncryptionKeyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_vaultIdHasBeenSet) {
    payload.WithString("vaultId", m_vaultId);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
