/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/RetrieveError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

RetrieveError::RetrieveError(JsonView jsonValue) { *this = jsonValue; }

RetrieveError& RetrieveError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("associationId")) {
    m_associationId = jsonValue.GetString("associationId");
    m_associationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = RetrieveErrorCodeMapper::GetRetrieveErrorCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrieveError::Jsonize() const {
  JsonValue payload;

  if (m_associationIdHasBeenSet) {
    payload.WithString("associationId", m_associationId);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", RetrieveErrorCodeMapper::GetNameForRetrieveErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
