/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/AvailableModuleVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

AvailableModuleVersionSummary::AvailableModuleVersionSummary(JsonView jsonValue) { *this = jsonValue; }

AvailableModuleVersionSummary& AvailableModuleVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleVersionArn")) {
    m_moduleVersionArn = jsonValue.GetString("moduleVersionArn");
    m_moduleVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ModuleVersionStatusMapper::GetModuleVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailableModuleVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_moduleVersionArnHasBeenSet) {
    payload.WithString("moduleVersionArn", m_moduleVersionArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ModuleVersionStatusMapper::GetNameForModuleVersionStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
