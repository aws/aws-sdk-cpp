/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/states/SFNErrors.h>
#include <aws/states/model/ValidationException.h>
#include <aws/states/model/ResourceNotFound.h>
#include <aws/states/model/TooManyTags.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SFN;
using namespace Aws::SFN::Model;

namespace Aws
{
namespace SFN
{
template<> AWS_SFN_API ValidationException SFNError::GetModeledError()
{
  assert(this->GetErrorType() == SFNErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_SFN_API ResourceNotFound SFNError::GetModeledError()
{
  assert(this->GetErrorType() == SFNErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFound(this->GetJsonPayload().View());
}

template<> AWS_SFN_API TooManyTags SFNError::GetModeledError()
{
  assert(this->GetErrorType() == SFNErrors::TOO_MANY_TAGS);
  return TooManyTags(this->GetJsonPayload().View());
}

namespace SFNErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INVALID_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidToken");
static constexpr uint32_t ACTIVITY_WORKER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ActivityWorkerLimitExceeded");
static constexpr uint32_t INVALID_LOGGING_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidLoggingConfiguration");
static constexpr uint32_t TASK_TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TaskTimedOut");
static constexpr uint32_t INVALID_EXECUTION_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidExecutionInput");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t STATE_MACHINE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("StateMachineDoesNotExist");
static constexpr uint32_t INVALID_DEFINITION_HASH = ConstExprHashingUtils::HashString("InvalidDefinition");
static constexpr uint32_t EXECUTION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ExecutionAlreadyExists");
static constexpr uint32_t ACTIVITY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ActivityLimitExceeded");
static constexpr uint32_t STATE_MACHINE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("StateMachineLimitExceeded");
static constexpr uint32_t MISSING_REQUIRED_PARAMETER_HASH = ConstExprHashingUtils::HashString("MissingRequiredParameter");
static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("InvalidArn");
static constexpr uint32_t TASK_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("TaskDoesNotExist");
static constexpr uint32_t EXECUTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ExecutionLimitExceeded");
static constexpr uint32_t ACTIVITY_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ActivityDoesNotExist");
static constexpr uint32_t INVALID_NAME_HASH = ConstExprHashingUtils::HashString("InvalidName");
static constexpr uint32_t STATE_MACHINE_TYPE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("StateMachineTypeNotSupported");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTags");
static constexpr uint32_t STATE_MACHINE_DELETING_HASH = ConstExprHashingUtils::HashString("StateMachineDeleting");
static constexpr uint32_t EXECUTION_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ExecutionDoesNotExist");
static constexpr uint32_t INVALID_TRACING_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidTracingConfiguration");
static constexpr uint32_t INVALID_OUTPUT_HASH = ConstExprHashingUtils::HashString("InvalidOutput");
static constexpr uint32_t STATE_MACHINE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("StateMachineAlreadyExists");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::CONFLICT), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == ACTIVITY_WORKER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::ACTIVITY_WORKER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_LOGGING_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_LOGGING_CONFIGURATION), false);
  }
  else if (hashCode == TASK_TIMED_OUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::TASK_TIMED_OUT), false);
  }
  else if (hashCode == INVALID_EXECUTION_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_EXECUTION_INPUT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == STATE_MACHINE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_DEFINITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_DEFINITION), false);
  }
  else if (hashCode == EXECUTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::EXECUTION_ALREADY_EXISTS), false);
  }
  else if (hashCode == ACTIVITY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::ACTIVITY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == STATE_MACHINE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_ARN), false);
  }
  else if (hashCode == TASK_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::TASK_DOES_NOT_EXIST), false);
  }
  else if (hashCode == EXECUTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::EXECUTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ACTIVITY_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::ACTIVITY_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_NAME), false);
  }
  else if (hashCode == STATE_MACHINE_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_TYPE_NOT_SUPPORTED), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == STATE_MACHINE_DELETING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_DELETING), false);
  }
  else if (hashCode == EXECUTION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::EXECUTION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_TRACING_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_TRACING_CONFIGURATION), false);
  }
  else if (hashCode == INVALID_OUTPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::INVALID_OUTPUT), false);
  }
  else if (hashCode == STATE_MACHINE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SFNErrors::STATE_MACHINE_ALREADY_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SFNErrorMapper
} // namespace SFN
} // namespace Aws
