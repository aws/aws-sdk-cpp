/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/BatchRevokeSessionError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

BatchRevokeSessionError::BatchRevokeSessionError(JsonView jsonValue) { *this = jsonValue; }

BatchRevokeSessionError& BatchRevokeSessionError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionArn")) {
    m_sessionArn = jsonValue.GetString("sessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchRevokeSessionError::Jsonize() const {
  JsonValue payload;

  if (m_sessionArnHasBeenSet) {
    payload.WithString("sessionArn", m_sessionArn);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
