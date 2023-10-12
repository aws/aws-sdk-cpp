/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/WAFV2Errors.h>
#include <aws/wafv2/model/WAFInvalidParameterException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WAFV2;
using namespace Aws::WAFV2::Model;

namespace Aws
{
namespace WAFV2
{
template<> AWS_WAFV2_API WAFInvalidParameterException WAFV2Error::GetModeledError()
{
  assert(this->GetErrorType() == WAFV2Errors::W_A_F_INVALID_PARAMETER);
  return WAFInvalidParameterException(this->GetJsonPayload().View());
}

namespace WAFV2ErrorMapper
{

static constexpr uint32_t W_A_F_UNAVAILABLE_ENTITY_HASH = ConstExprHashingUtils::HashString("WAFUnavailableEntityException");
static constexpr uint32_t W_A_F_LIMITS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("WAFLimitsExceededException");
static constexpr uint32_t W_A_F_UNSUPPORTED_AGGREGATE_KEY_TYPE_HASH = ConstExprHashingUtils::HashString("WAFUnsupportedAggregateKeyTypeException");
static constexpr uint32_t W_A_F_INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("WAFInvalidParameterException");
static constexpr uint32_t W_A_F_INVALID_RESOURCE_HASH = ConstExprHashingUtils::HashString("WAFInvalidResourceException");
static constexpr uint32_t W_A_F_INVALID_OPERATION_HASH = ConstExprHashingUtils::HashString("WAFInvalidOperationException");
static constexpr uint32_t W_A_F_EXPIRED_MANAGED_RULE_GROUP_VERSION_HASH = ConstExprHashingUtils::HashString("WAFExpiredManagedRuleGroupVersionException");
static constexpr uint32_t W_A_F_ASSOCIATED_ITEM_HASH = ConstExprHashingUtils::HashString("WAFAssociatedItemException");
static constexpr uint32_t W_A_F_CONFIGURATION_WARNING_HASH = ConstExprHashingUtils::HashString("WAFConfigurationWarningException");
static constexpr uint32_t W_A_F_SUBSCRIPTION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("WAFSubscriptionNotFoundException");
static constexpr uint32_t W_A_F_INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("WAFInternalErrorException");
static constexpr uint32_t W_A_F_TAG_OPERATION_HASH = ConstExprHashingUtils::HashString("WAFTagOperationException");
static constexpr uint32_t W_A_F_INVALID_PERMISSION_POLICY_HASH = ConstExprHashingUtils::HashString("WAFInvalidPermissionPolicyException");
static constexpr uint32_t W_A_F_NONEXISTENT_ITEM_HASH = ConstExprHashingUtils::HashString("WAFNonexistentItemException");
static constexpr uint32_t W_A_F_DUPLICATE_ITEM_HASH = ConstExprHashingUtils::HashString("WAFDuplicateItemException");
static constexpr uint32_t W_A_F_OPTIMISTIC_LOCK_HASH = ConstExprHashingUtils::HashString("WAFOptimisticLockException");
static constexpr uint32_t W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("WAFTagOperationInternalErrorException");
static constexpr uint32_t W_A_F_LOG_DESTINATION_PERMISSION_ISSUE_HASH = ConstExprHashingUtils::HashString("WAFLogDestinationPermissionIssueException");
static constexpr uint32_t W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH = ConstExprHashingUtils::HashString("WAFServiceLinkedRoleErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == W_A_F_UNAVAILABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_UNAVAILABLE_ENTITY), false);
  }
  else if (hashCode == W_A_F_LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_LIMITS_EXCEEDED), false);
  }
  else if (hashCode == W_A_F_UNSUPPORTED_AGGREGATE_KEY_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_UNSUPPORTED_AGGREGATE_KEY_TYPE), false);
  }
  else if (hashCode == W_A_F_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_PARAMETER), false);
  }
  else if (hashCode == W_A_F_INVALID_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_RESOURCE), false);
  }
  else if (hashCode == W_A_F_INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_OPERATION), false);
  }
  else if (hashCode == W_A_F_EXPIRED_MANAGED_RULE_GROUP_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_EXPIRED_MANAGED_RULE_GROUP_VERSION), false);
  }
  else if (hashCode == W_A_F_ASSOCIATED_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_ASSOCIATED_ITEM), false);
  }
  else if (hashCode == W_A_F_CONFIGURATION_WARNING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_CONFIGURATION_WARNING), false);
  }
  else if (hashCode == W_A_F_SUBSCRIPTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_SUBSCRIPTION_NOT_FOUND), false);
  }
  else if (hashCode == W_A_F_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INTERNAL_ERROR), false);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_TAG_OPERATION), false);
  }
  else if (hashCode == W_A_F_INVALID_PERMISSION_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_PERMISSION_POLICY), false);
  }
  else if (hashCode == W_A_F_NONEXISTENT_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_NONEXISTENT_ITEM), false);
  }
  else if (hashCode == W_A_F_DUPLICATE_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_DUPLICATE_ITEM), false);
  }
  else if (hashCode == W_A_F_OPTIMISTIC_LOCK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_OPTIMISTIC_LOCK), false);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_TAG_OPERATION_INTERNAL_ERROR), false);
  }
  else if (hashCode == W_A_F_LOG_DESTINATION_PERMISSION_ISSUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_LOG_DESTINATION_PERMISSION_ISSUE), false);
  }
  else if (hashCode == W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_SERVICE_LINKED_ROLE_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WAFV2ErrorMapper
} // namespace WAFV2
} // namespace Aws
