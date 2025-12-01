/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ToolOverrideInputValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ToolOverrideInputValue::ToolOverrideInputValue(JsonView jsonValue) { *this = jsonValue; }

ToolOverrideInputValue& ToolOverrideInputValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jsonPath")) {
    m_jsonPath = jsonValue.GetString("jsonPath");
    m_jsonPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolOverrideInputValue::Jsonize() const {
  JsonValue payload;

  if (m_jsonPathHasBeenSet) {
    payload.WithString("jsonPath", m_jsonPath);
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
