/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/EncryptionKeyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

EncryptionKeyConfiguration::EncryptionKeyConfiguration(JsonView jsonValue) { *this = jsonValue; }

EncryptionKeyConfiguration& EncryptionKeyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("awsEncryptionKey")) {
    m_awsEncryptionKey = jsonValue.GetObject("awsEncryptionKey");
    m_awsEncryptionKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociEncryptionKey")) {
    m_ociEncryptionKey = jsonValue.GetObject("ociEncryptionKey");
    m_ociEncryptionKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("okvEncryptionKey")) {
    m_okvEncryptionKey = jsonValue.GetObject("okvEncryptionKey");
    m_okvEncryptionKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionKeyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_awsEncryptionKeyHasBeenSet) {
    payload.WithObject("awsEncryptionKey", m_awsEncryptionKey.Jsonize());
  }

  if (m_ociEncryptionKeyHasBeenSet) {
    payload.WithObject("ociEncryptionKey", m_ociEncryptionKey.Jsonize());
  }

  if (m_okvEncryptionKeyHasBeenSet) {
    payload.WithObject("okvEncryptionKey", m_okvEncryptionKey.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
