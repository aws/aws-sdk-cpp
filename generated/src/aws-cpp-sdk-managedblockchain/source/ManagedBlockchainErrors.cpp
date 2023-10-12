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

static constexpr uint32_t RESOURCE_NOT_READY_HASH = ConstExprHashingUtils::HashString("ResourceNotReadyException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceededException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t INTERNAL_SERVICE_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServiceErrorException");
static constexpr uint32_t ILLEGAL_ACTION_HASH = ConstExprHashingUtils::HashString("IllegalActionException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::RESOURCE_NOT_READY), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == ILLEGAL_ACTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::ILLEGAL_ACTION), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedBlockchainErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ManagedBlockchainErrorMapper
} // namespace ManagedBlockchain
} // namespace Aws
