/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ServiceAccountCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ServiceAccountCredentials::ServiceAccountCredentials(JsonView jsonValue) { *this = jsonValue; }

ServiceAccountCredentials& ServiceAccountCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdminAccountEmail")) {
    m_adminAccountEmail = jsonValue.GetString("AdminAccountEmail");
    m_adminAccountEmailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceAccountPrivateKey")) {
    m_serviceAccountPrivateKey = jsonValue.GetString("ServiceAccountPrivateKey");
    m_serviceAccountPrivateKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientEmail")) {
    m_clientEmail = jsonValue.GetString("ClientEmail");
    m_clientEmailHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceAccountCredentials::Jsonize() const {
  JsonValue payload;

  if (m_adminAccountEmailHasBeenSet) {
    payload.WithString("AdminAccountEmail", m_adminAccountEmail);
  }

  if (m_serviceAccountPrivateKeyHasBeenSet) {
    payload.WithString("ServiceAccountPrivateKey", m_serviceAccountPrivateKey);
  }

  if (m_clientEmailHasBeenSet) {
    payload.WithString("ClientEmail", m_clientEmail);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
