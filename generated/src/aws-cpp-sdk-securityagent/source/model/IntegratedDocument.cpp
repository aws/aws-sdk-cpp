/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/IntegratedDocument.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

IntegratedDocument::IntegratedDocument(JsonView jsonValue) { *this = jsonValue; }

IntegratedDocument& IntegratedDocument::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegratedDocument::Jsonize() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
