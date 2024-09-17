/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/WAFV2Errors.h>
#include <aws/wafv2/model/WAFLimitsExceededException.h>
#include <aws/wafv2/model/WAFInvalidParameterException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WAFV2;
using namespace Aws::WAFV2::Model;

namespace Aws
{
namespace WAFV2
{
template<> AWS_WAFV2_API WAFLimitsExceededException WAFV2Error::GetModeledError()
{
  assert(this->GetErrorType() == WAFV2Errors::W_A_F_LIMITS_EXCEEDED);
  return WAFLimitsExceededException(this->GetJsonPayload().View());
}

template<> AWS_WAFV2_API WAFInvalidParameterException WAFV2Error::GetModeledError()
{
  assert(this->GetErrorType() == WAFV2Errors::W_A_F_INVALID_PARAMETER);
  return WAFInvalidParameterException(this->GetJsonPayload().View());
}

namespace WAFV2ErrorMapper
{

static const int W_A_F_UNAVAILABLE_ENTITY_HASH = HashingUtils::HashString("WAFUnavailableEntityException");
static const int W_A_F_LIMITS_EXCEEDED_HASH = HashingUtils::HashString("WAFLimitsExceededException");
static const int W_A_F_UNSUPPORTED_AGGREGATE_KEY_TYPE_HASH = HashingUtils::HashString("WAFUnsupportedAggregateKeyTypeException");
static const int W_A_F_INVALID_PARAMETER_HASH = HashingUtils::HashString("WAFInvalidParameterException");
static const int W_A_F_INVALID_RESOURCE_HASH = HashingUtils::HashString("WAFInvalidResourceException");
static const int W_A_F_INVALID_OPERATION_HASH = HashingUtils::HashString("WAFInvalidOperationException");
static const int W_A_F_EXPIRED_MANAGED_RULE_GROUP_VERSION_HASH = HashingUtils::HashString("WAFExpiredManagedRuleGroupVersionException");
static const int W_A_F_ASSOCIATED_ITEM_HASH = HashingUtils::HashString("WAFAssociatedItemException");
static const int W_A_F_CONFIGURATION_WARNING_HASH = HashingUtils::HashString("WAFConfigurationWarningException");
static const int W_A_F_SUBSCRIPTION_NOT_FOUND_HASH = HashingUtils::HashString("WAFSubscriptionNotFoundException");
static const int W_A_F_INTERNAL_ERROR_HASH = HashingUtils::HashString("WAFInternalErrorException");
static const int W_A_F_TAG_OPERATION_HASH = HashingUtils::HashString("WAFTagOperationException");
static const int W_A_F_INVALID_PERMISSION_POLICY_HASH = HashingUtils::HashString("WAFInvalidPermissionPolicyException");
static const int W_A_F_NONEXISTENT_ITEM_HASH = HashingUtils::HashString("WAFNonexistentItemException");
static const int W_A_F_DUPLICATE_ITEM_HASH = HashingUtils::HashString("WAFDuplicateItemException");
static const int W_A_F_OPTIMISTIC_LOCK_HASH = HashingUtils::HashString("WAFOptimisticLockException");
static const int W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH = HashingUtils::HashString("WAFTagOperationInternalErrorException");
static const int W_A_F_LOG_DESTINATION_PERMISSION_ISSUE_HASH = HashingUtils::HashString("WAFLogDestinationPermissionIssueException");
static const int W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH = HashingUtils::HashString("WAFServiceLinkedRoleErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == W_A_F_UNAVAILABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_UNAVAILABLE_ENTITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_LIMITS_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_UNSUPPORTED_AGGREGATE_KEY_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_UNSUPPORTED_AGGREGATE_KEY_TYPE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_EXPIRED_MANAGED_RULE_GROUP_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_EXPIRED_MANAGED_RULE_GROUP_VERSION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_ASSOCIATED_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_ASSOCIATED_ITEM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_CONFIGURATION_WARNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_CONFIGURATION_WARNING), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_SUBSCRIPTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_SUBSCRIPTION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INTERNAL_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_TAG_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_PERMISSION_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_PERMISSION_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_NONEXISTENT_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_NONEXISTENT_ITEM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_DUPLICATE_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_DUPLICATE_ITEM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_OPTIMISTIC_LOCK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_OPTIMISTIC_LOCK), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_TAG_OPERATION_INTERNAL_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_LOG_DESTINATION_PERMISSION_ISSUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_LOG_DESTINATION_PERMISSION_ISSUE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_SERVICE_LINKED_ROLE_ERROR), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WAFV2ErrorMapper
} // namespace WAFV2
} // namespace Aws
