/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wisdom/ConnectWisdomServiceErrors.h>
#include <aws/wisdom/model/ResourceNotFoundException.h>
#include <aws/wisdom/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ConnectWisdomService;
using namespace Aws::ConnectWisdomService::Model;

namespace Aws
{
namespace ConnectWisdomService
{
template<> AWS_CONNECTWISDOMSERVICE_API ResourceNotFoundException ConnectWisdomServiceError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectWisdomServiceErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTWISDOMSERVICE_API TooManyTagsException ConnectWisdomServiceError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectWisdomServiceErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace ConnectWisdomServiceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailedException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::PRECONDITION_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectWisdomServiceErrorMapper
} // namespace ConnectWisdomService
} // namespace Aws
