/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift/RedshiftErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Redshift;

namespace Aws
{
namespace Redshift
{
namespace RedshiftErrorMapper
{

static const int AUTHENTICATION_PROFILE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("AuthenticationProfileNotFoundFault");
static const int TABLE_RESTORE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("TableRestoreNotFoundFault");
static const int INVALID_S3_KEY_PREFIX_FAULT_HASH = HashingUtils::HashString("InvalidS3KeyPrefixFault");
static const int SCHEDULED_ACTION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ScheduledActionAlreadyExists");
static const int SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionCategoryNotFound");
static const int HSM_CLIENT_CERTIFICATE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("HsmClientCertificateNotFoundFault");
static const int INVALID_DATA_SHARE_FAULT_HASH = HashingUtils::HashString("InvalidDataShareFault");
static const int CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ClusterNotFound");
static const int INVALID_TAG_FAULT_HASH = HashingUtils::HashString("InvalidTagFault");
static const int CLUSTER_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterSnapshotQuotaExceeded");
static const int RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ReservedNodeQuotaExceeded");
static const int TABLE_LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("TableLimitExceeded");
static const int BATCH_DELETE_REQUEST_SIZE_EXCEEDED_FAULT_HASH = HashingUtils::HashString("BatchDeleteRequestSizeExceeded");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int INVALID_CLUSTER_TRACK_FAULT_HASH = HashingUtils::HashString("InvalidClusterTrack");
static const int INVALID_SNAPSHOT_COPY_GRANT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidSnapshotCopyGrantStateFault");
static const int INVALID_ELASTIC_IP_FAULT_HASH = HashingUtils::HashString("InvalidElasticIpFault");
static const int IPV6_CIDR_BLOCK_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("Ipv6CidrBlockNotFoundFault");
static const int ENDPOINT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("EndpointAlreadyExists");
static const int SNAPSHOT_COPY_GRANT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("SnapshotCopyGrantAlreadyExistsFault");
static const int AUTHENTICATION_PROFILE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("AuthenticationProfileQuotaExceededFault");
static const int SUBNET_ALREADY_IN_USE_HASH = HashingUtils::HashString("SubnetAlreadyInUse");
static const int CUSTOM_CNAME_ASSOCIATION_FAULT_HASH = HashingUtils::HashString("CustomCnameAssociationFault");
static const int SNAPSHOT_SCHEDULE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("SnapshotScheduleAlreadyExists");
static const int CLUSTER_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterSubnetQuotaExceededFault");
static const int CLUSTER_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ClusterSecurityGroupNotFound");
static const int INVALID_SCHEDULE_FAULT_HASH = HashingUtils::HashString("InvalidSchedule");
static const int ENDPOINT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("EndpointNotFound");
static const int ENDPOINT_AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("EndpointAuthorizationAlreadyExists");
static const int INVALID_CLUSTER_SNAPSHOT_SCHEDULE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterSnapshotScheduleState");
static const int CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ClusterAlreadyExists");
static const int INVALID_USAGE_LIMIT_FAULT_HASH = HashingUtils::HashString("InvalidUsageLimit");
static const int CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ClusterSnapshotNotFound");
static const int DEPENDENT_SERVICE_ACCESS_DENIED_FAULT_HASH = HashingUtils::HashString("DependentServiceAccessDenied");
static const int INVALID_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterState");
static const int INVALID_CLUSTER_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterSnapshotState");
static const int SCHEDULE_DEFINITION_TYPE_UNSUPPORTED_FAULT_HASH = HashingUtils::HashString("ScheduleDefinitionTypeUnsupported");
static const int INVALID_POLICY_FAULT_HASH = HashingUtils::HashString("InvalidPolicyFault");
static const int AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("AuthorizationAlreadyExists");
static const int REDSHIFT_IDC_APPLICATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("RedshiftIdcApplicationAlreadyExists");
static const int SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH = HashingUtils::HashString("SubscriptionAlreadyExist");
static const int SNAPSHOT_SCHEDULE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SnapshotScheduleQuotaExceeded");
static const int INCOMPATIBLE_ORDERABLE_OPTIONS_HASH = HashingUtils::HashString("IncompatibleOrderableOptions");
static const int SNAPSHOT_COPY_ALREADY_ENABLED_FAULT_HASH = HashingUtils::HashString("SnapshotCopyAlreadyEnabledFault");
static const int RESERVED_NODE_OFFERING_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedNodeOfferingNotFound");
static const int UNAUTHORIZED_OPERATION_HASH = HashingUtils::HashString("UnauthorizedOperation");
static const int SUBSCRIPTION_SEVERITY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionSeverityNotFound");
static const int SUBSCRIPTION_EVENT_ID_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionEventIdNotFound");
static const int HSM_CLIENT_CERTIFICATE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("HsmClientCertificateAlreadyExistsFault");
static const int IN_PROGRESS_TABLE_RESTORE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("InProgressTableRestoreQuotaExceededFault");
static const int S_N_S_INVALID_TOPIC_FAULT_HASH = HashingUtils::HashString("SNSInvalidTopic");
static const int BUCKET_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("BucketNotFoundFault");
static const int INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidVPCNetworkStateFault");
static const int AUTHORIZATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("AuthorizationNotFound");
static const int AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("AuthorizationQuotaExceeded");
static const int HSM_CONFIGURATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("HsmConfigurationAlreadyExistsFault");
static const int REDSHIFT_IDC_APPLICATION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("RedshiftIdcApplicationQuotaExceeded");
static const int UNAUTHORIZED_PARTNER_INTEGRATION_FAULT_HASH = HashingUtils::HashString("UnauthorizedPartnerIntegration");
static const int RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ReservedNodeAlreadyExists");
static const int HSM_CLIENT_CERTIFICATE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("HsmClientCertificateQuotaExceededFault");
static const int HSM_CONFIGURATION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("HsmConfigurationQuotaExceededFault");
static const int ENDPOINT_AUTHORIZATIONS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("EndpointAuthorizationsPerClusterLimitExceeded");
static const int SUBSCRIPTION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionNotFound");
static const int CLUSTER_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterSubnetGroupQuotaExceeded");
static const int INVALID_SCHEDULED_ACTION_FAULT_HASH = HashingUtils::HashString("InvalidScheduledAction");
static const int SNAPSHOT_COPY_ALREADY_DISABLED_FAULT_HASH = HashingUtils::HashString("SnapshotCopyAlreadyDisabledFault");
static const int UNKNOWN_SNAPSHOT_COPY_REGION_FAULT_HASH = HashingUtils::HashString("UnknownSnapshotCopyRegionFault");
static const int SNAPSHOT_SCHEDULE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SnapshotScheduleNotFound");
static const int USAGE_LIMIT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("UsageLimitAlreadyExists");
static const int INVALID_TABLE_RESTORE_ARGUMENT_FAULT_HASH = HashingUtils::HashString("InvalidTableRestoreArgument");
static const int PARTNER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("PartnerNotFound");
static const int ENDPOINT_AUTHORIZATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("EndpointAuthorizationNotFound");
static const int ACCESS_TO_CLUSTER_DENIED_FAULT_HASH = HashingUtils::HashString("AccessToClusterDenied");
static const int UNSUPPORTED_OPTION_FAULT_HASH = HashingUtils::HashString("UnsupportedOptionFault");
static const int SNAPSHOT_COPY_GRANT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SnapshotCopyGrantQuotaExceededFault");
static const int INSUFFICIENT_S3_BUCKET_POLICY_FAULT_HASH = HashingUtils::HashString("InsufficientS3BucketPolicyFault");
static const int CONFLICT_POLICY_UPDATE_FAULT_HASH = HashingUtils::HashString("ConflictPolicyUpdateFault");
static const int RESERVED_NODE_EXCHANGE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedNodeExchangeNotFond");
static const int RESIZE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ResizeNotFound");
static const int INVALID_NAMESPACE_FAULT_HASH = HashingUtils::HashString("InvalidNamespaceFault");
static const int INVALID_ENDPOINT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidEndpointState");
static const int INVALID_HSM_CONFIGURATION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidHsmConfigurationStateFault");
static const int INVALID_RETENTION_PERIOD_FAULT_HASH = HashingUtils::HashString("InvalidRetentionPeriodFault");
static const int HSM_CONFIGURATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("HsmConfigurationNotFoundFault");
static const int ENDPOINTS_PER_AUTHORIZATION_LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("EndpointsPerAuthorizationLimitExceeded");
static const int SCHEDULED_ACTION_TYPE_UNSUPPORTED_FAULT_HASH = HashingUtils::HashString("ScheduledActionTypeUnsupported");
static const int CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterQuotaExceeded");
static const int CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ClusterSnapshotAlreadyExists");
static const int INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientClusterCapacity");
static const int SNAPSHOT_SCHEDULE_UPDATE_IN_PROGRESS_FAULT_HASH = HashingUtils::HashString("SnapshotScheduleUpdateInProgress");
static const int EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("EventSubscriptionQuotaExceeded");
static const int INVALID_AUTHENTICATION_PROFILE_REQUEST_FAULT_HASH = HashingUtils::HashString("InvalidAuthenticationProfileRequestFault");
static const int SCHEDULED_ACTION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ScheduledActionQuotaExceeded");
static const int CUSTOM_DOMAIN_ASSOCIATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CustomDomainAssociationNotFoundFault");
static const int SCHEDULED_ACTION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ScheduledActionNotFound");
static const int INVALID_CLUSTER_SUBNET_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterSubnetStateFault");
static const int INVALID_SUBSCRIPTION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidSubscriptionStateFault");
static const int INVALID_AUTHORIZATION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidAuthorizationState");
static const int CLUSTER_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ClusterParameterGroupAlreadyExists");
static const int INVALID_RESERVED_NODE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidReservedNodeState");
static const int CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ClusterParameterGroupNotFound");
static const int SNAPSHOT_COPY_GRANT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SnapshotCopyGrantNotFoundFault");
static const int DEPENDENT_SERVICE_UNAVAILABLE_FAULT_HASH = HashingUtils::HashString("DependentServiceUnavailableFault");
static const int INVALID_HSM_CLIENT_CERTIFICATE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidHsmClientCertificateStateFault");
static const int ACCESS_TO_SNAPSHOT_DENIED_FAULT_HASH = HashingUtils::HashString("AccessToSnapshotDenied");
static const int RESOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ResourceNotFoundFault");
static const int AUTHENTICATION_PROFILE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("AuthenticationProfileAlreadyExistsFault");
static const int SNAPSHOT_COPY_DISABLED_FAULT_HASH = HashingUtils::HashString("SnapshotCopyDisabledFault");
static const int BATCH_MODIFY_CLUSTER_SNAPSHOTS_LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("BatchModifyClusterSnapshotsLimitExceededFault");
static const int CLUSTER_ON_LATEST_REVISION_FAULT_HASH = HashingUtils::HashString("ClusterOnLatestRevision");
static const int INTEGRATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("IntegrationNotFoundFault");
static const int CLUSTER_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ClusterSecurityGroupAlreadyExists");
static const int USAGE_LIMIT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("UsageLimitNotFound");
static const int CLUSTER_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("QuotaExceeded.ClusterSecurityGroup");
static const int COPY_TO_REGION_DISABLED_FAULT_HASH = HashingUtils::HashString("CopyToRegionDisabledFault");
static const int NUMBER_OF_NODES_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NumberOfNodesQuotaExceeded");
static const int S_N_S_NO_AUTHORIZATION_FAULT_HASH = HashingUtils::HashString("SNSNoAuthorization");
static const int INVALID_CLUSTER_PARAMETER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterParameterGroupState");
static const int INVALID_RESTORE_FAULT_HASH = HashingUtils::HashString("InvalidRestore");
static const int LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("LimitExceededFault");
static const int S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SNSTopicArnNotFound");
static const int INVALID_S3_BUCKET_NAME_FAULT_HASH = HashingUtils::HashString("InvalidS3BucketNameFault");
static const int NUMBER_OF_NODES_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NumberOfNodesPerClusterLimitExceeded");
static const int CLUSTER_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterParameterGroupQuotaExceeded");
static const int RESERVED_NODE_ALREADY_MIGRATED_FAULT_HASH = HashingUtils::HashString("ReservedNodeAlreadyMigrated");
static const int ENDPOINTS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("EndpointsPerClusterLimitExceeded");
static const int DEPENDENT_SERVICE_REQUEST_THROTTLING_FAULT_HASH = HashingUtils::HashString("DependentServiceRequestThrottlingFault");
static const int INVALID_CLUSTER_SUBNET_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterSubnetGroupStateFault");
static const int UNSUPPORTED_OPERATION_FAULT_HASH = HashingUtils::HashString("UnsupportedOperation");
static const int TAG_LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("TagLimitExceededFault");
static const int INVALID_CLUSTER_SECURITY_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidClusterSecurityGroupState");
static const int CLUSTER_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ClusterSubnetGroupNotFoundFault");
static const int REDSHIFT_IDC_APPLICATION_NOT_EXISTS_FAULT_HASH = HashingUtils::HashString("RedshiftIdcApplicationNotExists");
static const int SOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SourceNotFound");
static const int CLUSTER_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ClusterSubnetGroupAlreadyExists");
static const int RESERVED_NODE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedNodeNotFound");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == AUTHENTICATION_PROFILE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHENTICATION_PROFILE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TABLE_RESTORE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::TABLE_RESTORE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_S3_KEY_PREFIX_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_S3_KEY_PREFIX_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HSM_CLIENT_CERTIFICATE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CLIENT_CERTIFICATE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DATA_SHARE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_DATA_SHARE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_TAG_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_TAG_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SNAPSHOT_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TABLE_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::TABLE_LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == BATCH_DELETE_REQUEST_SIZE_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::BATCH_DELETE_REQUEST_SIZE_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SUBNET), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_TRACK_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_TRACK_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT_COPY_GRANT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SNAPSHOT_COPY_GRANT_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ELASTIC_IP_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_ELASTIC_IP_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == IPV6_CIDR_BLOCK_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::IPV6_CIDR_BLOCK_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENDPOINT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_GRANT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_GRANT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTHENTICATION_PROFILE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHENTICATION_PROFILE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBNET_ALREADY_IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CUSTOM_CNAME_ASSOCIATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CUSTOM_CNAME_ASSOCIATION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SECURITY_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SECURITY_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SCHEDULE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SCHEDULE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENDPOINT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENDPOINT_AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_AUTHORIZATION_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SNAPSHOT_SCHEDULE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SNAPSHOT_SCHEDULE_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_USAGE_LIMIT_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_USAGE_LIMIT_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SNAPSHOT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DEPENDENT_SERVICE_ACCESS_DENIED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::DEPENDENT_SERVICE_ACCESS_DENIED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SNAPSHOT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SNAPSHOT_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SCHEDULE_DEFINITION_TYPE_UNSUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULE_DEFINITION_TYPE_UNSUPPORTED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_POLICY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_POLICY_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHORIZATION_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == REDSHIFT_IDC_APPLICATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::REDSHIFT_IDC_APPLICATION_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_ALREADY_EXIST_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INCOMPATIBLE_ORDERABLE_OPTIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INCOMPATIBLE_ORDERABLE_OPTIONS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_ALREADY_ENABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_ALREADY_ENABLED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESERVED_NODE_OFFERING_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_OFFERING_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNAUTHORIZED_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNAUTHORIZED_OPERATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_SEVERITY_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_SEVERITY_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_EVENT_ID_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_EVENT_ID_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HSM_CLIENT_CERTIFICATE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CLIENT_CERTIFICATE_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == IN_PROGRESS_TABLE_RESTORE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::IN_PROGRESS_TABLE_RESTORE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::S_N_S_INVALID_TOPIC_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == BUCKET_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::BUCKET_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHORIZATION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHORIZATION_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HSM_CONFIGURATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CONFIGURATION_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == REDSHIFT_IDC_APPLICATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::REDSHIFT_IDC_APPLICATION_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNAUTHORIZED_PARTNER_INTEGRATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNAUTHORIZED_PARTNER_INTEGRATION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HSM_CLIENT_CERTIFICATE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CLIENT_CERTIFICATE_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HSM_CONFIGURATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CONFIGURATION_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENDPOINT_AUTHORIZATIONS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_AUTHORIZATIONS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SCHEDULED_ACTION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SCHEDULED_ACTION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_ALREADY_DISABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_ALREADY_DISABLED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNKNOWN_SNAPSHOT_COPY_REGION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNKNOWN_SNAPSHOT_COPY_REGION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == USAGE_LIMIT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::USAGE_LIMIT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_TABLE_RESTORE_ARGUMENT_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_TABLE_RESTORE_ARGUMENT_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PARTNER_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::PARTNER_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENDPOINT_AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_AUTHORIZATION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ACCESS_TO_CLUSTER_DENIED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ACCESS_TO_CLUSTER_DENIED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPTION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNSUPPORTED_OPTION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_GRANT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_GRANT_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INSUFFICIENT_S3_BUCKET_POLICY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INSUFFICIENT_S3_BUCKET_POLICY_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CONFLICT_POLICY_UPDATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CONFLICT_POLICY_UPDATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESERVED_NODE_EXCHANGE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_EXCHANGE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESIZE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESIZE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NAMESPACE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_NAMESPACE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ENDPOINT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_ENDPOINT_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_HSM_CONFIGURATION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_HSM_CONFIGURATION_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RETENTION_PERIOD_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_RETENTION_PERIOD_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == HSM_CONFIGURATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CONFIGURATION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENDPOINTS_PER_AUTHORIZATION_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINTS_PER_AUTHORIZATION_LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_TYPE_UNSUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_TYPE_UNSUPPORTED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INSUFFICIENT_CLUSTER_CAPACITY_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_UPDATE_IN_PROGRESS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_UPDATE_IN_PROGRESS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_AUTHENTICATION_PROFILE_REQUEST_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_AUTHENTICATION_PROFILE_REQUEST_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CUSTOM_DOMAIN_ASSOCIATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CUSTOM_DOMAIN_ASSOCIATION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SUBNET_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SUBNET_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SUBSCRIPTION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SUBSCRIPTION_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_AUTHORIZATION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_AUTHORIZATION_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_PARAMETER_GROUP_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESERVED_NODE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_RESERVED_NODE_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_GRANT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_GRANT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DEPENDENT_SERVICE_UNAVAILABLE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::DEPENDENT_SERVICE_UNAVAILABLE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_HSM_CLIENT_CERTIFICATE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_HSM_CLIENT_CERTIFICATE_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ACCESS_TO_SNAPSHOT_DENIED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ACCESS_TO_SNAPSHOT_DENIED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESOURCE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == AUTHENTICATION_PROFILE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHENTICATION_PROFILE_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_DISABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_DISABLED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == BATCH_MODIFY_CLUSTER_SNAPSHOTS_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::BATCH_MODIFY_CLUSTER_SNAPSHOTS_LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_ON_LATEST_REVISION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_ON_LATEST_REVISION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INTEGRATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INTEGRATION_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SECURITY_GROUP_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == USAGE_LIMIT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::USAGE_LIMIT_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == COPY_TO_REGION_DISABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::COPY_TO_REGION_DISABLED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == NUMBER_OF_NODES_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::NUMBER_OF_NODES_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::S_N_S_NO_AUTHORIZATION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_PARAMETER_GROUP_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESTORE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_RESTORE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::S_N_S_TOPIC_ARN_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_S3_BUCKET_NAME_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_S3_BUCKET_NAME_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == NUMBER_OF_NODES_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::NUMBER_OF_NODES_PER_CLUSTER_LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESERVED_NODE_ALREADY_MIGRATED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_ALREADY_MIGRATED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENDPOINTS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINTS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DEPENDENT_SERVICE_REQUEST_THROTTLING_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::DEPENDENT_SERVICE_REQUEST_THROTTLING_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SUBNET_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SUBNET_GROUP_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNSUPPORTED_OPERATION_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::TAG_LIMIT_EXCEEDED_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SECURITY_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SECURITY_GROUP_STATE_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_GROUP_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == REDSHIFT_IDC_APPLICATION_NOT_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::REDSHIFT_IDC_APPLICATION_NOT_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SOURCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SOURCE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_GROUP_ALREADY_EXISTS_FAULT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESERVED_NODE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_NOT_FOUND_FAULT), RetryableType::NOT_RETRYABLE);
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

} // namespace RedshiftErrorMapper
} // namespace Redshift
} // namespace Aws
