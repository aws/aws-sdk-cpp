/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/servicediscovery/ServiceDiscoveryErrors.h>
#include <aws/servicediscovery/model/NamespaceAlreadyExists.h>
#include <aws/servicediscovery/model/DuplicateRequest.h>
#include <aws/servicediscovery/model/ServiceAlreadyExists.h>
#include <aws/servicediscovery/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ServiceDiscovery;
using namespace Aws::ServiceDiscovery::Model;

namespace Aws
{
namespace ServiceDiscovery
{
template<> AWS_SERVICEDISCOVERY_API NamespaceAlreadyExists ServiceDiscoveryError::GetModeledError()
{
  assert(this->GetErrorType() == ServiceDiscoveryErrors::NAMESPACE_ALREADY_EXISTS);
  return NamespaceAlreadyExists(this->GetJsonPayload().View());
}

template<> AWS_SERVICEDISCOVERY_API DuplicateRequest ServiceDiscoveryError::GetModeledError()
{
  assert(this->GetErrorType() == ServiceDiscoveryErrors::DUPLICATE_REQUEST);
  return DuplicateRequest(this->GetJsonPayload().View());
}

template<> AWS_SERVICEDISCOVERY_API ServiceAlreadyExists ServiceDiscoveryError::GetModeledError()
{
  assert(this->GetErrorType() == ServiceDiscoveryErrors::SERVICE_ALREADY_EXISTS);
  return ServiceAlreadyExists(this->GetJsonPayload().View());
}

template<> AWS_SERVICEDISCOVERY_API TooManyTagsException ServiceDiscoveryError::GetModeledError()
{
  assert(this->GetErrorType() == ServiceDiscoveryErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace ServiceDiscoveryErrorMapper
{

static constexpr uint32_t NAMESPACE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("NamespaceAlreadyExists");
static constexpr uint32_t NAMESPACE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NamespaceNotFound");
static constexpr uint32_t OPERATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("OperationNotFound");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUse");
static constexpr uint32_t DUPLICATE_REQUEST_HASH = ConstExprHashingUtils::HashString("DuplicateRequest");
static constexpr uint32_t SERVICE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ServiceAlreadyExists");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInput");
static constexpr uint32_t INSTANCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("InstanceNotFound");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t REQUEST_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RequestLimitExceeded");
static constexpr uint32_t SERVICE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ServiceNotFound");
static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceeded");
static constexpr uint32_t CUSTOM_HEALTH_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CustomHealthNotFound");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NAMESPACE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::NAMESPACE_ALREADY_EXISTS), false);
  }
  else if (hashCode == NAMESPACE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::NAMESPACE_NOT_FOUND), false);
  }
  else if (hashCode == OPERATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::OPERATION_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::DUPLICATE_REQUEST), false);
  }
  else if (hashCode == SERVICE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::SERVICE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INSTANCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::INSTANCE_NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == REQUEST_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::REQUEST_LIMIT_EXCEEDED), true);
  }
  else if (hashCode == SERVICE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::SERVICE_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CUSTOM_HEALTH_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::CUSTOM_HEALTH_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ServiceDiscoveryErrorMapper
} // namespace ServiceDiscovery
} // namespace Aws
