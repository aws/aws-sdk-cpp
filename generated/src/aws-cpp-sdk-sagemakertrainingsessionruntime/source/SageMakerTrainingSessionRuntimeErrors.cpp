/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerTrainingSessionRuntime;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace SageMakerTrainingSessionRuntimeErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerTrainingSessionRuntimeErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerTrainingSessionRuntimeErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SageMakerTrainingSessionRuntimeErrorMapper
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
