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

static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH = ConstExprHashingUtils::HashString("OrganizationNotInAllFeaturesModeException");
static constexpr uint32_t SERVICE_QUOTA_TEMPLATE_NOT_IN_USE_HASH = ConstExprHashingUtils::HashString("ServiceQuotaTemplateNotInUseException");
static constexpr uint32_t DEPENDENCY_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("DependencyAccessDeniedException");
static constexpr uint32_t TEMPLATES_NOT_AVAILABLE_IN_REGION_HASH = ConstExprHashingUtils::HashString("TemplatesNotAvailableInRegionException");
static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidPaginationTokenException");
static constexpr uint32_t INVALID_RESOURCE_STATE_HASH = ConstExprHashingUtils::HashString("InvalidResourceStateException");
static constexpr uint32_t NO_AVAILABLE_ORGANIZATION_HASH = ConstExprHashingUtils::HashString("NoAvailableOrganizationException");
static constexpr uint32_t TAG_POLICY_VIOLATION_HASH = ConstExprHashingUtils::HashString("TagPolicyViolationException");
static constexpr uint32_t A_W_S_SERVICE_ACCESS_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("AWSServiceAccessNotEnabledException");
static constexpr uint32_t ILLEGAL_ARGUMENT_HASH = ConstExprHashingUtils::HashString("IllegalArgumentException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("QuotaExceededException");
static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("ServiceException");
static constexpr uint32_t NO_SUCH_RESOURCE_HASH = ConstExprHashingUtils::HashString("NoSuchResourceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::ORGANIZATION_NOT_IN_ALL_FEATURES_MODE), false);
  }
  else if (hashCode == SERVICE_QUOTA_TEMPLATE_NOT_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::SERVICE_QUOTA_TEMPLATE_NOT_IN_USE), false);
  }
  else if (hashCode == DEPENDENCY_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::DEPENDENCY_ACCESS_DENIED), false);
  }
  else if (hashCode == TEMPLATES_NOT_AVAILABLE_IN_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TEMPLATES_NOT_AVAILABLE_IN_REGION), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::INVALID_RESOURCE_STATE), false);
  }
  else if (hashCode == NO_AVAILABLE_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::NO_AVAILABLE_ORGANIZATION), false);
  }
  else if (hashCode == TAG_POLICY_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TAG_POLICY_VIOLATION), false);
  }
  else if (hashCode == A_W_S_SERVICE_ACCESS_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::A_W_S_SERVICE_ACCESS_NOT_ENABLED), false);
  }
  else if (hashCode == ILLEGAL_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::ILLEGAL_ARGUMENT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::QUOTA_EXCEEDED), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::SERVICE), false);
  }
  else if (hashCode == NO_SUCH_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::NO_SUCH_RESOURCE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ServiceQuotasErrorMapper
} // namespace ServiceQuotas
} // namespace Aws
