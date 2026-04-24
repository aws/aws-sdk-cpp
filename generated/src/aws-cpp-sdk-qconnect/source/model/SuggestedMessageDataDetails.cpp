/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SuggestedMessageDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SuggestedMessageDataDetails::SuggestedMessageDataDetails(JsonView jsonValue) { *this = jsonValue; }

SuggestedMessageDataDetails& SuggestedMessageDataDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("messageText")) {
    m_messageText = jsonValue.GetString("messageText");
    m_messageTextHasBeenSet = true;
  }
  return *this;
}

JsonValue SuggestedMessageDataDetails::Jsonize() const {
  JsonValue payload;

  if (m_messageTextHasBeenSet) {
    payload.WithString("messageText", m_messageText);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
