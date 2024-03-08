/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qbusiness/QBusinessErrors.h>
#include <aws/qbusiness/model/ConflictException.h>
#include <aws/qbusiness/model/ServiceQuotaExceededException.h>
#include <aws/qbusiness/model/ResourceNotFoundException.h>
#include <aws/qbusiness/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QBusiness;
using namespace Aws::QBusiness::Model;

namespace Aws
{
namespace QBusiness
{
template<> AWS_QBUSINESS_API ConflictException QBusinessError::GetModeledError()
{
  assert(this->GetErrorType() == QBusinessErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_QBUSINESS_API ServiceQuotaExceededException QBusinessError::GetModeledError()
{
  assert(this->GetErrorType() == QBusinessErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_QBUSINESS_API ResourceNotFoundException QBusinessError::GetModeledError()
{
  assert(this->GetErrorType() == QBusinessErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_QBUSINESS_API ValidationException QBusinessError::GetModeledError()
{
  assert(this->GetErrorType() == QBusinessErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace QBusinessErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int LICENSE_NOT_FOUND_HASH = HashingUtils::HashString("LicenseNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QBusinessErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QBusinessErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QBusinessErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LICENSE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QBusinessErrors::LICENSE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QBusinessErrorMapper
} // namespace QBusiness
} // namespace Aws
