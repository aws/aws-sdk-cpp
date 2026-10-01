/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationGuidance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationGuidance::RemediationGuidance(JsonView jsonValue) { *this = jsonValue; }

RemediationGuidance& RemediationGuidance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TargetTypeName")) {
    m_targetTypeName = jsonValue.GetString("TargetTypeName");
    m_targetTypeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Pattern")) {
    m_pattern = jsonValue.GetString("Pattern");
    m_patternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Context")) {
    m_context = jsonValue.GetObject("Context");
    m_contextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Specification")) {
    m_specification = jsonValue.GetObject("Specification");
    m_specificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Examples")) {
    m_examples = jsonValue.GetObject("Examples");
    m_examplesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Metadata")) {
    m_metadata = jsonValue.GetObject("Metadata");
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationGuidance::Jsonize() const {
  JsonValue payload;

  if (m_targetTypeNameHasBeenSet) {
    payload.WithString("TargetTypeName", m_targetTypeName);
  }

  if (m_patternHasBeenSet) {
    payload.WithString("Pattern", m_pattern);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("Version", m_version);
  }

  if (m_contextHasBeenSet) {
    payload.WithObject("Context", m_context.Jsonize());
  }

  if (m_specificationHasBeenSet) {
    payload.WithObject("Specification", m_specification.Jsonize());
  }

  if (m_examplesHasBeenSet) {
    payload.WithObject("Examples", m_examples.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    payload.WithObject("Metadata", m_metadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
