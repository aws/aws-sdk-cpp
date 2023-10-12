/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/swf/SWFErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SWF;

namespace Aws
{
namespace SWF
{
namespace SWFErrorMapper
{

static constexpr uint32_t LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("LimitExceededFault");
static constexpr uint32_t OPERATION_NOT_PERMITTED_FAULT_HASH = ConstExprHashingUtils::HashString("OperationNotPermittedFault");
static constexpr uint32_t UNKNOWN_RESOURCE_FAULT_HASH = ConstExprHashingUtils::HashString("UnknownResourceFault");
static constexpr uint32_t TYPE_DEPRECATED_FAULT_HASH = ConstExprHashingUtils::HashString("TypeDeprecatedFault");
static constexpr uint32_t DEFAULT_UNDEFINED_FAULT_HASH = ConstExprHashingUtils::HashString("DefaultUndefinedFault");
static constexpr uint32_t DOMAIN_DEPRECATED_FAULT_HASH = ConstExprHashingUtils::HashString("DomainDeprecatedFault");
static constexpr uint32_t TYPE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("TypeAlreadyExistsFault");
static constexpr uint32_t TOO_MANY_TAGS_FAULT_HASH = ConstExprHashingUtils::HashString("TooManyTagsFault");
static constexpr uint32_t DOMAIN_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DomainAlreadyExistsFault");
static constexpr uint32_t WORKFLOW_EXECUTION_ALREADY_STARTED_FAULT_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionAlreadyStartedFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::LIMIT_EXCEEDED_FAULT), false);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::OPERATION_NOT_PERMITTED_FAULT), false);
  }
  else if (hashCode == UNKNOWN_RESOURCE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::UNKNOWN_RESOURCE_FAULT), false);
  }
  else if (hashCode == TYPE_DEPRECATED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::TYPE_DEPRECATED_FAULT), false);
  }
  else if (hashCode == DEFAULT_UNDEFINED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::DEFAULT_UNDEFINED_FAULT), false);
  }
  else if (hashCode == DOMAIN_DEPRECATED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::DOMAIN_DEPRECATED_FAULT), false);
  }
  else if (hashCode == TYPE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::TYPE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::TOO_MANY_TAGS_FAULT), false);
  }
  else if (hashCode == DOMAIN_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::DOMAIN_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == WORKFLOW_EXECUTION_ALREADY_STARTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::WORKFLOW_EXECUTION_ALREADY_STARTED_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SWFErrorMapper
} // namespace SWF
} // namespace Aws
