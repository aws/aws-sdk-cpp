/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/PartnerCentralSellingErrors.h>
#include <aws/partnercentral-selling/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PartnerCentralSelling;
using namespace Aws::PartnerCentralSelling::Model;

namespace Aws
{
namespace PartnerCentralSelling
{
template<> AWS_PARTNERCENTRALSELLING_API ValidationException PartnerCentralSellingError::GetModeledError()
{
  assert(this->GetErrorType() == PartnerCentralSellingErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PartnerCentralSellingErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralSellingErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralSellingErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PartnerCentralSellingErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PartnerCentralSellingErrorMapper
} // namespace PartnerCentralSelling
} // namespace Aws
