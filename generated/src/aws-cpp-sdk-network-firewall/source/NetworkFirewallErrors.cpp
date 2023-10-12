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

static constexpr uint32_t INSUFFICIENT_CAPACITY_HASH = ConstExprHashingUtils::HashString("InsufficientCapacityException");
static constexpr uint32_t INVALID_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidTokenException");
static constexpr uint32_t RESOURCE_OWNER_CHECK_HASH = ConstExprHashingUtils::HashString("ResourceOwnerCheckException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperationException");
static constexpr uint32_t INVALID_RESOURCE_POLICY_HASH = ConstExprHashingUtils::HashString("InvalidResourcePolicyException");
static constexpr uint32_t INVALID_OPERATION_HASH = ConstExprHashingUtils::HashString("InvalidOperationException");
static constexpr uint32_t LOG_DESTINATION_PERMISSION_HASH = ConstExprHashingUtils::HashString("LogDestinationPermissionException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
