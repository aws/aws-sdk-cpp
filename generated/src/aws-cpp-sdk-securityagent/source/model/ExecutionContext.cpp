/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ExecutionContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ExecutionContext::ExecutionContext(JsonView jsonValue) { *this = jsonValue; }

ExecutionContext& ExecutionContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contextType")) {
    m_contextType = ContextTypeMapper::GetContextTypeForName(jsonValue.GetString("contextType"));
    m_contextTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("context")) {
    m_context = jsonValue.GetString("context");
    m_contextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionContext::Jsonize() const {
  JsonValue payload;

  if (m_contextTypeHasBeenSet) {
    payload.WithString("contextType", ContextTypeMapper::GetNameForContextType(m_contextType));
  }

  if (m_contextHasBeenSet) {
    payload.WithString("context", m_context);
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
