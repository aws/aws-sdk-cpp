/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/OdbErrors.h>
#include <aws/odb/model/ConflictException.h>
#include <aws/odb/model/ThrottlingException.h>
#include <aws/odb/model/ServiceQuotaExceededException.h>
#include <aws/odb/model/InternalServerException.h>
#include <aws/odb/model/ResourceNotFoundException.h>
#include <aws/odb/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::odb;
using namespace Aws::odb::Model;

namespace Aws
{
namespace odb
{
template<> AWS_ODB_API ConflictException OdbError::GetModeledError()
{
  assert(this->GetErrorType() == OdbErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_ODB_API ThrottlingException OdbError::GetModeledError()
{
  assert(this->GetErrorType() == OdbErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_ODB_API ServiceQuotaExceededException OdbError::GetModeledError()
{
  assert(this->GetErrorType() == OdbErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_ODB_API InternalServerException OdbError::GetModeledError()
{
  assert(this->GetErrorType() == OdbErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_ODB_API ResourceNotFoundException OdbError::GetModeledError()
{
  assert(this->GetErrorType() == OdbErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_ODB_API ValidationException OdbError::GetModeledError()
{
  assert(this->GetErrorType() == OdbErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace OdbErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OdbErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OdbErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OdbErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OdbErrorMapper
} // namespace odb
} // namespace Aws
