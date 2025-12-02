/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/CallResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

CallResult::CallResult(JsonView jsonValue) { *this = jsonValue; }

CallResult& CallResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("callId")) {
    m_callId = jsonValue.GetString("callId");
    m_callIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("content");
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue CallResult::Jsonize() const {
  JsonValue payload;

  if (m_callIdHasBeenSet) {
    payload.WithString("callId", m_callId);
  }

  if (m_contentHasBeenSet) {
    Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
    }
    payload.WithArray("content", std::move(contentJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
