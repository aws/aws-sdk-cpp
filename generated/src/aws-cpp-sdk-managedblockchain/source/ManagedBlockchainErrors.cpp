/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/managedblockchain/ManagedBlockchainErrors.h>
#include <aws/managedblockchain/model/ResourceNotFoundException.h>
#include <aws/managedblockchain/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ManagedBlockchain;
using namespace Aws::ManagedBlockchain::Model;

namespace Aws
{
namespace ManagedBlockchain
{
template<> AWS_MANAGEDBLOCKCHAIN_API ResourceNotFoundException ManagedBlockchainError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedBlockchainErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDBLOCKCHAIN_API TooManyTagsException ManagedBlockchainError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedBlockchainErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace ManagedBlockchainErrorMapper
{

static const int RESOURCE_NOT_READY_HASH = HashingUtils::HashString("ResourceNotReadyException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");
static const int ILLEGAL_ACTION_HASH = HashingUtils::HashString("IllegalActionException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::RESOURCE_NOT_READY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::INTERNAL_SERVICE_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ILLEGAL_ACTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::ILLEGAL_ACTION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ManagedBlockchainErrorMapper
} // namespace ManagedBlockchain
} // namespace Aws
