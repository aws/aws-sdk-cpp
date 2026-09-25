/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/TlsEncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

TlsEncryptionConfiguration::TlsEncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

TlsEncryptionConfiguration& TlsEncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("public")) {
    m_public = jsonValue.GetObject("public");
    m_publicHasBeenSet = true;
  }
  return *this;
}

JsonValue TlsEncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_publicHasBeenSet) {
    payload.WithObject("public", m_public.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
