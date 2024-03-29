﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/waf/WAFErrors.h>
#include <aws/waf/model/WAFInvalidParameterException.h>
#include <aws/waf/model/WAFEntityMigrationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WAF;
using namespace Aws::WAF::Model;

namespace Aws
{
namespace WAF
{
template<> AWS_WAF_API WAFInvalidParameterException WAFError::GetModeledError()
{
  assert(this->GetErrorType() == WAFErrors::W_A_F_INVALID_PARAMETER);
  return WAFInvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_WAF_API WAFEntityMigrationException WAFError::GetModeledError()
{
  assert(this->GetErrorType() == WAFErrors::W_A_F_ENTITY_MIGRATION);
  return WAFEntityMigrationException(this->GetJsonPayload().View());
}

namespace WAFErrorMapper
{

static const int W_A_F_LIMITS_EXCEEDED_HASH = HashingUtils::HashString("WAFLimitsExceededException");
static const int W_A_F_REFERENCED_ITEM_HASH = HashingUtils::HashString("WAFReferencedItemException");
static const int W_A_F_NON_EMPTY_ENTITY_HASH = HashingUtils::HashString("WAFNonEmptyEntityException");
static const int W_A_F_BAD_REQUEST_HASH = HashingUtils::HashString("WAFBadRequestException");
static const int W_A_F_INVALID_PARAMETER_HASH = HashingUtils::HashString("WAFInvalidParameterException");
static const int W_A_F_INVALID_OPERATION_HASH = HashingUtils::HashString("WAFInvalidOperationException");
static const int W_A_F_DISALLOWED_NAME_HASH = HashingUtils::HashString("WAFDisallowedNameException");
static const int W_A_F_NONEXISTENT_CONTAINER_HASH = HashingUtils::HashString("WAFNonexistentContainerException");
static const int W_A_F_SUBSCRIPTION_NOT_FOUND_HASH = HashingUtils::HashString("WAFSubscriptionNotFoundException");
static const int W_A_F_ENTITY_MIGRATION_HASH = HashingUtils::HashString("WAFEntityMigrationException");
static const int W_A_F_INTERNAL_ERROR_HASH = HashingUtils::HashString("WAFInternalErrorException");
static const int W_A_F_TAG_OPERATION_HASH = HashingUtils::HashString("WAFTagOperationException");
static const int W_A_F_INVALID_PERMISSION_POLICY_HASH = HashingUtils::HashString("WAFInvalidPermissionPolicyException");
static const int W_A_F_NONEXISTENT_ITEM_HASH = HashingUtils::HashString("WAFNonexistentItemException");
static const int W_A_F_INVALID_ACCOUNT_HASH = HashingUtils::HashString("WAFInvalidAccountException");
static const int W_A_F_STALE_DATA_HASH = HashingUtils::HashString("WAFStaleDataException");
static const int W_A_F_INVALID_REGEX_PATTERN_HASH = HashingUtils::HashString("WAFInvalidRegexPatternException");
static const int W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH = HashingUtils::HashString("WAFTagOperationInternalErrorException");
static const int W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH = HashingUtils::HashString("WAFServiceLinkedRoleErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == W_A_F_LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_LIMITS_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_REFERENCED_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_REFERENCED_ITEM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_NON_EMPTY_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_NON_EMPTY_ENTITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_DISALLOWED_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_DISALLOWED_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_NONEXISTENT_CONTAINER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_NONEXISTENT_CONTAINER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_SUBSCRIPTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_SUBSCRIPTION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_ENTITY_MIGRATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_ENTITY_MIGRATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INTERNAL_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_TAG_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_PERMISSION_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_PERMISSION_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_NONEXISTENT_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_NONEXISTENT_ITEM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_ACCOUNT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_STALE_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_STALE_DATA), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_INVALID_REGEX_PATTERN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_REGEX_PATTERN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_TAG_OPERATION_INTERNAL_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_SERVICE_LINKED_ROLE_ERROR), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WAFErrorMapper
} // namespace WAF
} // namespace Aws
