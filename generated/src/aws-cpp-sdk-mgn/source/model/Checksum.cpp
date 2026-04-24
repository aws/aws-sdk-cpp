/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/Checksum.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

Checksum::Checksum(JsonView jsonValue) { *this = jsonValue; }

Checksum& Checksum::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionAlgorithm")) {
    m_encryptionAlgorithm = EncryptionAlgorithmMapper::GetEncryptionAlgorithmForName(jsonValue.GetString("encryptionAlgorithm"));
    m_encryptionAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hash")) {
    m_hash = jsonValue.GetString("hash");
    m_hashHasBeenSet = true;
  }
  return *this;
}

JsonValue Checksum::Jsonize() const {
  JsonValue payload;

  if (m_encryptionAlgorithmHasBeenSet) {
    payload.WithString("encryptionAlgorithm", EncryptionAlgorithmMapper::GetNameForEncryptionAlgorithm(m_encryptionAlgorithm));
  }

  if (m_hashHasBeenSet) {
    payload.WithString("hash", m_hash);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
