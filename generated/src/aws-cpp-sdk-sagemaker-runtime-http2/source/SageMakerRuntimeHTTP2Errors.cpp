/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Errors.h>
#include <aws/sagemaker-runtime-http2/model/InputValidationError.h>
#include <aws/sagemaker-runtime-http2/model/InternalServerError.h>
#include <aws/sagemaker-runtime-http2/model/ModelError.h>
#include <aws/sagemaker-runtime-http2/model/ModelStreamError.h>
#include <aws/sagemaker-runtime-http2/model/ServiceUnavailableError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerRuntimeHTTP2;
using namespace Aws::SageMakerRuntimeHTTP2::Model;

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
template <>
AWS_SAGEMAKERRUNTIMEHTTP2_API ServiceUnavailableError SageMakerRuntimeHTTP2Error::GetModeledError() {
  assert(this->GetErrorType() == SageMakerRuntimeHTTP2Errors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableError(this->GetJsonPayload().View());
}

template <>
AWS_SAGEMAKERRUNTIMEHTTP2_API ModelError SageMakerRuntimeHTTP2Error::GetModeledError() {
  assert(this->GetErrorType() == SageMakerRuntimeHTTP2Errors::MODEL);
  return ModelError(this->GetJsonPayload().View());
}

template <>
AWS_SAGEMAKERRUNTIMEHTTP2_API InternalServerError SageMakerRuntimeHTTP2Error::GetModeledError() {
  assert(this->GetErrorType() == SageMakerRuntimeHTTP2Errors::INTERNAL_FAILURE);
  return InternalServerError(this->GetJsonPayload().View());
}

template <>
AWS_SAGEMAKERRUNTIMEHTTP2_API InputValidationError SageMakerRuntimeHTTP2Error::GetModeledError() {
  assert(this->GetErrorType() == SageMakerRuntimeHTTP2Errors::INPUT_VALIDATION);
  return InputValidationError(this->GetJsonPayload().View());
}

template <>
AWS_SAGEMAKERRUNTIMEHTTP2_API ModelStreamError SageMakerRuntimeHTTP2Error::GetModeledError() {
  assert(this->GetErrorType() == SageMakerRuntimeHTTP2Errors::MODEL_STREAM);
  return ModelStreamError(this->GetJsonPayload().View());
}

namespace SageMakerRuntimeHTTP2ErrorMapper {

static const int MODEL_HASH = HashingUtils::HashString("ModelError");
static const int INTERNAL_STREAM_FAILURE_HASH = HashingUtils::HashString("InternalStreamFailure");
static const int INPUT_VALIDATION_HASH = HashingUtils::HashString("InputValidationError");
static const int MODEL_STREAM_HASH = HashingUtils::HashString("ModelStreamError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MODEL_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeHTTP2Errors::MODEL), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_STREAM_FAILURE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeHTTP2Errors::INTERNAL_STREAM_FAILURE),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INPUT_VALIDATION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeHTTP2Errors::INPUT_VALIDATION), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == MODEL_STREAM_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeHTTP2Errors::MODEL_STREAM), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SageMakerRuntimeHTTP2ErrorMapper
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
