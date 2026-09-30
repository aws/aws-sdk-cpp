/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rekognition/model/FeedbackItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Rekognition {
namespace Model {

FeedbackItem::FeedbackItem(JsonView jsonValue) { *this = jsonValue; }

FeedbackItem& FeedbackItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = FeedbackCodeMapper::GetFeedbackCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue FeedbackItem::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", FeedbackCodeMapper::GetNameForFeedbackCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
