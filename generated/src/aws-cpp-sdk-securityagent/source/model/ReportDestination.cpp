/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ReportDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ReportDestination::ReportDestination(JsonView jsonValue) { *this = jsonValue; }

ReportDestination& ReportDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerId")) {
    m_containerId = jsonValue.GetString("containerId");
    m_containerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentId")) {
    m_parentId = jsonValue.GetString("parentId");
    m_parentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentId")) {
    m_documentId = jsonValue.GetString("documentId");
    m_documentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportDestination::Jsonize() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_containerIdHasBeenSet) {
    payload.WithString("containerId", m_containerId);
  }

  if (m_parentIdHasBeenSet) {
    payload.WithString("parentId", m_parentId);
  }

  if (m_documentIdHasBeenSet) {
    payload.WithString("documentId", m_documentId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
