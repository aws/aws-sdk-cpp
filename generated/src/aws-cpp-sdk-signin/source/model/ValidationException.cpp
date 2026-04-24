/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/ValidationException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

ValidationException::ValidationException(JsonView jsonValue) { *this = jsonValue; }

ValidationException& ValidationException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("error")) {
    m_error = OAuth2ErrorCodeMapper::GetOAuth2ErrorCodeForName(jsonValue.GetString("error"));
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationException::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithString("error", OAuth2ErrorCodeMapper::GetNameForOAuth2ErrorCode(m_error));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
