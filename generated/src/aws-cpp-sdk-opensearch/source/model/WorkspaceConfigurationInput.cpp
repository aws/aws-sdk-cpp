/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/WorkspaceConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

WorkspaceConfigurationInput::WorkspaceConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

WorkspaceConfigurationInput& WorkspaceConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceType")) {
    m_workspaceType = jsonValue.GetString("workspaceType");
    m_workspaceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_workspaceTypeHasBeenSet) {
    payload.WithString("workspaceType", m_workspaceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
