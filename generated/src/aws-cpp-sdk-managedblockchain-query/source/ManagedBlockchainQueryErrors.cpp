/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryErrors.h>
#include <aws/managedblockchain-query/model/ThrottlingException.h>
#include <aws/managedblockchain-query/model/ServiceQuotaExceededException.h>
#include <aws/managedblockchain-query/model/ResourceNotFoundException.h>
#include <aws/managedblockchain-query/model/InternalServerException.h>
#include <aws/managedblockchain-query/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ManagedBlockchainQuery;
using namespace Aws::ManagedBlockchainQuery::Model;

namespace Aws
{
namespace ManagedBlockchainQuery
{
template<> AWS_MANAGEDBLOCKCHAINQUERY_API ThrottlingException ManagedBlockchainQueryError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedBlockchainQueryErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDBLOCKCHAINQUERY_API ServiceQuotaExceededException ManagedBlockchainQueryError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedBlockchainQueryErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDBLOCKCHAINQUERY_API ResourceNotFoundException ManagedBlockchainQueryError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedBlockchainQueryErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDBLOCKCHAINQUERY_API InternalServerException ManagedBlockchainQueryError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedBlockchainQueryErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDBLOCKCHAINQUERY_API ValidationException ManagedBlockchainQueryError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedBlockchainQueryErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace ManagedBlockchainQueryErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainQueryErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainQueryErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ManagedBlockchainQueryErrorMapper
} // namespace ManagedBlockchainQuery
} // namespace Aws
