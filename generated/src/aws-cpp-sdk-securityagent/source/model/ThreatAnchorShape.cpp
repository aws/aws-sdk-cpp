/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ThreatAnchorShape.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ThreatAnchorShape::ThreatAnchorShape(JsonView jsonValue) { *this = jsonValue; }

ThreatAnchorShape& ThreatAnchorShape::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kind")) {
    m_kind = jsonValue.GetString("kind");
    m_kindHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("packageId")) {
    m_packageId = jsonValue.GetString("packageId");
    m_packageIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ThreatAnchorShape::Jsonize() const {
  JsonValue payload;

  if (m_kindHasBeenSet) {
    payload.WithString("kind", m_kind);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_packageIdHasBeenSet) {
    payload.WithString("packageId", m_packageId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
