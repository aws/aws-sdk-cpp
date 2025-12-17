/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/test-new-service-sdk-testing/model/Message.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Model {

Message::Message(JsonView jsonValue) { *this = jsonValue; }

Message& Message::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue Message::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
