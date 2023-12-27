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

static const int SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("SubnetGroupAlreadyExistsFault");
static const int INVALID_A_R_N_FAULT_HASH = HashingUtils::HashString("InvalidARNFault");
static const int A_C_L_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ACLQuotaExceededFault");
static const int CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ClusterNotFoundFault");
static const int PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ParameterGroupQuotaExceededFault");
static const int RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ReservedNodeQuotaExceededFault");
static const int SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("SnapshotAlreadyExistsFault");
static const int SUBNET_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SubnetQuotaExceededFault");
static const int DEFAULT_USER_REQUIRED_HASH = HashingUtils::HashString("DefaultUserRequired");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int USER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("UserAlreadyExistsFault");
static const int USER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("UserNotFoundFault");
static const int INVALID_K_M_S_KEY_FAULT_HASH = HashingUtils::HashString("InvalidKMSKeyFault");
static const int SHARDS_PER_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ShardsPerClusterQuotaExceededFault");
static const int INVALID_NODE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidNodeStateFault");
static const int SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SnapshotNotFoundFault");
static const int SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SnapshotQuotaExceededFault");
static const int SERVICE_UPDATE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ServiceUpdateNotFoundFault");
static const int INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientClusterCapacityFault");
static const int SUBNET_NOT_ALLOWED_FAULT_HASH = HashingUtils::HashString("SubnetNotAllowedFault");
static const int USER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("UserQuotaExceededFault");
static const int INVALID_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidSnapshotStateFault");
static const int CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ClusterAlreadyExistsFault");
static const int TAG_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("TagNotFoundFault");
static const int A_C_L_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ACLNotFoundFault");
static const int INVALID_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterStateFault");
static const int NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NodeQuotaForClusterExceededFault");
static const int SUBNET_IN_USE_HASH = HashingUtils::HashString("SubnetInUse");
static const int CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterQuotaForCustomerExceededFault");
static const int SUBNET_GROUP_IN_USE_FAULT_HASH = HashingUtils::HashString("SubnetGroupInUseFault");
static const int SHARD_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ShardNotFoundFault");
static const int INVALID_USER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidUserStateFault");
static const int A_C_L_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ACLAlreadyExistsFault");
static const int SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SubnetGroupQuotaExceededFault");
static const int A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("APICallRateForCustomerExceededFault");
static const int PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ParameterGroupNotFoundFault");
static const int PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ParameterGroupAlreadyExistsFault");
static const int SUBNET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubnetGroupNotFoundFault");
static const int INVALID_PARAMETER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidParameterGroupStateFault");
static const int SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ServiceLinkedRoleNotFoundFault");
static const int INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidVPCNetworkStateFault");
static const int TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH = HashingUtils::HashString("TagQuotaPerResourceExceeded");
static const int TEST_FAILOVER_NOT_AVAILABLE_FAULT_HASH = HashingUtils::HashString("TestFailoverNotAvailableFault");
static const int NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NodeQuotaForCustomerExceededFault");
static const int RESERVED_NODES_OFFERING_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedNodesOfferingNotFoundFault");
static const int RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ReservedNodeAlreadyExistsFault");
static const int INVALID_CREDENTIALS_HASH = HashingUtils::HashString("InvalidCredentialsException");
static const int DUPLICATE_USER_NAME_FAULT_HASH = HashingUtils::HashString("DuplicateUserNameFault");
static const int INVALID_A_C_L_STATE_FAULT_HASH = HashingUtils::HashString("InvalidACLStateFault");
static const int NO_OPERATION_FAULT_HASH = HashingUtils::HashString("NoOperationFault");
static const int RESERVED_NODE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedNodeNotFoundFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_A_R_N_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_A_R_N_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == A_C_L_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_C_L_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::CLUSTER_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SNAPSHOT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DEFAULT_USER_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::DEFAULT_USER_REQUIRED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_SUBNET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::USER_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::USER_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_K_M_S_KEY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_K_M_S_KEY_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SHARDS_PER_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SHARDS_PER_CLUSTER_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NODE_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_NODE_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SNAPSHOT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SNAPSHOT_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_UPDATE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SERVICE_UPDATE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INSUFFICIENT_CLUSTER_CAPACITY_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_NOT_ALLOWED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_NOT_ALLOWED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::USER_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_SNAPSHOT_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::CLUSTER_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAG_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::TAG_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == A_C_L_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_C_L_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_CLUSTER_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_GROUP_IN_USE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_IN_USE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SHARD_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SHARD_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_USER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_USER_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == A_C_L_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_C_L_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::PARAMETER_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::PARAMETER_GROUP_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SUBNET_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_PARAMETER_GROUP_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::SERVICE_LINKED_ROLE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::TAG_QUOTA_PER_RESOURCE_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TEST_FAILOVER_NOT_AVAILABLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::TEST_FAILOVER_NOT_AVAILABLE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESERVED_NODES_OFFERING_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODES_OFFERING_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODE_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CREDENTIALS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_CREDENTIALS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_USER_NAME_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::DUPLICATE_USER_NAME_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_A_C_L_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::INVALID_A_C_L_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_OPERATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::NO_OPERATION_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESERVED_NODE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MemoryDBErrors::RESERVED_NODE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MemoryDBErrorMapper
} // namespace MemoryDB
} // namespace Aws
