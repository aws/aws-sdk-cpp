/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/MessageData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

MessageData::MessageData(JsonView jsonValue) { *this = jsonValue; }

MessageData& MessageData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetObject("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolUseResult")) {
    m_toolUseResult = jsonValue.GetObject("toolUseResult");
    m_toolUseResultHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageData::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithObject("text", m_text.Jsonize());
  }

  if (m_toolUseResultHasBeenSet) {
    payload.WithObject("toolUseResult", m_toolUseResult.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
