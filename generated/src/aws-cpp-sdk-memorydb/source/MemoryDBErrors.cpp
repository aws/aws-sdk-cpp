/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/memorydb/MemoryDBErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MemoryDB;

namespace Aws
{
namespace MemoryDB
{
namespace MemoryDBErrorMapper
{

static constexpr uint32_t SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupAlreadyExistsFault");
static constexpr uint32_t INVALID_A_R_N_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidARNFault");
static constexpr uint32_t A_C_L_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ACLQuotaExceededFault");
static constexpr uint32_t CLUSTER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterNotFoundFault");
static constexpr uint32_t PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ParameterGroupQuotaExceededFault");
static constexpr uint32_t RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeQuotaExceededFault");
static constexpr uint32_t SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotAlreadyExistsFault");
static constexpr uint32_t SUBNET_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetQuotaExceededFault");
static constexpr uint32_t DEFAULT_USER_REQUIRED_HASH = ConstExprHashingUtils::HashString("DefaultUserRequired");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t USER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("UserAlreadyExistsFault");
static constexpr uint32_t USER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("UserNotFoundFault");
static constexpr uint32_t INVALID_K_M_S_KEY_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidKMSKeyFault");
static constexpr uint32_t SHARDS_PER_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ShardsPerClusterQuotaExceededFault");
static constexpr uint32_t INVALID_NODE_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidNodeStateFault");
static constexpr uint32_t SNAPSHOT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotNotFoundFault");
static constexpr uint32_t SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotQuotaExceededFault");
static constexpr uint32_t SERVICE_UPDATE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ServiceUpdateNotFoundFault");
static constexpr uint32_t INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientClusterCapacityFault");
static constexpr uint32_t SUBNET_NOT_ALLOWED_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetNotAllowedFault");
static constexpr uint32_t USER_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("UserQuotaExceededFault");
static constexpr uint32_t INVALID_SNAPSHOT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidSnapshotStateFault");
static constexpr uint32_t CLUSTER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterAlreadyExistsFault");
static constexpr uint32_t TAG_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("TagNotFoundFault");
static constexpr uint32_t A_C_L_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ACLNotFoundFault");
static constexpr uint32_t INVALID_CLUSTER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterStateFault");
static constexpr uint32_t NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NodeQuotaForClusterExceededFault");
static constexpr uint32_t SUBNET_IN_USE_HASH = ConstExprHashingUtils::HashString("SubnetInUse");
static constexpr uint32_t CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterQuotaForCustomerExceededFault");
static constexpr uint32_t SUBNET_GROUP_IN_USE_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupInUseFault");
static constexpr uint32_t SHARD_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ShardNotFoundFault");
static constexpr uint32_t INVALID_USER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidUserStateFault");
static constexpr uint32_t A_C_L_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ACLAlreadyExistsFault");
static constexpr uint32_t SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupQuotaExceededFault");
static constexpr uint32_t A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("APICallRateForCustomerExceededFault");
static constexpr uint32_t PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ParameterGroupNotFoundFault");
static constexpr uint32_t PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ParameterGroupAlreadyExistsFault");
static constexpr uint32_t SUBNET_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetGroupNotFoundFault");
static constexpr uint32_t INVALID_PARAMETER_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidParameterGroupStateFault");
static constexpr uint32_t SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ServiceLinkedRoleNotFoundFault");
static constexpr uint32_t INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidVPCNetworkStateFault");
static constexpr uint32_t TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagQuotaPerResourceExceeded");
static constexpr uint32_t TEST_FAILOVER_NOT_AVAILABLE_FAULT_HASH = ConstExprHashingUtils::HashString("TestFailoverNotAvailableFault");
static constexpr uint32_t NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NodeQuotaForCustomerExceededFault");
static constexpr uint32_t RESERVED_NODES_OFFERING_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodesOfferingNotFoundFault");
static constexpr uint32_t RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeAlreadyExistsFault");
static constexpr uint32_t INVALID_CREDENTIALS_HASH = ConstExprHashingUtils::HashString("InvalidCredentialsException");
static constexpr uint32_t DUPLICATE_USER_NAME_FAULT_HASH = ConstExprHashingUtils::HashString("DuplicateUserNameFault");
static constexpr uint32_t INVALID_A_C_L_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidACLStateFault");
static constexpr uint32_t NO_OPERATION_FAULT_HASH = ConstExprHashingUtils::HashString("NoOperationFault");
static constexpr uint32_t RESERVED_NODE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeNotFoundFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_A_R_N_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_A_R_N_FAULT), false);
  }
  else if (hashCode == A_C_L_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_C_L_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::CLUSTER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SNAPSHOT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == DEFAULT_USER_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::DEFAULT_USER_REQUIRED), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == USER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::USER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == USER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::USER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_K_M_S_KEY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_K_M_S_KEY_FAULT), false);
  }
  else if (hashCode == SHARDS_PER_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SHARDS_PER_CLUSTER_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_NODE_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_NODE_STATE_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SNAPSHOT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SERVICE_UPDATE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SERVICE_UPDATE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INSUFFICIENT_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == SUBNET_NOT_ALLOWED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_NOT_ALLOWED_FAULT), false);
  }
  else if (hashCode == USER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::USER_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_SNAPSHOT_STATE_FAULT), false);
  }
  else if (hashCode == CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::CLUSTER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == TAG_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::TAG_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == A_C_L_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_C_L_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_CLUSTER_STATE_FAULT), false);
  }
  else if (hashCode == NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SUBNET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_IN_USE), false);
  }
  else if (hashCode == CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SUBNET_GROUP_IN_USE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_IN_USE_FAULT), false);
  }
  else if (hashCode == SHARD_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SHARD_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_USER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_USER_STATE_FAULT), false);
  }
  else if (hashCode == A_C_L_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_C_L_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::PARAMETER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::PARAMETER_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_PARAMETER_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SERVICE_LINKED_ROLE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
  }
  else if (hashCode == TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::TAG_QUOTA_PER_RESOURCE_EXCEEDED), false);
  }
  else if (hashCode == TEST_FAILOVER_NOT_AVAILABLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::TEST_FAILOVER_NOT_AVAILABLE_FAULT), false);
  }
  else if (hashCode == NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESERVED_NODES_OFFERING_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODES_OFFERING_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_CREDENTIALS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_CREDENTIALS), false);
  }
  else if (hashCode == DUPLICATE_USER_NAME_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::DUPLICATE_USER_NAME_FAULT), false);
  }
  else if (hashCode == INVALID_A_C_L_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_A_C_L_STATE_FAULT), false);
  }
  else if (hashCode == NO_OPERATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::NO_OPERATION_FAULT), false);
  }
  else if (hashCode == RESERVED_NODE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODE_NOT_FOUND_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MemoryDBErrorMapper
} // namespace MemoryDB
} // namespace Aws
