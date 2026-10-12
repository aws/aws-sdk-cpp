/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchExportFindingError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

BatchExportFindingError::BatchExportFindingError(JsonView jsonValue) { *this = jsonValue; }

BatchExportFindingError& BatchExportFindingError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchExportFindingError::Jsonize() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", ErrorCodeMapper::GetNameForErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
