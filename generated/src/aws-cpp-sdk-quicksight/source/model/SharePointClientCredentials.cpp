/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SharePointClientCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SharePointClientCredentials::SharePointClientCredentials(JsonView jsonValue) { *this = jsonValue; }

SharePointClientCredentials& SharePointClientCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertThumbprint")) {
    m_certThumbprint = jsonValue.GetString("CertThumbprint");
    m_certThumbprintHasBeenSet = true;
  }
  return *this;
}

JsonValue SharePointClientCredentials::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  if (m_certThumbprintHasBeenSet) {
    payload.WithString("CertThumbprint", m_certThumbprint);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
