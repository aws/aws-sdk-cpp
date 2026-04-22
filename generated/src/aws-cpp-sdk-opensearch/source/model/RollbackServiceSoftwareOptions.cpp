/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/RollbackServiceSoftwareOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

RollbackServiceSoftwareOptions::RollbackServiceSoftwareOptions(JsonView jsonValue) { *this = jsonValue; }

RollbackServiceSoftwareOptions& RollbackServiceSoftwareOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrentVersion")) {
    m_currentVersion = jsonValue.GetString("CurrentVersion");
    m_currentVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewVersion")) {
    m_newVersion = jsonValue.GetString("NewVersion");
    m_newVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RollbackAvailable")) {
    m_rollbackAvailable = jsonValue.GetBool("RollbackAvailable");
    m_rollbackAvailableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue RollbackServiceSoftwareOptions::Jsonize() const {
  JsonValue payload;

  if (m_currentVersionHasBeenSet) {
    payload.WithString("CurrentVersion", m_currentVersion);
  }

  if (m_newVersionHasBeenSet) {
    payload.WithString("NewVersion", m_newVersion);
  }

  if (m_rollbackAvailableHasBeenSet) {
    payload.WithBool("RollbackAvailable", m_rollbackAvailable);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
