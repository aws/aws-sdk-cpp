/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/waf-regional/WAFRegionalErrors.h>
#include <aws/waf-regional/model/WAFInvalidParameterException.h>
#include <aws/waf-regional/model/WAFEntityMigrationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WAFRegional;
using namespace Aws::WAFRegional::Model;

namespace Aws
{
namespace WAFRegional
{
template<> AWS_WAFREGIONAL_API WAFInvalidParameterException WAFRegionalError::GetModeledError()
{
  assert(this->GetErrorType() == WAFRegionalErrors::W_A_F_INVALID_PARAMETER);
  return WAFInvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_WAFREGIONAL_API WAFEntityMigrationException WAFRegionalError::GetModeledError()
{
  assert(this->GetErrorType() == WAFRegionalErrors::W_A_F_ENTITY_MIGRATION);
  return WAFEntityMigrationException(this->GetJsonPayload().View());
}

namespace WAFRegionalErrorMapper
{

static constexpr uint32_t W_A_F_UNAVAILABLE_ENTITY_HASH = ConstExprHashingUtils::HashString("WAFUnavailableEntityException");
static constexpr uint32_t W_A_F_LIMITS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("WAFLimitsExceededException");
static constexpr uint32_t W_A_F_REFERENCED_ITEM_HASH = ConstExprHashingUtils::HashString("WAFReferencedItemException");
static constexpr uint32_t W_A_F_NON_EMPTY_ENTITY_HASH = ConstExprHashingUtils::HashString("WAFNonEmptyEntityException");
static constexpr uint32_t W_A_F_BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("WAFBadRequestException");
static constexpr uint32_t W_A_F_INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("WAFInvalidParameterException");
static constexpr uint32_t W_A_F_INVALID_OPERATION_HASH = ConstExprHashingUtils::HashString("WAFInvalidOperationException");
static constexpr uint32_t W_A_F_DISALLOWED_NAME_HASH = ConstExprHashingUtils::HashString("WAFDisallowedNameException");
static constexpr uint32_t W_A_F_NONEXISTENT_CONTAINER_HASH = ConstExprHashingUtils::HashString("WAFNonexistentContainerException");
static constexpr uint32_t W_A_F_SUBSCRIPTION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("WAFSubscriptionNotFoundException");
static constexpr uint32_t W_A_F_ENTITY_MIGRATION_HASH = ConstExprHashingUtils::HashString("WAFEntityMigrationException");
static constexpr uint32_t W_A_F_INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("WAFInternalErrorException");
static constexpr uint32_t W_A_F_TAG_OPERATION_HASH = ConstExprHashingUtils::HashString("WAFTagOperationException");
static constexpr uint32_t W_A_F_INVALID_PERMISSION_POLICY_HASH = ConstExprHashingUtils::HashString("WAFInvalidPermissionPolicyException");
static constexpr uint32_t W_A_F_NONEXISTENT_ITEM_HASH = ConstExprHashingUtils::HashString("WAFNonexistentItemException");
static constexpr uint32_t W_A_F_INVALID_ACCOUNT_HASH = ConstExprHashingUtils::HashString("WAFInvalidAccountException");
static constexpr uint32_t W_A_F_STALE_DATA_HASH = ConstExprHashingUtils::HashString("WAFStaleDataException");
static constexpr uint32_t W_A_F_INVALID_REGEX_PATTERN_HASH = ConstExprHashingUtils::HashString("WAFInvalidRegexPatternException");
static constexpr uint32_t W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("WAFTagOperationInternalErrorException");
static constexpr uint32_t W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH = ConstExprHashingUtils::HashString("WAFServiceLinkedRoleErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == W_A_F_UNAVAILABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_UNAVAILABLE_ENTITY), false);
  }
  else if (hashCode == W_A_F_LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_LIMITS_EXCEEDED), false);
  }
  else if (hashCode == W_A_F_REFERENCED_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_REFERENCED_ITEM), false);
  }
  else if (hashCode == W_A_F_NON_EMPTY_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_NON_EMPTY_ENTITY), false);
  }
  else if (hashCode == W_A_F_BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_BAD_REQUEST), false);
  }
  else if (hashCode == W_A_F_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_INVALID_PARAMETER), false);
  }
  else if (hashCode == W_A_F_INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_INVALID_OPERATION), false);
  }
  else if (hashCode == W_A_F_DISALLOWED_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_DISALLOWED_NAME), false);
  }
  else if (hashCode == W_A_F_NONEXISTENT_CONTAINER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_NONEXISTENT_CONTAINER), false);
  }
  else if (hashCode == W_A_F_SUBSCRIPTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_SUBSCRIPTION_NOT_FOUND), false);
  }
  else if (hashCode == W_A_F_ENTITY_MIGRATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_ENTITY_MIGRATION), false);
  }
  else if (hashCode == W_A_F_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_INTERNAL_ERROR), false);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_TAG_OPERATION), false);
  }
  else if (hashCode == W_A_F_INVALID_PERMISSION_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_INVALID_PERMISSION_POLICY), false);
  }
  else if (hashCode == W_A_F_NONEXISTENT_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_NONEXISTENT_ITEM), false);
  }
  else if (hashCode == W_A_F_INVALID_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_INVALID_ACCOUNT), false);
  }
  else if (hashCode == W_A_F_STALE_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_STALE_DATA), false);
  }
  else if (hashCode == W_A_F_INVALID_REGEX_PATTERN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_INVALID_REGEX_PATTERN), false);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_TAG_OPERATION_INTERNAL_ERROR), false);
  }
  else if (hashCode == W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFRegionalErrors::W_A_F_SERVICE_LINKED_ROLE_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WAFRegionalErrorMapper
} // namespace WAFRegional
} // namespace Aws
