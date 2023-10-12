/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/NetworkManagerErrors.h>
#include <aws/networkmanager/model/ConflictException.h>
#include <aws/networkmanager/model/ThrottlingException.h>
#include <aws/networkmanager/model/ServiceQuotaExceededException.h>
#include <aws/networkmanager/model/CoreNetworkPolicyException.h>
#include <aws/networkmanager/model/ResourceNotFoundException.h>
#include <aws/networkmanager/model/InternalServerException.h>
#include <aws/networkmanager/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NetworkManager;
using namespace Aws::NetworkManager::Model;

namespace Aws
{
namespace NetworkManager
{
template<> AWS_NETWORKMANAGER_API ConflictException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ThrottlingException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ServiceQuotaExceededException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API CoreNetworkPolicyException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::CORE_NETWORK_POLICY);
  return CoreNetworkPolicyException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ResourceNotFoundException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API InternalServerException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ValidationException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace NetworkManagerErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t CORE_NETWORK_POLICY_HASH = ConstExprHashingUtils::HashString("CoreNetworkPolicyException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkManagerErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkManagerErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == CORE_NETWORK_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkManagerErrors::CORE_NETWORK_POLICY), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkManagerErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NetworkManagerErrorMapper
} // namespace NetworkManager
} // namespace Aws
