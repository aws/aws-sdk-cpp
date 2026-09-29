/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/AzureDevOpsRepositoryMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

AzureDevOpsRepositoryMetadata::AzureDevOpsRepositoryMetadata(JsonView jsonValue) { *this = jsonValue; }

AzureDevOpsRepositoryMetadata& AzureDevOpsRepositoryMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerResourceId")) {
    m_providerResourceId = jsonValue.GetString("providerResourceId");
    m_providerResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organization")) {
    m_organization = jsonValue.GetString("organization");
    m_organizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("project")) {
    m_project = jsonValue.GetString("project");
    m_projectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectId")) {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureDevOpsRepositoryMetadata::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_providerResourceIdHasBeenSet) {
    payload.WithString("providerResourceId", m_providerResourceId);
  }

  if (m_organizationHasBeenSet) {
    payload.WithString("organization", m_organization);
  }

  if (m_projectHasBeenSet) {
    payload.WithString("project", m_project);
  }

  if (m_projectIdHasBeenSet) {
    payload.WithString("projectId", m_projectId);
  }

  if (m_accessTypeHasBeenSet) {
    payload.WithString("accessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
