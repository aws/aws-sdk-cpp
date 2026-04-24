/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/Artifact.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

Artifact::Artifact(JsonView jsonValue) { *this = jsonValue; }

Artifact& Artifact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contents")) {
    m_contents = jsonValue.GetString("contents");
    m_contentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = ArtifactTypeMapper::GetArtifactTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Artifact::Jsonize() const {
  JsonValue payload;

  if (m_contentsHasBeenSet) {
    payload.WithString("contents", m_contents);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", ArtifactTypeMapper::GetNameForArtifactType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
