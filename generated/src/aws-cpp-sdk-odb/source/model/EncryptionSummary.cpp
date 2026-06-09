/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/EncryptionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

EncryptionSummary::EncryptionSummary(JsonView jsonValue) { *this = jsonValue; }

EncryptionSummary& EncryptionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionKeyProvider")) {
    m_encryptionKeyProvider = EncryptionKeyProviderMapper::GetEncryptionKeyProviderForName(jsonValue.GetString("encryptionKeyProvider"));
    m_encryptionKeyProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyConfiguration")) {
    m_encryptionKeyConfiguration = jsonValue.GetObject("encryptionKeyConfiguration");
    m_encryptionKeyConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionSummary::Jsonize() const {
  JsonValue payload;

  if (m_encryptionKeyProviderHasBeenSet) {
    payload.WithString("encryptionKeyProvider", EncryptionKeyProviderMapper::GetNameForEncryptionKeyProvider(m_encryptionKeyProvider));
  }

  if (m_encryptionKeyConfigurationHasBeenSet) {
    payload.WithObject("encryptionKeyConfiguration", m_encryptionKeyConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
