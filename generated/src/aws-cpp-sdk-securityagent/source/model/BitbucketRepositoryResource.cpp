/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BitbucketRepositoryResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

BitbucketRepositoryResource::BitbucketRepositoryResource(JsonView jsonValue) { *this = jsonValue; }

BitbucketRepositoryResource& BitbucketRepositoryResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspace")) {
    m_workspace = jsonValue.GetString("workspace");
    m_workspaceHasBeenSet = true;
  }
  return *this;
}

JsonValue BitbucketRepositoryResource::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_workspaceHasBeenSet) {
    payload.WithString("workspace", m_workspace);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
