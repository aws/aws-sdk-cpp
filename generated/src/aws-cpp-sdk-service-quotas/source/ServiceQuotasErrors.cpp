/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/service-quotas/ServiceQuotasErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ServiceQuotas;

namespace Aws
{
namespace ServiceQuotas
{
namespace ServiceQuotasErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH = HashingUtils::HashString("OrganizationNotInAllFeaturesModeException");
static const int SERVICE_QUOTA_TEMPLATE_NOT_IN_USE_HASH = HashingUtils::HashString("ServiceQuotaTemplateNotInUseException");
static const int DEPENDENCY_ACCESS_DENIED_HASH = HashingUtils::HashString("DependencyAccessDeniedException");
static const int TEMPLATES_NOT_AVAILABLE_IN_REGION_HASH = HashingUtils::HashString("TemplatesNotAvailableInRegionException");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationTokenException");
static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("InvalidResourceStateException");
static const int NO_AVAILABLE_ORGANIZATION_HASH = HashingUtils::HashString("NoAvailableOrganizationException");
static const int TAG_POLICY_VIOLATION_HASH = HashingUtils::HashString("TagPolicyViolationException");
static const int A_W_S_SERVICE_ACCESS_NOT_ENABLED_HASH = HashingUtils::HashString("AWSServiceAccessNotEnabledException");
static const int ILLEGAL_ARGUMENT_HASH = HashingUtils::HashString("IllegalArgumentException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QuotaExceededException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int NO_SUCH_RESOURCE_HASH = HashingUtils::HashString("NoSuchResourceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::ORGANIZATION_NOT_IN_ALL_FEATURES_MODE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_TEMPLATE_NOT_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::SERVICE_QUOTA_TEMPLATE_NOT_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DEPENDENCY_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::DEPENDENCY_ACCESS_DENIED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TEMPLATES_NOT_AVAILABLE_IN_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TEMPLATES_NOT_AVAILABLE_IN_REGION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::INVALID_PAGINATION_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::INVALID_RESOURCE_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_AVAILABLE_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::NO_AVAILABLE_ORGANIZATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAG_POLICY_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TAG_POLICY_VIOLATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == A_W_S_SERVICE_ACCESS_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::A_W_S_SERVICE_ACCESS_NOT_ENABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ILLEGAL_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::ILLEGAL_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::SERVICE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::NO_SUCH_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ServiceQuotasErrorMapper
} // namespace ServiceQuotas
} // namespace Aws
