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

static constexpr uint32_t AUTHENTICATION_PROFILE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("AuthenticationProfileNotFoundFault");
static constexpr uint32_t TABLE_RESTORE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("TableRestoreNotFoundFault");
static constexpr uint32_t INVALID_S3_KEY_PREFIX_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidS3KeyPrefixFault");
static constexpr uint32_t SCHEDULED_ACTION_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ScheduledActionAlreadyExists");
static constexpr uint32_t SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionCategoryNotFound");
static constexpr uint32_t HSM_CLIENT_CERTIFICATE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("HsmClientCertificateNotFoundFault");
static constexpr uint32_t INVALID_DATA_SHARE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidDataShareFault");
static constexpr uint32_t CLUSTER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterNotFound");
static constexpr uint32_t INVALID_TAG_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidTagFault");
static constexpr uint32_t CLUSTER_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSnapshotQuotaExceeded");
static constexpr uint32_t RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeQuotaExceeded");
static constexpr uint32_t TABLE_LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("TableLimitExceeded");
static constexpr uint32_t BATCH_DELETE_REQUEST_SIZE_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("BatchDeleteRequestSizeExceeded");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t INVALID_CLUSTER_TRACK_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterTrack");
static constexpr uint32_t INVALID_SNAPSHOT_COPY_GRANT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidSnapshotCopyGrantStateFault");
static constexpr uint32_t INVALID_ELASTIC_IP_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidElasticIpFault");
static constexpr uint32_t ENDPOINT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("EndpointAlreadyExists");
static constexpr uint32_t SNAPSHOT_COPY_GRANT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotCopyGrantAlreadyExistsFault");
static constexpr uint32_t AUTHENTICATION_PROFILE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("AuthenticationProfileQuotaExceededFault");
static constexpr uint32_t SUBNET_ALREADY_IN_USE_HASH = ConstExprHashingUtils::HashString("SubnetAlreadyInUse");
static constexpr uint32_t CUSTOM_CNAME_ASSOCIATION_FAULT_HASH = ConstExprHashingUtils::HashString("CustomCnameAssociationFault");
static constexpr uint32_t SNAPSHOT_SCHEDULE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotScheduleAlreadyExists");
static constexpr uint32_t CLUSTER_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSubnetQuotaExceededFault");
static constexpr uint32_t CLUSTER_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSecurityGroupNotFound");
static constexpr uint32_t INVALID_SCHEDULE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidSchedule");
static constexpr uint32_t ENDPOINT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("EndpointNotFound");
static constexpr uint32_t ENDPOINT_AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("EndpointAuthorizationAlreadyExists");
static constexpr uint32_t INVALID_CLUSTER_SNAPSHOT_SCHEDULE_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterSnapshotScheduleState");
static constexpr uint32_t CLUSTER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterAlreadyExists");
static constexpr uint32_t INVALID_USAGE_LIMIT_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidUsageLimit");
static constexpr uint32_t CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSnapshotNotFound");
static constexpr uint32_t INVALID_CLUSTER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterState");
static constexpr uint32_t INVALID_CLUSTER_SNAPSHOT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterSnapshotState");
static constexpr uint32_t SCHEDULE_DEFINITION_TYPE_UNSUPPORTED_FAULT_HASH = ConstExprHashingUtils::HashString("ScheduleDefinitionTypeUnsupported");
static constexpr uint32_t AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("AuthorizationAlreadyExists");
static constexpr uint32_t SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionAlreadyExist");
static constexpr uint32_t SNAPSHOT_SCHEDULE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotScheduleQuotaExceeded");
static constexpr uint32_t INCOMPATIBLE_ORDERABLE_OPTIONS_HASH = ConstExprHashingUtils::HashString("IncompatibleOrderableOptions");
static constexpr uint32_t SNAPSHOT_COPY_ALREADY_ENABLED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotCopyAlreadyEnabledFault");
static constexpr uint32_t RESERVED_NODE_OFFERING_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeOfferingNotFound");
static constexpr uint32_t UNAUTHORIZED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnauthorizedOperation");
static constexpr uint32_t SUBSCRIPTION_SEVERITY_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionSeverityNotFound");
static constexpr uint32_t SUBSCRIPTION_EVENT_ID_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionEventIdNotFound");
static constexpr uint32_t HSM_CLIENT_CERTIFICATE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("HsmClientCertificateAlreadyExistsFault");
static constexpr uint32_t IN_PROGRESS_TABLE_RESTORE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("InProgressTableRestoreQuotaExceededFault");
static constexpr uint32_t S_N_S_INVALID_TOPIC_FAULT_HASH = ConstExprHashingUtils::HashString("SNSInvalidTopic");
static constexpr uint32_t BUCKET_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("BucketNotFoundFault");
static constexpr uint32_t INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidVPCNetworkStateFault");
static constexpr uint32_t AUTHORIZATION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("AuthorizationNotFound");
static constexpr uint32_t AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("AuthorizationQuotaExceeded");
static constexpr uint32_t HSM_CONFIGURATION_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("HsmConfigurationAlreadyExistsFault");
static constexpr uint32_t UNAUTHORIZED_PARTNER_INTEGRATION_FAULT_HASH = ConstExprHashingUtils::HashString("UnauthorizedPartnerIntegration");
static constexpr uint32_t RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeAlreadyExists");
static constexpr uint32_t HSM_CLIENT_CERTIFICATE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("HsmClientCertificateQuotaExceededFault");
static constexpr uint32_t HSM_CONFIGURATION_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("HsmConfigurationQuotaExceededFault");
static constexpr uint32_t ENDPOINT_AUTHORIZATIONS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("EndpointAuthorizationsPerClusterLimitExceeded");
static constexpr uint32_t SUBSCRIPTION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SubscriptionNotFound");
static constexpr uint32_t CLUSTER_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSubnetGroupQuotaExceeded");
static constexpr uint32_t INVALID_SCHEDULED_ACTION_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidScheduledAction");
static constexpr uint32_t SNAPSHOT_COPY_ALREADY_DISABLED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotCopyAlreadyDisabledFault");
static constexpr uint32_t UNKNOWN_SNAPSHOT_COPY_REGION_FAULT_HASH = ConstExprHashingUtils::HashString("UnknownSnapshotCopyRegionFault");
static constexpr uint32_t SNAPSHOT_SCHEDULE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotScheduleNotFound");
static constexpr uint32_t USAGE_LIMIT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("UsageLimitAlreadyExists");
static constexpr uint32_t INVALID_TABLE_RESTORE_ARGUMENT_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidTableRestoreArgument");
static constexpr uint32_t PARTNER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("PartnerNotFound");
static constexpr uint32_t ENDPOINT_AUTHORIZATION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("EndpointAuthorizationNotFound");
static constexpr uint32_t ACCESS_TO_CLUSTER_DENIED_FAULT_HASH = ConstExprHashingUtils::HashString("AccessToClusterDenied");
static constexpr uint32_t UNSUPPORTED_OPTION_FAULT_HASH = ConstExprHashingUtils::HashString("UnsupportedOptionFault");
static constexpr uint32_t SNAPSHOT_COPY_GRANT_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotCopyGrantQuotaExceededFault");
static constexpr uint32_t INSUFFICIENT_S3_BUCKET_POLICY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientS3BucketPolicyFault");
static constexpr uint32_t RESERVED_NODE_EXCHANGE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeExchangeNotFond");
static constexpr uint32_t RESIZE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ResizeNotFound");
static constexpr uint32_t INVALID_NAMESPACE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidNamespaceFault");
static constexpr uint32_t INVALID_ENDPOINT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidEndpointState");
static constexpr uint32_t INVALID_HSM_CONFIGURATION_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidHsmConfigurationStateFault");
static constexpr uint32_t INVALID_RETENTION_PERIOD_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidRetentionPeriodFault");
static constexpr uint32_t HSM_CONFIGURATION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("HsmConfigurationNotFoundFault");
static constexpr uint32_t ENDPOINTS_PER_AUTHORIZATION_LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("EndpointsPerAuthorizationLimitExceeded");
static constexpr uint32_t SCHEDULED_ACTION_TYPE_UNSUPPORTED_FAULT_HASH = ConstExprHashingUtils::HashString("ScheduledActionTypeUnsupported");
static constexpr uint32_t CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterQuotaExceeded");
static constexpr uint32_t CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSnapshotAlreadyExists");
static constexpr uint32_t INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientClusterCapacity");
static constexpr uint32_t SNAPSHOT_SCHEDULE_UPDATE_IN_PROGRESS_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotScheduleUpdateInProgress");
static constexpr uint32_t EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("EventSubscriptionQuotaExceeded");
static constexpr uint32_t INVALID_AUTHENTICATION_PROFILE_REQUEST_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidAuthenticationProfileRequestFault");
static constexpr uint32_t SCHEDULED_ACTION_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ScheduledActionQuotaExceeded");
static constexpr uint32_t CUSTOM_DOMAIN_ASSOCIATION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("CustomDomainAssociationNotFoundFault");
static constexpr uint32_t SCHEDULED_ACTION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ScheduledActionNotFound");
static constexpr uint32_t INVALID_CLUSTER_SUBNET_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterSubnetStateFault");
static constexpr uint32_t INVALID_SUBSCRIPTION_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidSubscriptionStateFault");
static constexpr uint32_t INVALID_AUTHORIZATION_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidAuthorizationState");
static constexpr uint32_t CLUSTER_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterParameterGroupAlreadyExists");
static constexpr uint32_t INVALID_RESERVED_NODE_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidReservedNodeState");
static constexpr uint32_t CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterParameterGroupNotFound");
static constexpr uint32_t SNAPSHOT_COPY_GRANT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotCopyGrantNotFoundFault");
static constexpr uint32_t DEPENDENT_SERVICE_UNAVAILABLE_FAULT_HASH = ConstExprHashingUtils::HashString("DependentServiceUnavailableFault");
static constexpr uint32_t INVALID_HSM_CLIENT_CERTIFICATE_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidHsmClientCertificateStateFault");
static constexpr uint32_t ACCESS_TO_SNAPSHOT_DENIED_FAULT_HASH = ConstExprHashingUtils::HashString("AccessToSnapshotDenied");
static constexpr uint32_t RESOURCE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundFault");
static constexpr uint32_t AUTHENTICATION_PROFILE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("AuthenticationProfileAlreadyExistsFault");
static constexpr uint32_t SNAPSHOT_COPY_DISABLED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotCopyDisabledFault");
static constexpr uint32_t BATCH_MODIFY_CLUSTER_SNAPSHOTS_LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("BatchModifyClusterSnapshotsLimitExceededFault");
static constexpr uint32_t CLUSTER_ON_LATEST_REVISION_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterOnLatestRevision");
static constexpr uint32_t CLUSTER_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSecurityGroupAlreadyExists");
static constexpr uint32_t USAGE_LIMIT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("UsageLimitNotFound");
static constexpr uint32_t CLUSTER_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("QuotaExceeded.ClusterSecurityGroup");
static constexpr uint32_t COPY_TO_REGION_DISABLED_FAULT_HASH = ConstExprHashingUtils::HashString("CopyToRegionDisabledFault");
static constexpr uint32_t NUMBER_OF_NODES_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NumberOfNodesQuotaExceeded");
static constexpr uint32_t S_N_S_NO_AUTHORIZATION_FAULT_HASH = ConstExprHashingUtils::HashString("SNSNoAuthorization");
static constexpr uint32_t INVALID_CLUSTER_PARAMETER_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterParameterGroupState");
static constexpr uint32_t INVALID_RESTORE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidRestore");
static constexpr uint32_t LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("LimitExceededFault");
static constexpr uint32_t S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SNSTopicArnNotFound");
static constexpr uint32_t INVALID_S3_BUCKET_NAME_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidS3BucketNameFault");
static constexpr uint32_t NUMBER_OF_NODES_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NumberOfNodesPerClusterLimitExceeded");
static constexpr uint32_t CLUSTER_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterParameterGroupQuotaExceeded");
static constexpr uint32_t RESERVED_NODE_ALREADY_MIGRATED_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeAlreadyMigrated");
static constexpr uint32_t ENDPOINTS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("EndpointsPerClusterLimitExceeded");
static constexpr uint32_t DEPENDENT_SERVICE_REQUEST_THROTTLING_FAULT_HASH = ConstExprHashingUtils::HashString("DependentServiceRequestThrottlingFault");
static constexpr uint32_t INVALID_CLUSTER_SUBNET_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterSubnetGroupStateFault");
static constexpr uint32_t UNSUPPORTED_OPERATION_FAULT_HASH = ConstExprHashingUtils::HashString("UnsupportedOperation");
static constexpr uint32_t TAG_LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("TagLimitExceededFault");
static constexpr uint32_t INVALID_CLUSTER_SECURITY_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidClusterSecurityGroupState");
static constexpr uint32_t CLUSTER_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSubnetGroupNotFoundFault");
static constexpr uint32_t SOURCE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SourceNotFound");
static constexpr uint32_t CLUSTER_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterSubnetGroupAlreadyExists");
static constexpr uint32_t RESERVED_NODE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedNodeNotFound");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(uint32_t hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == AUTHENTICATION_PROFILE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHENTICATION_PROFILE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == TABLE_RESTORE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::TABLE_RESTORE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_S3_KEY_PREFIX_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_S3_KEY_PREFIX_FAULT), false);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == HSM_CLIENT_CERTIFICATE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CLIENT_CERTIFICATE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_DATA_SHARE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_DATA_SHARE_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_TAG_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_TAG_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_NODE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == TABLE_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::TABLE_LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == BATCH_DELETE_REQUEST_SIZE_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::BATCH_DELETE_REQUEST_SIZE_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SUBNET), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_TRACK_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_TRACK_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT_COPY_GRANT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SNAPSHOT_COPY_GRANT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_ELASTIC_IP_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_ELASTIC_IP_FAULT), false);
    return true;
  }
  else if (hashCode == ENDPOINT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_GRANT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_GRANT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHENTICATION_PROFILE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHENTICATION_PROFILE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBNET_ALREADY_IN_USE), false);
    return true;
  }
  else if (hashCode == CUSTOM_CNAME_ASSOCIATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CUSTOM_CNAME_ASSOCIATION_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SECURITY_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SECURITY_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_SCHEDULE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SCHEDULE_FAULT), false);
    return true;
  }
  else if (hashCode == ENDPOINT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == ENDPOINT_AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_AUTHORIZATION_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SNAPSHOT_SCHEDULE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SNAPSHOT_SCHEDULE_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_USAGE_LIMIT_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_USAGE_LIMIT_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SNAPSHOT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SNAPSHOT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SNAPSHOT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == SCHEDULE_DEFINITION_TYPE_UNSUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULE_DEFINITION_TYPE_UNSUPPORTED_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHORIZATION_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_ALREADY_EXIST_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INCOMPATIBLE_ORDERABLE_OPTIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INCOMPATIBLE_ORDERABLE_OPTIONS), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_ALREADY_ENABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_ALREADY_ENABLED_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_NODE_OFFERING_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_OFFERING_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == UNAUTHORIZED_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNAUTHORIZED_OPERATION), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_SEVERITY_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_SEVERITY_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_EVENT_ID_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_EVENT_ID_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == HSM_CLIENT_CERTIFICATE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CLIENT_CERTIFICATE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == IN_PROGRESS_TABLE_RESTORE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::IN_PROGRESS_TABLE_RESTORE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::S_N_S_INVALID_TOPIC_FAULT), false);
    return true;
  }
  else if (hashCode == BUCKET_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::BUCKET_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHORIZATION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHORIZATION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == HSM_CONFIGURATION_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CONFIGURATION_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == UNAUTHORIZED_PARTNER_INTEGRATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNAUTHORIZED_PARTNER_INTEGRATION_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_NODE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == HSM_CLIENT_CERTIFICATE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CLIENT_CERTIFICATE_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == HSM_CONFIGURATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CONFIGURATION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == ENDPOINT_AUTHORIZATIONS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_AUTHORIZATIONS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == SUBSCRIPTION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SUBSCRIPTION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_SCHEDULED_ACTION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SCHEDULED_ACTION_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_ALREADY_DISABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_ALREADY_DISABLED_FAULT), false);
    return true;
  }
  else if (hashCode == UNKNOWN_SNAPSHOT_COPY_REGION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNKNOWN_SNAPSHOT_COPY_REGION_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == USAGE_LIMIT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::USAGE_LIMIT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_TABLE_RESTORE_ARGUMENT_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_TABLE_RESTORE_ARGUMENT_FAULT), false);
    return true;
  }
  else if (hashCode == PARTNER_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::PARTNER_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == ENDPOINT_AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINT_AUTHORIZATION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == ACCESS_TO_CLUSTER_DENIED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ACCESS_TO_CLUSTER_DENIED_FAULT), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPTION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNSUPPORTED_OPTION_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_GRANT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_GRANT_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_S3_BUCKET_POLICY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INSUFFICIENT_S3_BUCKET_POLICY_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_NODE_EXCHANGE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_EXCHANGE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == RESIZE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESIZE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_NAMESPACE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_NAMESPACE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_ENDPOINT_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_ENDPOINT_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_HSM_CONFIGURATION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_HSM_CONFIGURATION_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_RETENTION_PERIOD_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_RETENTION_PERIOD_FAULT), false);
    return true;
  }
  else if (hashCode == HSM_CONFIGURATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::HSM_CONFIGURATION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == ENDPOINTS_PER_AUTHORIZATION_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINTS_PER_AUTHORIZATION_LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_TYPE_UNSUPPORTED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_TYPE_UNSUPPORTED_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INSUFFICIENT_CLUSTER_CAPACITY_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INSUFFICIENT_CLUSTER_CAPACITY_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_SCHEDULE_UPDATE_IN_PROGRESS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_SCHEDULE_UPDATE_IN_PROGRESS_FAULT), false);
    return true;
  }
  else if (hashCode == EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_AUTHENTICATION_PROFILE_REQUEST_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_AUTHENTICATION_PROFILE_REQUEST_FAULT), false);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == CUSTOM_DOMAIN_ASSOCIATION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CUSTOM_DOMAIN_ASSOCIATION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == SCHEDULED_ACTION_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SCHEDULED_ACTION_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SUBNET_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SUBNET_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_SUBSCRIPTION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_SUBSCRIPTION_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_AUTHORIZATION_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_AUTHORIZATION_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_PARAMETER_GROUP_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_RESERVED_NODE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_RESERVED_NODE_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_GRANT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_GRANT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == DEPENDENT_SERVICE_UNAVAILABLE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::DEPENDENT_SERVICE_UNAVAILABLE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_HSM_CLIENT_CERTIFICATE_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_HSM_CLIENT_CERTIFICATE_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == ACCESS_TO_SNAPSHOT_DENIED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ACCESS_TO_SNAPSHOT_DENIED_FAULT), false);
    return true;
  }
  else if (hashCode == RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESOURCE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == AUTHENTICATION_PROFILE_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::AUTHENTICATION_PROFILE_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == SNAPSHOT_COPY_DISABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SNAPSHOT_COPY_DISABLED_FAULT), false);
    return true;
  }
  else if (hashCode == BATCH_MODIFY_CLUSTER_SNAPSHOTS_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::BATCH_MODIFY_CLUSTER_SNAPSHOTS_LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_ON_LATEST_REVISION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_ON_LATEST_REVISION_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SECURITY_GROUP_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == USAGE_LIMIT_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::USAGE_LIMIT_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == COPY_TO_REGION_DISABLED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::COPY_TO_REGION_DISABLED_FAULT), false);
    return true;
  }
  else if (hashCode == NUMBER_OF_NODES_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::NUMBER_OF_NODES_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::S_N_S_NO_AUTHORIZATION_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_PARAMETER_GROUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_RESTORE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_RESTORE_FAULT), false);
    return true;
  }
  else if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::S_N_S_TOPIC_ARN_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_S3_BUCKET_NAME_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_S3_BUCKET_NAME_FAULT), false);
    return true;
  }
  else if (hashCode == NUMBER_OF_NODES_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::NUMBER_OF_NODES_PER_CLUSTER_LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_NODE_ALREADY_MIGRATED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_ALREADY_MIGRATED_FAULT), false);
    return true;
  }
  else if (hashCode == ENDPOINTS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::ENDPOINTS_PER_CLUSTER_LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == DEPENDENT_SERVICE_REQUEST_THROTTLING_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::DEPENDENT_SERVICE_REQUEST_THROTTLING_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SUBNET_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SUBNET_GROUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATION_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::UNSUPPORTED_OPERATION_FAULT), false);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(uint32_t hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == TAG_LIMIT_EXCEEDED_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::TAG_LIMIT_EXCEEDED_FAULT), false);
    return true;
  }
  else if (hashCode == INVALID_CLUSTER_SECURITY_GROUP_STATE_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::INVALID_CLUSTER_SECURITY_GROUP_STATE_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_GROUP_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == SOURCE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::SOURCE_NOT_FOUND_FAULT), false);
    return true;
  }
  else if (hashCode == CLUSTER_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::CLUSTER_SUBNET_GROUP_ALREADY_EXISTS_FAULT), false);
    return true;
  }
  else if (hashCode == RESERVED_NODE_NOT_FOUND_FAULT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftErrors::RESERVED_NODE_NOT_FOUND_FAULT), false);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);
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
