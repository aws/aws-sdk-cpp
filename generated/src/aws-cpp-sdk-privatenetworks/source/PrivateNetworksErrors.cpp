/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/privatenetworks/PrivateNetworksErrors.h>
#include <aws/privatenetworks/model/ResourceNotFoundException.h>
#include <aws/privatenetworks/model/InternalServerException.h>
#include <aws/privatenetworks/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PrivateNetworks;
using namespace Aws::PrivateNetworks::Model;

namespace Aws
{
namespace PrivateNetworks
{
template<> AWS_PRIVATENETWORKS_API ResourceNotFoundException PrivateNetworksError::GetModeledError()
{
  assert(this->GetErrorType() == PrivateNetworksErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PRIVATENETWORKS_API InternalServerException PrivateNetworksError::GetModeledError()
{
  assert(this->GetErrorType() == PrivateNetworksErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_PRIVATENETWORKS_API ValidationException PrivateNetworksError::GetModeledError()
{
  assert(this->GetErrorType() == PrivateNetworksErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PrivateNetworksErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PrivateNetworksErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PrivateNetworksErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PrivateNetworksErrorMapper
} // namespace PrivateNetworks
} // namespace Aws
