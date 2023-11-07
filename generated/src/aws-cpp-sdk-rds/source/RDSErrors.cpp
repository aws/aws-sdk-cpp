﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rds/RDSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RDS;

namespace Aws
{
namespace RDS
{
namespace RDSErrorMapper
{

static const int D_B_INSTANCE_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBInstanceRoleNotFound");
static const int OPTION_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("OptionGroupNotFoundFault");
static const int D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointQuotaExceededFault");
static const int SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionCategoryNotFound");
static const int D_B_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSecurityGroupAlreadyExists");
static const int INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetGroupStateFault");
static const int D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupQuotaExceeded");
static const int EXPORT_TASK_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ExportTaskNotFound");
static const int IAM_ROLE_MISSING_PERMISSIONS_FAULT_HASH = HashingUtils::HashString("IamRoleMissingPermissions");
static const int D_B_INSTANCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBInstanceNotFound");
static const int OPTION_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("OptionGroupQuotaExceededFault");
static const int D_B_LOG_FILE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBLogFileNotFoundFault");
static const int INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSnapshotState");
static const int SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SharedSnapshotQuotaExceeded");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int D_B_PROXY_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBProxyQuotaExceededFault");
static const int D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBParameterGroupQuotaExceeded");
static const int D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterRoleAlreadyExists");
static const int INVALID_EXPORT_TASK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidExportTaskStateFault");
static const int INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientStorageClusterCapacity");
static const int D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupNotFoundFault");
static const int D_B_SECURITY_GROUP_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("DBSecurityGroupNotSupported");
static const int STORAGE_TYPE_NOT_AVAILABLE_FAULT_HASH = HashingUtils::HashString("StorageTypeNotAvailableFault");
static const int D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSnapshotAlreadyExists");
static const int D_B_PROXY_TARGET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBProxyTargetGroupNotFoundFault");
static const int SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SnapshotQuotaExceeded");
static const int SUBNET_ALREADY_IN_USE_HASH = HashingUtils::HashString("SubnetAlreadyInUse");
static const int D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointNotFoundFault");
static const int D_B_INSTANCE_ROLE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBInstanceRoleAlreadyExists");
static const int INTEGRATION_CONFLICT_OPERATION_FAULT_HASH = HashingUtils::HashString("IntegrationConflictOperationFault");
static const int RESERVED_D_B_INSTANCES_OFFERING_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedDBInstancesOfferingNotFound");
static const int INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBParameterGroupState");
static const int D_B_PROXY_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBProxyEndpointQuotaExceededFault");
static const int TENANT_DATABASE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("TenantDatabaseQuotaExceeded");
static const int D_B_PROXY_TARGET_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBProxyTargetNotFoundFault");
static const int INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSecurityGroupState");
static const int D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterSnapshotAlreadyExistsFault");
static const int STORAGE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("StorageQuotaExceeded");
static const int INVALID_D_B_SUBNET_GROUP_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetGroupFault");
static const int INVALID_D_B_INSTANCE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBInstanceState");
static const int D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBSubnetQuotaExceededFault");
static const int D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterSnapshotNotFoundFault");
static const int D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterAlreadyExistsFault");
static const int INVALID_INTEGRATION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidIntegrationStateFault");
static const int D_B_PROXY_TARGET_ALREADY_REGISTERED_FAULT_HASH = HashingUtils::HashString("DBProxyTargetAlreadyRegisteredFault");
static const int AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("AuthorizationAlreadyExists");
static const int D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterRoleQuotaExceeded");
static const int INVALID_S3_BUCKET_FAULT_HASH = HashingUtils::HashString("InvalidS3BucketFault");
static const int INVALID_OPTION_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidOptionGroupStateFault");
static const int D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBParameterGroupNotFound");
static const int INVALID_D_B_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterStateFault");
static const int SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH = HashingUtils::HashString("SubscriptionAlreadyExist");
static const int BLUE_GREEN_DEPLOYMENT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("BlueGreenDeploymentAlreadyExistsFault");
static const int CERTIFICATE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CertificateNotFound");
static const int D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBParameterGroupAlreadyExists");
static const int INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterEndpointStateFault");
static const int SOURCE_CLUSTER_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("SourceClusterNotSupportedFault");
static const int INVALID_D_B_CLUSTER_AUTOMATED_BACKUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterAutomatedBackupStateFault");
static const int STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("StorageTypeNotSupported");
static const int S_N_S_INVALID_TOPIC_FAULT_HASH = HashingUtils::HashString("SNSInvalidTopic");
static const int INVALID_D_B_SUBNET_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetStateFault");
static const int INVALID_D_B_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterCapacityFault");
static const int INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidVPCNetworkStateFault");
static const int AUTHORIZATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("AuthorizationNotFound");
static const int AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("AuthorizationQuotaExceeded");
static const int D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterRoleNotFound");
static const int D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterQuotaExceededFault");
static const int OPTION_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("OptionGroupAlreadyExistsFault");
static const int D_B_INSTANCE_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBInstanceAutomatedBackupQuotaExceeded");
static const int D_B_CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterNotFoundFault");
static const int SUBSCRIPTION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionNotFound");
static const int BACKUP_POLICY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("BackupPolicyNotFoundFault");
static const int INVALID_D_B_PROXY_ENDPOINT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBProxyEndpointStateFault");
static const int D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH = HashingUtils::HashString("DBSubnetGroupDoesNotCoverEnoughAZs");
static const int D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH = HashingUtils::HashString("DBUpgradeDependencyFailure");
static const int INVALID_D_B_PROXY_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBProxyStateFault");
static const int D_B_SUBNET_GROUP_NOT_ALLOWED_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupNotAllowedFault");
static const int BLUE_GREEN_DEPLOYMENT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("BlueGreenDeploymentNotFoundFault");
static const int D_B_PROXY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBProxyNotFoundFault");
static const int D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterParameterGroupNotFound");
static const int DOMAIN_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DomainNotFoundFault");
static const int INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidEventSubscriptionState");
static const int D_B_INSTANCE_AUTOMATED_BACKUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBInstanceAutomatedBackupNotFound");
static const int SOURCE_DATABASE_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("SourceDatabaseNotSupportedFault");
static const int INSUFFICIENT_AVAILABLE_I_PS_IN_SUBNET_FAULT_HASH = HashingUtils::HashString("InsufficientAvailableIPsInSubnetFault");
static const int D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointAlreadyExistsFault");
static const int D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupAlreadyExists");
static const int INTEGRATION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("IntegrationQuotaExceededFault");
static const int INVALID_EXPORT_SOURCE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidExportSourceState");
static const int EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("EventSubscriptionQuotaExceeded");
static const int D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBInstanceAlreadyExists");
static const int INVALID_EXPORT_ONLY_FAULT_HASH = HashingUtils::HashString("InvalidExportOnly");
static const int D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSecurityGroupNotFound");
static const int CUSTOM_D_B_ENGINE_VERSION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CustomDBEngineVersionNotFoundFault");
static const int INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterSnapshotStateFault");
static const int D_B_INSTANCE_ROLE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBInstanceRoleQuotaExceeded");
static const int GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("GlobalClusterNotFoundFault");
static const int D_B_PROXY_ENDPOINT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBProxyEndpointAlreadyExistsFault");
static const int TENANT_DATABASE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("TenantDatabaseAlreadyExists");
static const int INTEGRATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("IntegrationAlreadyExistsFault");
static const int NETWORK_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("NetworkTypeNotSupported");
static const int PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH = HashingUtils::HashString("ProvisionedIopsNotAvailableInAZFault");
static const int D_B_CLUSTER_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterAutomatedBackupQuotaExceededFault");
static const int IAM_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("IamRoleNotFound");
static const int GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("GlobalClusterQuotaExceededFault");
static const int RESOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ResourceNotFoundFault");
static const int INVALID_D_B_INSTANCE_AUTOMATED_BACKUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBInstanceAutomatedBackupState");
static const int INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientDBInstanceCapacity");
static const int RESERVED_D_B_INSTANCE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ReservedDBInstanceQuotaExceeded");
static const int INTEGRATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("IntegrationNotFoundFault");
static const int D_B_SNAPSHOT_TENANT_DATABASE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSnapshotTenantDatabaseNotFoundFault");
static const int RESERVED_D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ReservedDBInstanceAlreadyExists");
static const int EXPORT_TASK_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ExportTaskAlreadyExists");
static const int D_B_PROXY_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBProxyAlreadyExistsFault");
static const int D_B_PROXY_ENDPOINT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBProxyEndpointNotFoundFault");
static const int INSTANCE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("InstanceQuotaExceeded");
static const int GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("GlobalClusterAlreadyExistsFault");
static const int D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSnapshotNotFound");
static const int CUSTOM_AVAILABILITY_ZONE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CustomAvailabilityZoneNotFound");
static const int D_B_CLUSTER_AUTOMATED_BACKUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterAutomatedBackupNotFoundFault");
static const int K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH = HashingUtils::HashString("KMSKeyNotAccessibleFault");
static const int D_B_CLUSTER_BACKTRACK_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterBacktrackNotFoundFault");
static const int CREATE_CUSTOM_D_B_ENGINE_VERSION_FAULT_HASH = HashingUtils::HashString("CreateCustomDBEngineVersionFault");
static const int S_N_S_NO_AUTHORIZATION_FAULT_HASH = HashingUtils::HashString("SNSNoAuthorization");
static const int RESERVED_D_B_INSTANCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedDBInstanceNotFound");
static const int INVALID_RESTORE_FAULT_HASH = HashingUtils::HashString("InvalidRestoreFault");
static const int S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SNSTopicArnNotFound");
static const int INVALID_BLUE_GREEN_DEPLOYMENT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidBlueGreenDeploymentStateFault");
static const int D_B_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("QuotaExceeded.DBSecurityGroup");
static const int CUSTOM_D_B_ENGINE_VERSION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("CustomDBEngineVersionAlreadyExistsFault");
static const int EC2_IMAGE_PROPERTIES_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("Ec2ImagePropertiesNotSupportedFault");
static const int TENANT_DATABASE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("TenantDatabaseNotFound");
static const int INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientDBClusterCapacityFault");
static const int POINT_IN_TIME_RESTORE_NOT_ENABLED_FAULT_HASH = HashingUtils::HashString("PointInTimeRestoreNotEnabled");
static const int SOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SourceNotFound");
static const int INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidGlobalClusterStateFault");
static const int INVALID_CUSTOM_D_B_ENGINE_VERSION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidCustomDBEngineVersionStateFault");
static const int CUSTOM_D_B_ENGINE_VERSION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("CustomDBEngineVersionQuotaExceededFault");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == D_B_INSTANCE_ROLE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ROLE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == OPTION_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::OPTION_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SUBNET_GROUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == EXPORT_TASK_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::EXPORT_TASK_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == IAM_ROLE_MISSING_PERMISSIONS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::IAM_ROLE_MISSING_PERMISSIONS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_INSTANCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == OPTION_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::OPTION_GROUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_LOG_FILE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_LOG_FILE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SNAPSHOT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_SUBNET), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_EXPORT_TASK_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_EXPORT_TASK_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SECURITY_GROUP_NOT_SUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_NOT_SUPPORTED_FAULT), false);
    return true;
  }
  else if (hashCode == STORAGE_TYPE_NOT_AVAILABLE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::STORAGE_TYPE_NOT_AVAILABLE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SNAPSHOT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_TARGET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_TARGET_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBNET_ALREADY_IN_USE), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_INSTANCE_ROLE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ROLE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INTEGRATION_CONFLICT_OPERATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INTEGRATION_CONFLICT_OPERATION_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_D_B_INSTANCES_OFFERING_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCES_OFFERING_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_PARAMETER_GROUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_ENDPOINT_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == TENANT_DATABASE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::TENANT_DATABASE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_TARGET_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_TARGET_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SECURITY_GROUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == STORAGE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::STORAGE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_SUBNET_GROUP_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SUBNET_GROUP_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_INSTANCE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_INSTANCE_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_INTEGRATION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_INTEGRATION_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_TARGET_ALREADY_REGISTERED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_TARGET_ALREADY_REGISTERED_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::AUTHORIZATION_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_S3_BUCKET_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_S3_BUCKET_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_OPTION_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_OPTION_GROUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_CLUSTER_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBSCRIPTION_ALREADY_EXIST_FAULT), false);
    return true;
  }
  else if (hashCode == BLUE_GREEN_DEPLOYMENT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::BLUE_GREEN_DEPLOYMENT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == CERTIFICATE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::CERTIFICATE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == SOURCE_CLUSTER_NOT_SUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SOURCE_CLUSTER_NOT_SUPPORTED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_CLUSTER_AUTOMATED_BACKUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_AUTOMATED_BACKUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::STORAGE_TYPE_NOT_SUPPORTED_FAULT), false);
    return true;
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::S_N_S_INVALID_TOPIC_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_SUBNET_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SUBNET_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_CLUSTER_CAPACITY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_CAPACITY_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::AUTHORIZATION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::AUTHORIZATION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ROLE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == OPTION_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::OPTION_GROUP_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_INSTANCE_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBSCRIPTION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == BACKUP_POLICY_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::BACKUP_POLICY_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_PROXY_ENDPOINT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_PROXY_ENDPOINT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS), false);
    return true;
  }
  else if (hashCode == D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_PROXY_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_PROXY_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SUBNET_GROUP_NOT_ALLOWED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_NOT_ALLOWED_FAULT), false);
    return true;
  }
  else if (hashCode == BLUE_GREEN_DEPLOYMENT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::BLUE_GREEN_DEPLOYMENT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == DOMAIN_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::DOMAIN_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_EVENT_SUBSCRIPTION_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_INSTANCE_AUTOMATED_BACKUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_AUTOMATED_BACKUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == SOURCE_DATABASE_NOT_SUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SOURCE_DATABASE_NOT_SUPPORTED_FAULT), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_AVAILABLE_I_PS_IN_SUBNET_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSUFFICIENT_AVAILABLE_I_PS_IN_SUBNET_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INTEGRATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INTEGRATION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_EXPORT_SOURCE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_EXPORT_SOURCE_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_EXPORT_ONLY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_EXPORT_ONLY_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == CUSTOM_D_B_ENGINE_VERSION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::CUSTOM_D_B_ENGINE_VERSION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_INSTANCE_ROLE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ROLE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::GLOBAL_CLUSTER_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_ENDPOINT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_ENDPOINT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == TENANT_DATABASE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::TENANT_DATABASE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INTEGRATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INTEGRATION_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == NETWORK_TYPE_NOT_SUPPORTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::NETWORK_TYPE_NOT_SUPPORTED), false);
    return true;
  }
  else if (hashCode == PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == IAM_ROLE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::IAM_ROLE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESOURCE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_D_B_INSTANCE_AUTOMATED_BACKUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_INSTANCE_AUTOMATED_BACKUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_D_B_INSTANCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INTEGRATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INTEGRATION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SNAPSHOT_TENANT_DATABASE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SNAPSHOT_TENANT_DATABASE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == EXPORT_TASK_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::EXPORT_TASK_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_PROXY_ENDPOINT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PROXY_ENDPOINT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INSTANCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSTANCE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SNAPSHOT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == CUSTOM_AVAILABILITY_ZONE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::CUSTOM_AVAILABILITY_ZONE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_AUTOMATED_BACKUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_AUTOMATED_BACKUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::K_M_S_KEY_NOT_ACCESSIBLE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_CLUSTER_BACKTRACK_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_BACKTRACK_NOT_FOUND_FAULT), false);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == CREATE_CUSTOM_D_B_ENGINE_VERSION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::CREATE_CUSTOM_D_B_ENGINE_VERSION_FAULT), false);
    return true;
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::S_N_S_NO_AUTHORIZATION_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_D_B_INSTANCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_RESTORE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_RESTORE_FAULT), false);
    return true;
  }
  else if (hashCode == S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::S_N_S_TOPIC_ARN_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_BLUE_GREEN_DEPLOYMENT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_BLUE_GREEN_DEPLOYMENT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == D_B_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == CUSTOM_D_B_ENGINE_VERSION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::CUSTOM_D_B_ENGINE_VERSION_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == EC2_IMAGE_PROPERTIES_NOT_SUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::EC2_IMAGE_PROPERTIES_NOT_SUPPORTED_FAULT), false);
    return true;
  }
  else if (hashCode == TENANT_DATABASE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::TENANT_DATABASE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT), false);
    return true;
  }
  else if (hashCode == POINT_IN_TIME_RESTORE_NOT_ENABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::POINT_IN_TIME_RESTORE_NOT_ENABLED_FAULT), false);
    return true;
  }
  else if (hashCode == SOURCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SOURCE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_GLOBAL_CLUSTER_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CUSTOM_D_B_ENGINE_VERSION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_CUSTOM_D_B_ENGINE_VERSION_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == CUSTOM_D_B_ENGINE_VERSION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::CUSTOM_D_B_ENGINE_VERSION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);
  AWSError<CoreErrors> error;
  if (GetErrorForNameHelper0(hashCode, error))
  {
    return error;
  }
  else if (GetErrorForNameHelper1(hashCode, error))
  {
    return error;
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RDSErrorMapper
} // namespace RDS
} // namespace Aws
