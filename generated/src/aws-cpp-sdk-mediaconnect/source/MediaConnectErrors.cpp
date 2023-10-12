/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/MediaConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MediaConnect;

namespace Aws
{
namespace MediaConnect
{
namespace MediaConnectErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t CREATE_FLOW420_HASH = ConstExprHashingUtils::HashString("CreateFlow420Exception");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t CREATE_GATEWAY420_HASH = ConstExprHashingUtils::HashString("CreateGateway420Exception");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t INTERNAL_SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServerErrorException");
static constexpr uint32_t GRANT_FLOW_ENTITLEMENTS420_HASH = ConstExprHashingUtils::HashString("GrantFlowEntitlements420Exception");
static constexpr uint32_t CREATE_BRIDGE420_HASH = ConstExprHashingUtils::HashString("CreateBridge420Exception");
static constexpr uint32_t ADD_FLOW_OUTPUTS420_HASH = ConstExprHashingUtils::HashString("AddFlowOutputs420Exception");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::CONFLICT), false);
  }
  else if (hashCode == CREATE_FLOW420_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::CREATE_FLOW420), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::NOT_FOUND), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::FORBIDDEN), false);
  }
  else if (hashCode == CREATE_GATEWAY420_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::CREATE_GATEWAY420), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::INTERNAL_SERVER_ERROR), false);
  }
  else if (hashCode == GRANT_FLOW_ENTITLEMENTS420_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::GRANT_FLOW_ENTITLEMENTS420), false);
  }
  else if (hashCode == CREATE_BRIDGE420_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::CREATE_BRIDGE420), false);
  }
  else if (hashCode == ADD_FLOW_OUTPUTS420_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::ADD_FLOW_OUTPUTS420), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaConnectErrorMapper
} // namespace MediaConnect
} // namespace Aws
