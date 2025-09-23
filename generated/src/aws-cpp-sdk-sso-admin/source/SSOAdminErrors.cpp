/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sso-admin/SSOAdminErrors.h>
#include <aws/sso-admin/model/ThrottlingException.h>
#include <aws/sso-admin/model/ResourceNotFoundException.h>
#include <aws/sso-admin/model/ValidationException.h>
#include <aws/sso-admin/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SSOAdmin;
using namespace Aws::SSOAdmin::Model;

namespace Aws
{
namespace SSOAdmin
{
template<> AWS_SSOADMIN_API ThrottlingException SSOAdminError::GetModeledError()
{
  assert(this->GetErrorType() == SSOAdminErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SSOADMIN_API ResourceNotFoundException SSOAdminError::GetModeledError()
{
  assert(this->GetErrorType() == SSOAdminErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SSOADMIN_API ValidationException SSOAdminError::GetModeledError()
{
  assert(this->GetErrorType() == SSOAdminErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_SSOADMIN_API AccessDeniedException SSOAdminError::GetModeledError()
{
  assert(this->GetErrorType() == SSOAdminErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace SSOAdminErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOAdminErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOAdminErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOAdminErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSOAdminErrorMapper
} // namespace SSOAdmin
} // namespace Aws
