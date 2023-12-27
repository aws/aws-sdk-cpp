/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/Mediapackagev2Errors.h>
#include <aws/mediapackagev2/model/ConflictException.h>
#include <aws/mediapackagev2/model/ResourceNotFoundException.h>
#include <aws/mediapackagev2/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::mediapackagev2;
using namespace Aws::mediapackagev2::Model;

namespace Aws
{
namespace mediapackagev2
{
template<> AWS_MEDIAPACKAGEV2_API ConflictException Mediapackagev2Error::GetModeledError()
{
  assert(this->GetErrorType() == Mediapackagev2Errors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_MEDIAPACKAGEV2_API ResourceNotFoundException Mediapackagev2Error::GetModeledError()
{
  assert(this->GetErrorType() == Mediapackagev2Errors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MEDIAPACKAGEV2_API ValidationException Mediapackagev2Error::GetModeledError()
{
  assert(this->GetErrorType() == Mediapackagev2Errors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace Mediapackagev2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Mediapackagev2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Mediapackagev2Errors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Mediapackagev2Errors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Mediapackagev2ErrorMapper
} // namespace mediapackagev2
} // namespace Aws
