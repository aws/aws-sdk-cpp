/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mpa/MPAErrors.h>
#include <aws/mpa/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MPA;
using namespace Aws::MPA::Model;

namespace Aws
{
namespace MPA
{
template<> AWS_MPA_API TooManyTagsException MPAError::GetModeledError()
{
  assert(this->GetErrorType() == MPAErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace MPAErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MPAErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MPAErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MPAErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MPAErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MPAErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MPAErrorMapper
} // namespace MPA
} // namespace Aws
