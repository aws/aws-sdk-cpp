/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/UnprocessableContentException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

UnprocessableContentException::UnprocessableContentException(JsonView jsonValue) { *this = jsonValue; }

UnprocessableContentException& UnprocessableContentException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = UnprocessableContentReasonMapper::GetUnprocessableContentReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue UnprocessableContentException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", UnprocessableContentReasonMapper::GetNameForUnprocessableContentReason(m_reason));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
