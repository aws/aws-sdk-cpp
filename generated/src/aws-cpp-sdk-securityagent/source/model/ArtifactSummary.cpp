/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ArtifactSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ArtifactSummary::ArtifactSummary(JsonView jsonValue) { *this = jsonValue; }

ArtifactSummary& ArtifactSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("artifactId")) {
    m_artifactId = jsonValue.GetString("artifactId");
    m_artifactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileName")) {
    m_fileName = jsonValue.GetString("fileName");
    m_fileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactType")) {
    m_artifactType = ArtifactTypeMapper::GetArtifactTypeForName(jsonValue.GetString("artifactType"));
    m_artifactTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ArtifactSummary::Jsonize() const {
  JsonValue payload;

  if (m_artifactIdHasBeenSet) {
    payload.WithString("artifactId", m_artifactId);
  }

  if (m_fileNameHasBeenSet) {
    payload.WithString("fileName", m_fileName);
  }

  if (m_artifactTypeHasBeenSet) {
    payload.WithString("artifactType", ArtifactTypeMapper::GetNameForArtifactType(m_artifactType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
