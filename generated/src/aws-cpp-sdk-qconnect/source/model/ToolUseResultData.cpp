/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ToolUseResultData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ToolUseResultData::ToolUseResultData(JsonView jsonValue) { *this = jsonValue; }

ToolUseResultData& ToolUseResultData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolUseId")) {
    m_toolUseId = jsonValue.GetString("toolUseId");
    m_toolUseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolName")) {
    m_toolName = jsonValue.GetString("toolName");
    m_toolNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolResult")) {
    m_toolResult = jsonValue.GetObject("toolResult");
    m_toolResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputSchema")) {
    m_inputSchema = jsonValue.GetObject("inputSchema");
    m_inputSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolUseResultData::Jsonize() const {
  JsonValue payload;

  if (m_toolUseIdHasBeenSet) {
    payload.WithString("toolUseId", m_toolUseId);
  }

  if (m_toolNameHasBeenSet) {
    payload.WithString("toolName", m_toolName);
  }

  if (m_toolResultHasBeenSet) {
    if (!m_toolResult.View().IsNull()) {
      payload.WithObject("toolResult", JsonValue(m_toolResult.View()));
    }
  }

  if (m_inputSchemaHasBeenSet) {
    if (!m_inputSchema.View().IsNull()) {
      payload.WithObject("inputSchema", JsonValue(m_inputSchema.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
