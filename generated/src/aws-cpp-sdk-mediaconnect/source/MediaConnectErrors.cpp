﻿/**
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

static const int CREATE_FLOW420_HASH = HashingUtils::HashString("CreateFlow420Exception");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int GRANT_FLOW_ENTITLEMENTS420_HASH = HashingUtils::HashString("GrantFlowEntitlements420Exception");
static const int ADD_FLOW_OUTPUTS420_HASH = HashingUtils::HashString("AddFlowOutputs420Exception");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CREATE_FLOW420_HASH)
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
  else if (hashCode == ADD_FLOW_OUTPUTS420_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaConnectErrors::ADD_FLOW_OUTPUTS420), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaConnectErrorMapper
} // namespace MediaConnect
} // namespace Aws
