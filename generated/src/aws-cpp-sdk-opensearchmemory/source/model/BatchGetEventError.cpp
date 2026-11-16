/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/BatchGetEventError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

BatchGetEventError::BatchGetEventError(JsonView jsonValue) { *this = jsonValue; }

BatchGetEventError& BatchGetEventError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = BatchGetEventErrorCodeMapper::GetBatchGetEventErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetEventError::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", BatchGetEventErrorCodeMapper::GetNameForBatchGetEventErrorCode(m_errorCode));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
