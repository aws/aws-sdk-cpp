/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrors.h>
#include <aws/sagemaker-gateway-runtime/model/ModelStreamError.h>
#include <aws/sagemaker-gateway-runtime/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerGatewayRuntime;
using namespace Aws::SageMakerGatewayRuntime::Model;

namespace Aws {
namespace SageMakerGatewayRuntime {
template <>
AWS_SAGEMAKERGATEWAYRUNTIME_API ResourceNotFoundException SageMakerGatewayRuntimeError::GetModeledError() {
  assert(this->GetErrorType() == SageMakerGatewayRuntimeErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_SAGEMAKERGATEWAYRUNTIME_API ModelStreamError SageMakerGatewayRuntimeError::GetModeledError() {
  assert(this->GetErrorType() == SageMakerGatewayRuntimeErrors::MODEL_STREAM);
  return ModelStreamError(this->GetJsonPayload().View());
}

namespace SageMakerGatewayRuntimeErrorMapper {

static const int BAD_GATEWAY_HASH = HashingUtils::HashString("BadGatewayException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int GATEWAY_TIMEOUT_HASH = HashingUtils::HashString("GatewayTimeoutException");
static const int PAYLOAD_TOO_LARGE_HASH = HashingUtils::HashString("PayloadTooLargeException");
static const int INTERNAL_STREAM_FAILURE_HASH = HashingUtils::HashString("InternalStreamFailure");
static const int MODEL_STREAM_HASH = HashingUtils::HashString("ModelStreamError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == BAD_GATEWAY_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGatewayRuntimeErrors::BAD_GATEWAY), RetryableType::RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGatewayRuntimeErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == GATEWAY_TIMEOUT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGatewayRuntimeErrors::GATEWAY_TIMEOUT), RetryableType::RETRYABLE);
  } else if (hashCode == PAYLOAD_TOO_LARGE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGatewayRuntimeErrors::PAYLOAD_TOO_LARGE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_STREAM_FAILURE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGatewayRuntimeErrors::INTERNAL_STREAM_FAILURE),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == MODEL_STREAM_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGatewayRuntimeErrors::MODEL_STREAM), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SageMakerGatewayRuntimeErrorMapper
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
