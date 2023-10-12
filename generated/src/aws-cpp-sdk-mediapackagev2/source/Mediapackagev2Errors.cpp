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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Mediapackagev2Errors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Mediapackagev2Errors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Mediapackagev2Errors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Mediapackagev2ErrorMapper
} // namespace mediapackagev2
} // namespace Aws
