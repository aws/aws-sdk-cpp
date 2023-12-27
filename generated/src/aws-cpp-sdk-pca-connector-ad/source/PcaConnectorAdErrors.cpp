/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pca-connector-ad/PcaConnectorAdErrors.h>
#include <aws/pca-connector-ad/model/ConflictException.h>
#include <aws/pca-connector-ad/model/ThrottlingException.h>
#include <aws/pca-connector-ad/model/ServiceQuotaExceededException.h>
#include <aws/pca-connector-ad/model/ResourceNotFoundException.h>
#include <aws/pca-connector-ad/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PcaConnectorAd;
using namespace Aws::PcaConnectorAd::Model;

namespace Aws
{
namespace PcaConnectorAd
{
template<> AWS_PCACONNECTORAD_API ConflictException PcaConnectorAdError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorAdErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PCACONNECTORAD_API ThrottlingException PcaConnectorAdError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorAdErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_PCACONNECTORAD_API ServiceQuotaExceededException PcaConnectorAdError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorAdErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_PCACONNECTORAD_API ResourceNotFoundException PcaConnectorAdError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorAdErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PCACONNECTORAD_API ValidationException PcaConnectorAdError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorAdErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PcaConnectorAdErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PcaConnectorAdErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PcaConnectorAdErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PcaConnectorAdErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PcaConnectorAdErrorMapper
} // namespace PcaConnectorAd
} // namespace Aws
