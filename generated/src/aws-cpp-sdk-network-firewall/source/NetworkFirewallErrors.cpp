/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/NetworkFirewallErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NetworkFirewall;

namespace Aws
{
namespace NetworkFirewall
{
namespace NetworkFirewallErrorMapper
{

static const int INSUFFICIENT_CAPACITY_HASH = HashingUtils::HashString("InsufficientCapacityException");
static const int INVALID_TOKEN_HASH = HashingUtils::HashString("InvalidTokenException");
static const int RESOURCE_OWNER_CHECK_HASH = HashingUtils::HashString("ResourceOwnerCheckException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_RESOURCE_POLICY_HASH = HashingUtils::HashString("InvalidResourcePolicyException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int LOG_DESTINATION_PERMISSION_HASH = HashingUtils::HashString("LogDestinationPermissionException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INSUFFICIENT_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::INSUFFICIENT_CAPACITY), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == RESOURCE_OWNER_CHECK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::RESOURCE_OWNER_CHECK), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == INVALID_RESOURCE_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::INVALID_RESOURCE_POLICY), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == LOG_DESTINATION_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::LOG_DESTINATION_PERMISSION), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkFirewallErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NetworkFirewallErrorMapper
} // namespace NetworkFirewall
} // namespace Aws
