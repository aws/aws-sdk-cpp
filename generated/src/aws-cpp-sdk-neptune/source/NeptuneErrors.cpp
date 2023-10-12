/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/neptune/NeptuneErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Neptune;

namespace Aws
{
namespace Neptune
{
namespace NeptuneErrorMapper
{

static constexpr uint32_t D_B_CLUSTER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterNotFoundFault");
static constexpr uint32_t SUBSCRIPTION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionNotFound");
static constexpr uint32_t D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterEndpointQuotaExceededFault");
static constexpr uint32_t OPTION_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("OptionGroupNotFoundFault");
static constexpr uint32_t SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionCategoryNotFound");
static constexpr uint32_t INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBSubnetGroupStateFault");
static constexpr uint32_t D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("DBSubnetGroupQuotaExceeded");
static constexpr uint32_t D_B_INSTANCE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBInstanceNotFound");
static constexpr uint32_t D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH = ConstExprHashingUtils::HashString("DBSubnetGroupDoesNotCoverEnoughAZs");
static constexpr uint32_t D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH = ConstExprHashingUtils::HashString("DBUpgradeDependencyFailure");
static constexpr uint32_t INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBSnapshotState");
static constexpr uint32_t SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SharedSnapshotQuotaExceeded");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterParameterGroupNotFound");
static constexpr uint32_t DOMAIN_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DomainNotFoundFault");
static constexpr uint32_t D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("DBParameterGroupQuotaExceeded");
static constexpr uint32_t INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidEventSubscriptionState");
static constexpr uint32_t D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterRoleAlreadyExists");
static constexpr uint32_t INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientStorageClusterCapacity");
static constexpr uint32_t D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBSubnetGroupNotFoundFault");
static constexpr uint32_t D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBSnapshotAlreadyExists");
static constexpr uint32_t SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotQuotaExceeded");
static constexpr uint32_t SUBNET_ALREADY_IN_USE_HASH = ConstExprHashingUtils::HashString("SubnetAlreadyInUse");
static constexpr uint32_t D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterEndpointAlreadyExistsFault");
static constexpr uint32_t D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBSubnetGroupAlreadyExists");
static constexpr uint32_t D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterEndpointNotFoundFault");
static constexpr uint32_t EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("EventSubscriptionQuotaExceeded");
static constexpr uint32_t D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBInstanceAlreadyExists");
static constexpr uint32_t INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBParameterGroupState");
static constexpr uint32_t D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBSecurityGroupNotFound");
static constexpr uint32_t INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBClusterSnapshotStateFault");
static constexpr uint32_t GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("GlobalClusterNotFoundFault");
static constexpr uint32_t D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterSnapshotAlreadyExistsFault");
static constexpr uint32_t INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBSecurityGroupState");
static constexpr uint32_t PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH = ConstExprHashingUtils::HashString("ProvisionedIopsNotAvailableInAZFault");
static constexpr uint32_t STORAGE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("StorageQuotaExceeded");
static constexpr uint32_t INVALID_D_B_INSTANCE_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBInstanceState");
static constexpr uint32_t D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("DBSubnetQuotaExceededFault");
static constexpr uint32_t D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterSnapshotNotFoundFault");
static constexpr uint32_t D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterAlreadyExistsFault");
static constexpr uint32_t GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("GlobalClusterQuotaExceededFault");
static constexpr uint32_t RESOURCE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundFault");
static constexpr uint32_t INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientDBInstanceCapacity");
static constexpr uint32_t D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterRoleQuotaExceeded");
static constexpr uint32_t D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBParameterGroupNotFound");
static constexpr uint32_t INSTANCE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("InstanceQuotaExceeded");
static constexpr uint32_t GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("GlobalClusterAlreadyExistsFault");
static constexpr uint32_t INVALID_D_B_CLUSTER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBClusterStateFault");
static constexpr uint32_t SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionAlreadyExist");
static constexpr uint32_t D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBSnapshotNotFound");
static constexpr uint32_t K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH = ConstExprHashingUtils::HashString("KMSKeyNotAccessibleFault");
static constexpr uint32_t CERTIFICATE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("CertificateNotFound");
static constexpr uint32_t D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("DBParameterGroupAlreadyExists");
static constexpr uint32_t S_N_S_NO_AUTHORIZATION_FAULT_HASH = ConstExprHashingUtils::HashString("SNSNoAuthorization");
static constexpr uint32_t INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBClusterEndpointStateFault");
static constexpr uint32_t INVALID_RESTORE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidRestoreFault");
static constexpr uint32_t STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH = ConstExprHashingUtils::HashString("StorageTypeNotSupported");
static constexpr uint32_t S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SNSTopicArnNotFound");
static constexpr uint32_t S_N_S_INVALID_TOPIC_FAULT_HASH = ConstExprHashingUtils::HashString("SNSInvalidTopic");
static constexpr uint32_t INVALID_D_B_SUBNET_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDBSubnetStateFault");
static constexpr uint32_t INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidVPCNetworkStateFault");
static constexpr uint32_t AUTHORIZATION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("AuthorizationNotFound");
static constexpr uint32_t D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterRoleNotFound");
static constexpr uint32_t D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("DBClusterQuotaExceededFault");
static constexpr uint32_t INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientDBClusterCapacityFault");
static constexpr uint32_t SOURCE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SourceNotFound");
static constexpr uint32_t INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidGlobalClusterStateFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == D_B_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SUBSCRIPTION_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBSCRIPTION_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == OPTION_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::OPTION_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SUBNET_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_INSTANCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS), false);
  }
  else if (hashCode == D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SNAPSHOT_STATE_FAULT), false);
  }
  else if (hashCode == SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == DOMAIN_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::DOMAIN_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_EVENT_SUBSCRIPTION_STATE_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SNAPSHOT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBNET_ALREADY_IN_USE), false);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_INSTANCE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_PARAMETER_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SECURITY_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT), false);
  }
  else if (hashCode == GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::GLOBAL_CLUSTER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SECURITY_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT), false);
  }
  else if (hashCode == STORAGE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::STORAGE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_INSTANCE_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_INSTANCE_STATE_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::RESOURCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INSTANCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSTANCE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_CLUSTER_STATE_FAULT), false);
  }
  else if (hashCode == SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBSCRIPTION_ALREADY_EXIST_FAULT), false);
  }
  else if (hashCode == D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SNAPSHOT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::K_M_S_KEY_NOT_ACCESSIBLE_FAULT), false);
  }
  else if (hashCode == CERTIFICATE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::CERTIFICATE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::S_N_S_NO_AUTHORIZATION_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT), false);
  }
  else if (hashCode == INVALID_RESTORE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_RESTORE_FAULT), false);
  }
  else if (hashCode == STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::STORAGE_TYPE_NOT_SUPPORTED_FAULT), false);
  }
  else if (hashCode == S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::S_N_S_TOPIC_ARN_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::S_N_S_INVALID_TOPIC_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SUBNET_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SUBNET_STATE_FAULT), false);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
  }
  else if (hashCode == AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::AUTHORIZATION_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ROLE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == SOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SOURCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_GLOBAL_CLUSTER_STATE_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NeptuneErrorMapper
} // namespace Neptune
} // namespace Aws
