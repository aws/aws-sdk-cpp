/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/GitHubRepositoryMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

GitHubRepositoryMetadata::GitHubRepositoryMetadata(JsonView jsonValue) { *this = jsonValue; }

GitHubRepositoryMetadata& GitHubRepositoryMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerResourceId")) {
    m_providerResourceId = jsonValue.GetString("providerResourceId");
    m_providerResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owner")) {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubRepositoryMetadata::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_providerResourceIdHasBeenSet) {
    payload.WithString("providerResourceId", m_providerResourceId);
  }

  if (m_ownerHasBeenSet) {
    payload.WithString("owner", m_owner);
  }

  if (m_accessTypeHasBeenSet) {
    payload.WithString("accessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
