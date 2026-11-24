/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/AccessDeniedException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

AccessDeniedException::AccessDeniedException(JsonView jsonValue) { *this = jsonValue; }

AccessDeniedException& AccessDeniedException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = AccessDeniedExceptionReasonMapper::GetAccessDeniedExceptionReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessDeniedException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", AccessDeniedExceptionReasonMapper::GetNameForAccessDeniedExceptionReason(m_reason));
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
