/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/CustomerManagedEncryption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

CustomerManagedEncryption::CustomerManagedEncryption(JsonView jsonValue) { *this = jsonValue; }

CustomerManagedEncryption& CustomerManagedEncryption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionContext")) {
    Aws::Map<Aws::String, JsonView> encryptionContextJsonMap = jsonValue.GetObject("EncryptionContext").GetAllObjects();
    for (auto& encryptionContextItem : encryptionContextJsonMap) {
      m_encryptionContext[encryptionContextItem.first] = encryptionContextItem.second.AsString();
    }
    m_encryptionContextHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerManagedEncryption::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  if (m_encryptionContextHasBeenSet) {
    JsonValue encryptionContextJsonMap;
    for (auto& encryptionContextItem : m_encryptionContext) {
      encryptionContextJsonMap.WithString(encryptionContextItem.first, encryptionContextItem.second);
    }
    payload.WithObject("EncryptionContext", std::move(encryptionContextJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
