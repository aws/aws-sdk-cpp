﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-oidc/model/AccessDeniedException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSOOIDC {
namespace Model {

AccessDeniedException::AccessDeniedException(JsonView jsonValue) { *this = jsonValue; }

AccessDeniedException& AccessDeniedException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = AccessDeniedExceptionReasonMapper::GetAccessDeniedExceptionReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error_description")) {
    m_error_description = jsonValue.GetString("error_description");
    m_error_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessDeniedException::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithString("error", m_error);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", AccessDeniedExceptionReasonMapper::GetNameForAccessDeniedExceptionReason(m_reason));
  }

  if (m_error_descriptionHasBeenSet) {
    payload.WithString("error_description", m_error_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace SSOOIDC
}  // namespace Aws
