/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/AzureDevOpsRepositoryResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

AzureDevOpsRepositoryResource::AzureDevOpsRepositoryResource(JsonView jsonValue) { *this = jsonValue; }

AzureDevOpsRepositoryResource& AzureDevOpsRepositoryResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organization")) {
    m_organization = jsonValue.GetString("organization");
    m_organizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("project")) {
    m_project = jsonValue.GetString("project");
    m_projectHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureDevOpsRepositoryResource::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_organizationHasBeenSet) {
    payload.WithString("organization", m_organization);
  }

  if (m_projectHasBeenSet) {
    payload.WithString("project", m_project);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
