/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeErrors.h>
#include <aws/sagemaker-inference-router-runtime/model/ModelError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerInferenceRouterRuntime;
using namespace Aws::SageMakerInferenceRouterRuntime::Model;

namespace Aws {
namespace SageMakerInferenceRouterRuntime {
template <>
AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API ModelError SageMakerInferenceRouterRuntimeError::GetModeledError() {
  assert(this->GetErrorType() == SageMakerInferenceRouterRuntimeErrors::MODEL);
  return ModelError(this->GetJsonPayload().View());
}

namespace SageMakerInferenceRouterRuntimeErrorMapper {

static const int MODEL_HASH = HashingUtils::HashString("ModelError");
static const int INTERNAL_DEPENDENCY_HASH = HashingUtils::HashString("InternalDependencyException");
static const int MODEL_NOT_READY_HASH = HashingUtils::HashString("ModelNotReadyException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MODEL_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerInferenceRouterRuntimeErrors::MODEL), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_DEPENDENCY_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerInferenceRouterRuntimeErrors::INTERNAL_DEPENDENCY),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == MODEL_NOT_READY_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerInferenceRouterRuntimeErrors::MODEL_NOT_READY),
                                RetryableType::RETRYABLE_THROTTLING);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SageMakerInferenceRouterRuntimeErrorMapper
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
