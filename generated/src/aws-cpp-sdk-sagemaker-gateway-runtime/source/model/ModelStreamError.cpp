/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-gateway-runtime/model/ModelStreamError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {

ModelStreamError::ModelStreamError(JsonView jsonValue) { *this = jsonValue; }

ModelStreamError& ModelStreamError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = StreamErrorCodeMapper::GetStreamErrorCodeForName(jsonValue.GetString("ErrorCode"));
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelStreamError::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", StreamErrorCodeMapper::GetNameForStreamErrorCode(m_errorCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
