/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pca-connector-scep/PcaConnectorScepErrors.h>
#include <aws/pca-connector-scep/model/ConflictException.h>
#include <aws/pca-connector-scep/model/ServiceQuotaExceededException.h>
#include <aws/pca-connector-scep/model/ResourceNotFoundException.h>
#include <aws/pca-connector-scep/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PcaConnectorScep;
using namespace Aws::PcaConnectorScep::Model;

namespace Aws
{
namespace PcaConnectorScep
{
template<> AWS_PCACONNECTORSCEP_API ConflictException PcaConnectorScepError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorScepErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PCACONNECTORSCEP_API ServiceQuotaExceededException PcaConnectorScepError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorScepErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_PCACONNECTORSCEP_API ResourceNotFoundException PcaConnectorScepError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorScepErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PCACONNECTORSCEP_API ValidationException PcaConnectorScepError::GetModeledError()
{
  assert(this->GetErrorType() == PcaConnectorScepErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PcaConnectorScepErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PcaConnectorScepErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PcaConnectorScepErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PcaConnectorScepErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PcaConnectorScepErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PcaConnectorScepErrorMapper
} // namespace PcaConnectorScep
} // namespace Aws
