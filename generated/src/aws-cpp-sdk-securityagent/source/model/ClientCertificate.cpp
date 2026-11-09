/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ClientCertificate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ClientCertificate::ClientCertificate(JsonView jsonValue) { *this = jsonValue; }

ClientCertificate& ClientCertificate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretArn")) {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("origins")) {
    Aws::Utils::Array<JsonView> originsJsonList = jsonValue.GetArray("origins");
    for (unsigned originsIndex = 0; originsIndex < originsJsonList.GetLength(); ++originsIndex) {
      m_origins.push_back(originsJsonList[originsIndex].AsString());
    }
    m_originsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientCertificate::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_secretArnHasBeenSet) {
    payload.WithString("secretArn", m_secretArn);
  }

  if (m_originsHasBeenSet) {
    Aws::Utils::Array<JsonValue> originsJsonList(m_origins.size());
    for (unsigned originsIndex = 0; originsIndex < originsJsonList.GetLength(); ++originsIndex) {
      originsJsonList[originsIndex].AsString(m_origins[originsIndex]);
    }
    payload.WithArray("origins", std::move(originsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
