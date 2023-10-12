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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t PRECONDITION_FAILED_HASH = ConstExprHashingUtils::HashString("PreconditionFailedException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectWisdomServiceErrors::TOO_MANY_TAGS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectWisdomServiceErrorMapper
} // namespace ConnectWisdomService
} // namespace Aws
