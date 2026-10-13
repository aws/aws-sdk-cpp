/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CleanupFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CleanupFailure::CleanupFailure(JsonView jsonValue) { *this = jsonValue; }

CleanupFailure& CleanupFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StepName")) {
    m_stepName = jsonValue.GetString("StepName");
    m_stepNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = CleanupFailureErrorCodeMapper::GetCleanupFailureErrorCodeForName(jsonValue.GetString("ErrorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue CleanupFailure::Jsonize() const {
  JsonValue payload;

  if (m_stepNameHasBeenSet) {
    payload.WithString("StepName", m_stepName);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", CleanupFailureErrorCodeMapper::GetNameForCleanupFailureErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
