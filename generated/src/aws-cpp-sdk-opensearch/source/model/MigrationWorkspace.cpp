/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/MigrationWorkspace.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

MigrationWorkspace::MigrationWorkspace(JsonView jsonValue) { *this = jsonValue; }

MigrationWorkspace& MigrationWorkspace::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("workspaceId")) {
    m_workspaceId = jsonValue.GetString("workspaceId");
    m_workspaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createWorkspace")) {
    m_createWorkspace = jsonValue.GetBool("createWorkspace");
    m_createWorkspaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationWorkspace::Jsonize() const {
  JsonValue payload;

  if (m_workspaceIdHasBeenSet) {
    payload.WithString("workspaceId", m_workspaceId);
  }

  if (m_createWorkspaceHasBeenSet) {
    payload.WithBool("createWorkspace", m_createWorkspace);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
