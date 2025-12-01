/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SpanMessageValue.h>
#include <aws/qconnect/model/SpanToolResultValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SpanMessageValue::SpanMessageValue(JsonView jsonValue) { *this = jsonValue; }

SpanMessageValue& SpanMessageValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetObject("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolUse")) {
    m_toolUse = jsonValue.GetObject("toolUse");
    m_toolUseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolResult")) {
    m_toolResult = Aws::MakeShared<SpanToolResultValue>("SpanMessageValue", jsonValue.GetObject("toolResult"));
    m_toolResultHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanMessageValue::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithObject("text", m_text.Jsonize());
  }

  if (m_toolUseHasBeenSet) {
    payload.WithObject("toolUse", m_toolUse.Jsonize());
  }

  if (m_toolResultHasBeenSet) {
    payload.WithObject("toolResult", m_toolResult->Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
