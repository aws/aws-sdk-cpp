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

static const int D_B_CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterNotFoundFault");
static const int SUBSCRIPTION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionNotFound");
static const int D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointQuotaExceededFault");
static const int OPTION_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("OptionGroupNotFoundFault");
static const int SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionCategoryNotFound");
static const int INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetGroupStateFault");
static const int D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupQuotaExceeded");
static const int D_B_INSTANCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBInstanceNotFound");
static const int D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH = HashingUtils::HashString("DBSubnetGroupDoesNotCoverEnoughAZs");
static const int D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH = HashingUtils::HashString("DBUpgradeDependencyFailure");
static const int INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSnapshotState");
static const int SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SharedSnapshotQuotaExceeded");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterParameterGroupNotFound");
static const int DOMAIN_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DomainNotFoundFault");
static const int D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBParameterGroupQuotaExceeded");
static const int INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidEventSubscriptionState");
static const int D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterRoleAlreadyExists");
static const int INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientStorageClusterCapacity");
static const int D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupNotFoundFault");
static const int D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSnapshotAlreadyExists");
static const int SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SnapshotQuotaExceeded");
static const int SUBNET_ALREADY_IN_USE_HASH = HashingUtils::HashString("SubnetAlreadyInUse");
static const int D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointAlreadyExistsFault");
static const int D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupAlreadyExists");
static const int D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointNotFoundFault");
static const int EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("EventSubscriptionQuotaExceeded");
static const int D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBInstanceAlreadyExists");
static const int INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBParameterGroupState");
static const int D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSecurityGroupNotFound");
static const int INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterSnapshotStateFault");
static const int GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("GlobalClusterNotFoundFault");
static const int D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterSnapshotAlreadyExistsFault");
static const int INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSecurityGroupState");
static const int PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH = HashingUtils::HashString("ProvisionedIopsNotAvailableInAZFault");
static const int STORAGE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("StorageQuotaExceeded");
static const int INVALID_D_B_INSTANCE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBInstanceState");
static const int D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBSubnetQuotaExceededFault");
static const int D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterSnapshotNotFoundFault");
static const int D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterAlreadyExistsFault");
static const int GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("GlobalClusterQuotaExceededFault");
static const int RESOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ResourceNotFoundFault");
static const int INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientDBInstanceCapacity");
static const int D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterRoleQuotaExceeded");
static const int D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBParameterGroupNotFound");
static const int INSTANCE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("InstanceQuotaExceeded");
static const int GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("GlobalClusterAlreadyExistsFault");
static const int INVALID_D_B_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterStateFault");
static const int SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH = HashingUtils::HashString("SubscriptionAlreadyExist");
static const int D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSnapshotNotFound");
static const int K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH = HashingUtils::HashString("KMSKeyNotAccessibleFault");
static const int CERTIFICATE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CertificateNotFound");
static const int D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBParameterGroupAlreadyExists");
static const int S_N_S_NO_AUTHORIZATION_FAULT_HASH = HashingUtils::HashString("SNSNoAuthorization");
static const int INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterEndpointStateFault");
static const int INVALID_RESTORE_FAULT_HASH = HashingUtils::HashString("InvalidRestoreFault");
static const int STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("StorageTypeNotSupported");
static const int S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SNSTopicArnNotFound");
static const int S_N_S_INVALID_TOPIC_FAULT_HASH = HashingUtils::HashString("SNSInvalidTopic");
static const int INVALID_D_B_SUBNET_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetStateFault");
static const int INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidVPCNetworkStateFault");
static const int AUTHORIZATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("AuthorizationNotFound");
static const int D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterRoleNotFound");
static const int D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterQuotaExceededFault");
static const int INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientDBClusterCapacityFault");
static const int SOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SourceNotFound");
static const int INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidGlobalClusterStateFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == D_B_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBSCRIPTION_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBSCRIPTION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPTION_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::OPTION_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SUBNET_GROUP_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_INSTANCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_INSTANCE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SNAPSHOT_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_SUBNET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DOMAIN_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::DOMAIN_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_EVENT_SUBSCRIPTION_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SNAPSHOT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SNAPSHOT_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBNET_ALREADY_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_INSTANCE_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_PARAMETER_GROUP_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SECURITY_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::GLOBAL_CLUSTER_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SECURITY_GROUP_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STORAGE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::STORAGE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_INSTANCE_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_INSTANCE_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SUBNET_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::RESOURCE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_PARAMETER_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSTANCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSTANCE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_CLUSTER_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SUBSCRIPTION_ALREADY_EXIST_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_SNAPSHOT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::K_M_S_KEY_NOT_ACCESSIBLE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CERTIFICATE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::CERTIFICATE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::S_N_S_NO_AUTHORIZATION_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_RESTORE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_RESTORE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::STORAGE_TYPE_NOT_SUPPORTED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::S_N_S_TOPIC_ARN_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::S_N_S_INVALID_TOPIC_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_D_B_SUBNET_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_D_B_SUBNET_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::AUTHORIZATION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_ROLE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::D_B_CLUSTER_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::SOURCE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneErrors::INVALID_GLOBAL_CLUSTER_STATE_FAULT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NeptuneErrorMapper
} // namespace Neptune
} // namespace Aws
