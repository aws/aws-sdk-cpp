/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces/WorkSpacesErrors.h>
#include <aws/workspaces/model/ResourceNotFoundException.h>
#include <aws/workspaces/model/OperationNotSupportedException.h>
#include <aws/workspaces/model/ResourceInUseException.h>
#include <aws/workspaces/model/ResourceUnavailableException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkSpaces;
using namespace Aws::WorkSpaces::Model;

namespace Aws
{
namespace WorkSpaces
{
template<> AWS_WORKSPACES_API ResourceNotFoundException WorkSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACES_API OperationNotSupportedException WorkSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesErrors::OPERATION_NOT_SUPPORTED);
  return OperationNotSupportedException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACES_API ResourceInUseException WorkSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACES_API ResourceUnavailableException WorkSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesErrors::RESOURCE_UNAVAILABLE);
  return ResourceUnavailableException(this->GetJsonPayload().View());
}

namespace WorkSpacesErrorMapper
{

static constexpr uint32_t COMPUTE_NOT_COMPATIBLE_HASH = ConstExprHashingUtils::HashString("ComputeNotCompatibleException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t OPERATION_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("OperationNotSupportedException");
static constexpr uint32_t UNSUPPORTED_WORKSPACE_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("UnsupportedWorkspaceConfigurationException");
static constexpr uint32_t OPERATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("OperationInProgressException");
static constexpr uint32_t INVALID_RESOURCE_STATE_HASH = ConstExprHashingUtils::HashString("InvalidResourceStateException");
static constexpr uint32_t OPERATING_SYSTEM_NOT_COMPATIBLE_HASH = ConstExprHashingUtils::HashString("OperatingSystemNotCompatibleException");
static constexpr uint32_t RESOURCE_CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("ResourceCreationFailedException");
static constexpr uint32_t INVALID_PARAMETER_VALUES_HASH = ConstExprHashingUtils::HashString("InvalidParameterValuesException");
static constexpr uint32_t UNSUPPORTED_NETWORK_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("UnsupportedNetworkConfigurationException");
static constexpr uint32_t INCOMPATIBLE_APPLICATIONS_HASH = ConstExprHashingUtils::HashString("IncompatibleApplicationsException");
static constexpr uint32_t APPLICATION_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("ApplicationNotSupportedException");
static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceededException");
static constexpr uint32_t WORKSPACES_DEFAULT_ROLE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("WorkspacesDefaultRoleNotFoundException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t RESOURCE_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("ResourceUnavailableException");
static constexpr uint32_t RESOURCE_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("ResourceAssociatedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == COMPUTE_NOT_COMPATIBLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::COMPUTE_NOT_COMPATIBLE), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == OPERATION_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::OPERATION_NOT_SUPPORTED), false);
  }
  else if (hashCode == UNSUPPORTED_WORKSPACE_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::UNSUPPORTED_WORKSPACE_CONFIGURATION), false);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::OPERATION_IN_PROGRESS), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::INVALID_RESOURCE_STATE), false);
  }
  else if (hashCode == OPERATING_SYSTEM_NOT_COMPATIBLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::OPERATING_SYSTEM_NOT_COMPATIBLE), false);
  }
  else if (hashCode == RESOURCE_CREATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_CREATION_FAILED), false);
  }
  else if (hashCode == INVALID_PARAMETER_VALUES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::INVALID_PARAMETER_VALUES), false);
  }
  else if (hashCode == UNSUPPORTED_NETWORK_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::UNSUPPORTED_NETWORK_CONFIGURATION), false);
  }
  else if (hashCode == INCOMPATIBLE_APPLICATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::INCOMPATIBLE_APPLICATIONS), false);
  }
  else if (hashCode == APPLICATION_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::APPLICATION_NOT_SUPPORTED), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == WORKSPACES_DEFAULT_ROLE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::WORKSPACES_DEFAULT_ROLE_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == RESOURCE_ASSOCIATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_ASSOCIATED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkSpacesErrorMapper
} // namespace WorkSpaces
} // namespace Aws
