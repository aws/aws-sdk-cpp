/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/DiscoveredEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

DiscoveredEndpoint::DiscoveredEndpoint(JsonView jsonValue) { *this = jsonValue; }

DiscoveredEndpoint& DiscoveredEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uri")) {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pentestJobId")) {
    m_pentestJobId = jsonValue.GetString("pentestJobId");
    m_pentestJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evidence")) {
    m_evidence = jsonValue.GetString("evidence");
    m_evidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operation")) {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue DiscoveredEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_uriHasBeenSet) {
    payload.WithString("uri", m_uri);
  }

  if (m_pentestJobIdHasBeenSet) {
    payload.WithString("pentestJobId", m_pentestJobId);
  }

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_evidenceHasBeenSet) {
    payload.WithString("evidence", m_evidence);
  }

  if (m_operationHasBeenSet) {
    payload.WithString("operation", m_operation);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
