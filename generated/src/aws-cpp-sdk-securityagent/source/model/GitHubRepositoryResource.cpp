/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/GitHubRepositoryResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

GitHubRepositoryResource::GitHubRepositoryResource(JsonView jsonValue) { *this = jsonValue; }

GitHubRepositoryResource& GitHubRepositoryResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owner")) {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubRepositoryResource::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_ownerHasBeenSet) {
    payload.WithString("owner", m_owner);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
