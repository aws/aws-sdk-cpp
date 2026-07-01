/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/SigningKeyInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

SigningKeyInfo::SigningKeyInfo(JsonView jsonValue) { *this = jsonValue; }

SigningKeyInfo& SigningKeyInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsKey")) {
    m_kmsKey = jsonValue.GetString("kmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue SigningKeyInfo::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeyHasBeenSet) {
    payload.WithString("kmsKey", m_kmsKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
