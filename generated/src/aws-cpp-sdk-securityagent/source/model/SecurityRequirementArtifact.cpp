/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/SecurityRequirementArtifact.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

SecurityRequirementArtifact::SecurityRequirementArtifact(JsonView jsonValue) { *this = jsonValue; }

SecurityRequirementArtifact& SecurityRequirementArtifact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("format")) {
    m_format = SecurityRequirementArtifactFormatMapper::GetSecurityRequirementArtifactFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = HashingUtils::Base64Decode(jsonValue.GetString("content"));
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityRequirementArtifact::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_formatHasBeenSet) {
    payload.WithString("format", SecurityRequirementArtifactFormatMapper::GetNameForSecurityRequirementArtifactFormat(m_format));
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", HashingUtils::Base64Encode(m_content));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
