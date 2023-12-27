/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrors.h>
#include <aws/sagemaker-runtime/model/ModelError.h>
#include <aws/sagemaker-runtime/model/ModelStreamError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerRuntime;
using namespace Aws::SageMakerRuntime::Model;

namespace Aws
{
namespace SageMakerRuntime
{
template<> AWS_SAGEMAKERRUNTIME_API ModelError SageMakerRuntimeError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerRuntimeErrors::MODEL);
  return ModelError(this->GetJsonPayload().View());
}

template<> AWS_SAGEMAKERRUNTIME_API ModelStreamError SageMakerRuntimeError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerRuntimeErrors::MODEL_STREAM);
  return ModelStreamError(this->GetJsonPayload().View());
}

namespace SageMakerRuntimeErrorMapper
{

static const int MODEL_HASH = HashingUtils::HashString("ModelError");
static const int INTERNAL_DEPENDENCY_HASH = HashingUtils::HashString("InternalDependencyException");
static const int INTERNAL_STREAM_FAILURE_HASH = HashingUtils::HashString("InternalStreamFailure");
static const int MODEL_STREAM_HASH = HashingUtils::HashString("ModelStreamError");
static const int MODEL_NOT_READY_HASH = HashingUtils::HashString("ModelNotReadyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MODEL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::MODEL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::INTERNAL_DEPENDENCY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_STREAM_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::INTERNAL_STREAM_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MODEL_STREAM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::MODEL_STREAM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MODEL_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::MODEL_NOT_READY), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SageMakerRuntimeErrorMapper
} // namespace SageMakerRuntime
} // namespace Aws
