/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ToolOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ToolOutputConfiguration::ToolOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

ToolOutputConfiguration& ToolOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputVariableNameOverride")) {
    m_outputVariableNameOverride = jsonValue.GetString("outputVariableNameOverride");
    m_outputVariableNameOverrideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionDataNamespace")) {
    m_sessionDataNamespace = jsonValue.GetString("sessionDataNamespace");
    m_sessionDataNamespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_outputVariableNameOverrideHasBeenSet) {
    payload.WithString("outputVariableNameOverride", m_outputVariableNameOverride);
  }

  if (m_sessionDataNamespaceHasBeenSet) {
    payload.WithString("sessionDataNamespace", m_sessionDataNamespace);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
