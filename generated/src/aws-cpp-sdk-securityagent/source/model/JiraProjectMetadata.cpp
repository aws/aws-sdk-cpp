/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/JiraProjectMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

JiraProjectMetadata::JiraProjectMetadata(JsonView jsonValue) { *this = jsonValue; }

JiraProjectMetadata& JiraProjectMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerResourceId")) {
    m_providerResourceId = jsonValue.GetString("providerResourceId");
    m_providerResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectKey")) {
    m_projectKey = jsonValue.GetString("projectKey");
    m_projectKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectId")) {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectName")) {
    m_projectName = jsonValue.GetString("projectName");
    m_projectNameHasBeenSet = true;
  }
  return *this;
}

JsonValue JiraProjectMetadata::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_providerResourceIdHasBeenSet) {
    payload.WithString("providerResourceId", m_providerResourceId);
  }

  if (m_projectKeyHasBeenSet) {
    payload.WithString("projectKey", m_projectKey);
  }

  if (m_projectIdHasBeenSet) {
    payload.WithString("projectId", m_projectId);
  }

  if (m_projectNameHasBeenSet) {
    payload.WithString("projectName", m_projectName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
