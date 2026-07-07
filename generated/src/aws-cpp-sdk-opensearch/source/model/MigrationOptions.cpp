/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/MigrationOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

MigrationOptions::MigrationOptions(JsonView jsonValue) { *this = jsonValue; }

MigrationOptions& MigrationOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspace")) {
    m_workspace = jsonValue.GetObject("workspace");
    m_workspaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exportOptions")) {
    m_exportOptions = jsonValue.GetObject("exportOptions");
    m_exportOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conflictResolution")) {
    m_conflictResolution = jsonValue.GetString("conflictResolution");
    m_conflictResolutionHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationOptions::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_workspaceHasBeenSet) {
    payload.WithObject("workspace", m_workspace.Jsonize());
  }

  if (m_exportOptionsHasBeenSet) {
    payload.WithObject("exportOptions", m_exportOptions.Jsonize());
  }

  if (m_conflictResolutionHasBeenSet) {
    payload.WithString("conflictResolution", m_conflictResolution);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
