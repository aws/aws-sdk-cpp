/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SpanToolUseValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SpanToolUseValue::SpanToolUseValue(JsonView jsonValue) { *this = jsonValue; }

SpanToolUseValue& SpanToolUseValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolUseId")) {
    m_toolUseId = jsonValue.GetString("toolUseId");
    m_toolUseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arguments")) {
    m_arguments = jsonValue.GetObject("arguments");
    m_argumentsHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanToolUseValue::Jsonize() const {
  JsonValue payload;

  if (m_toolUseIdHasBeenSet) {
    payload.WithString("toolUseId", m_toolUseId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_argumentsHasBeenSet) {
    if (!m_arguments.View().IsNull()) {
      payload.WithObject("arguments", JsonValue(m_arguments.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
