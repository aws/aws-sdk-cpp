/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ThreatEvidenceShape.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ThreatEvidenceShape::ThreatEvidenceShape(JsonView jsonValue) { *this = jsonValue; }

ThreatEvidenceShape& ThreatEvidenceShape::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("packageId")) {
    m_packageId = jsonValue.GetString("packageId");
    m_packageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  return *this;
}

JsonValue ThreatEvidenceShape::Jsonize() const {
  JsonValue payload;

  if (m_packageIdHasBeenSet) {
    payload.WithString("packageId", m_packageId);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
