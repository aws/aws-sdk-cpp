/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mailmanager/model/TrustStore.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

TrustStore::TrustStore(JsonView jsonValue) { *this = jsonValue; }

TrustStore& TrustStore::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CAContent")) {
    m_cAContent = jsonValue.GetString("CAContent");
    m_cAContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CrlContent")) {
    m_crlContent = jsonValue.GetString("CrlContent");
    m_crlContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustStore::Jsonize() const {
  JsonValue payload;

  if (m_cAContentHasBeenSet) {
    payload.WithString("CAContent", m_cAContent);
  }

  if (m_crlContentHasBeenSet) {
    payload.WithString("CrlContent", m_crlContent);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
