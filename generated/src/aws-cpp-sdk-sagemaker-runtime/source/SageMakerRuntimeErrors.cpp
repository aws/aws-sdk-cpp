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

static constexpr uint32_t MODEL_HASH = ConstExprHashingUtils::HashString("ModelError");
static constexpr uint32_t INTERNAL_DEPENDENCY_HASH = ConstExprHashingUtils::HashString("InternalDependencyException");
static constexpr uint32_t INTERNAL_STREAM_FAILURE_HASH = ConstExprHashingUtils::HashString("InternalStreamFailure");
static constexpr uint32_t MODEL_STREAM_HASH = ConstExprHashingUtils::HashString("ModelStreamError");
static constexpr uint32_t MODEL_NOT_READY_HASH = ConstExprHashingUtils::HashString("ModelNotReadyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MODEL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::MODEL), false);
  }
  else if (hashCode == INTERNAL_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::INTERNAL_DEPENDENCY), false);
  }
  else if (hashCode == INTERNAL_STREAM_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::INTERNAL_STREAM_FAILURE), false);
  }
  else if (hashCode == MODEL_STREAM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::MODEL_STREAM), false);
  }
  else if (hashCode == MODEL_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::MODEL_NOT_READY), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SageMakerRuntimeErrorMapper
} // namespace SageMakerRuntime
} // namespace Aws
