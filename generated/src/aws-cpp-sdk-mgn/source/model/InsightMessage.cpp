/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/InsightMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

InsightMessage::InsightMessage(JsonView jsonValue) { *this = jsonValue; }

InsightMessage& InsightMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topic")) {
    m_topic = jsonValue.GetString("topic");
    m_topicHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightMessage::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_topicHasBeenSet) {
    payload.WithString("topic", m_topic);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
