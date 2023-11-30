/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/Route53Errors.h>
#include <aws/route53/model/InvalidChangeBatch.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Route53;
using namespace Aws::Route53::Model;

namespace Aws
{
namespace Route53
{
template<> AWS_ROUTE53_API InvalidChangeBatch Route53Error::GetModeledError()
{
  assert(this->GetErrorType() == Route53Errors::INVALID_CHANGE_BATCH);
  return InvalidChangeBatch(this->GetXmlPayload().GetRootElement());
}

namespace Route53ErrorMapper
{

static const int TOO_MANY_KEY_SIGNING_KEYS_HASH = HashingUtils::HashString("TooManyKeySigningKeys");
static const int INVALID_KEY_SIGNING_KEY_NAME_HASH = HashingUtils::HashString("InvalidKeySigningKeyName");
static const int INVALID_DOMAIN_NAME_HASH = HashingUtils::HashString("InvalidDomainName");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInput");
static const int HOSTED_ZONE_NOT_FOUND_HASH = HashingUtils::HashString("HostedZoneNotFound");
static const int DELEGATION_SET_ALREADY_REUSABLE_HASH = HashingUtils::HashString("DelegationSetAlreadyReusable");
static const int TRAFFIC_POLICY_INSTANCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("TrafficPolicyInstanceAlreadyExists");
static const int HOSTED_ZONE_NOT_EMPTY_HASH = HashingUtils::HashString("HostedZoneNotEmpty");
static const int TOO_MANY_TRAFFIC_POLICY_INSTANCES_HASH = HashingUtils::HashString("TooManyTrafficPolicyInstances");
static const int KEY_SIGNING_KEY_ALREADY_EXISTS_HASH = HashingUtils::HashString("KeySigningKeyAlreadyExists");
static const int INVALID_CHANGE_BATCH_HASH = HashingUtils::HashString("InvalidChangeBatch");
static const int NO_SUCH_CLOUD_WATCH_LOGS_LOG_GROUP_HASH = HashingUtils::HashString("NoSuchCloudWatchLogsLogGroup");
static const int INVALID_V_P_C_ID_HASH = HashingUtils::HashString("InvalidVPCId");
static const int CIDR_BLOCK_IN_USE_HASH = HashingUtils::HashString("CidrBlockInUseException");
static const int V_P_C_ASSOCIATION_NOT_FOUND_HASH = HashingUtils::HashString("VPCAssociationNotFound");
static const int CIDR_COLLECTION_VERSION_MISMATCH_HASH = HashingUtils::HashString("CidrCollectionVersionMismatchException");
static const int INVALID_TRAFFIC_POLICY_DOCUMENT_HASH = HashingUtils::HashString("InvalidTrafficPolicyDocument");
static const int HOSTED_ZONE_ALREADY_EXISTS_HASH = HashingUtils::HashString("HostedZoneAlreadyExists");
static const int LAST_V_P_C_ASSOCIATION_HASH = HashingUtils::HashString("LastVPCAssociation");
static const int DELEGATION_SET_NOT_AVAILABLE_HASH = HashingUtils::HashString("DelegationSetNotAvailable");
static const int LIMITS_EXCEEDED_HASH = HashingUtils::HashString("LimitsExceeded");
static const int PUBLIC_ZONE_V_P_C_ASSOCIATION_HASH = HashingUtils::HashString("PublicZoneVPCAssociation");
static const int NO_SUCH_CIDR_COLLECTION_HASH = HashingUtils::HashString("NoSuchCidrCollectionException");
static const int NO_SUCH_DELEGATION_SET_HASH = HashingUtils::HashString("NoSuchDelegationSet");
static const int KEY_SIGNING_KEY_IN_PARENT_D_S_RECORD_HASH = HashingUtils::HashString("KeySigningKeyInParentDSRecord");
static const int NO_SUCH_TRAFFIC_POLICY_HASH = HashingUtils::HashString("NoSuchTrafficPolicy");
static const int CONFLICTING_TYPES_HASH = HashingUtils::HashString("ConflictingTypes");
static const int TOO_MANY_TRAFFIC_POLICY_VERSIONS_FOR_CURRENT_POLICY_HASH = HashingUtils::HashString("TooManyTrafficPolicyVersionsForCurrentPolicy");
static const int CIDR_COLLECTION_IN_USE_HASH = HashingUtils::HashString("CidrCollectionInUseException");
static const int NO_SUCH_TRAFFIC_POLICY_INSTANCE_HASH = HashingUtils::HashString("NoSuchTrafficPolicyInstance");
static const int NO_SUCH_QUERY_LOGGING_CONFIG_HASH = HashingUtils::HashString("NoSuchQueryLoggingConfig");
static const int HEALTH_CHECK_VERSION_MISMATCH_HASH = HashingUtils::HashString("HealthCheckVersionMismatch");
static const int CONFLICTING_DOMAIN_EXISTS_HASH = HashingUtils::HashString("ConflictingDomainExists");
static const int INVALID_K_M_S_ARN_HASH = HashingUtils::HashString("InvalidKMSArn");
static const int DELEGATION_SET_NOT_REUSABLE_HASH = HashingUtils::HashString("DelegationSetNotReusable");
static const int INVALID_KEY_SIGNING_KEY_STATUS_HASH = HashingUtils::HashString("InvalidKeySigningKeyStatus");
static const int TOO_MANY_HEALTH_CHECKS_HASH = HashingUtils::HashString("TooManyHealthChecks");
static const int DELEGATION_SET_IN_USE_HASH = HashingUtils::HashString("DelegationSetInUse");
static const int INVALID_SIGNING_STATUS_HASH = HashingUtils::HashString("InvalidSigningStatus");
static const int HEALTH_CHECK_IN_USE_HASH = HashingUtils::HashString("HealthCheckInUse");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationToken");
static const int INSUFFICIENT_CLOUD_WATCH_LOGS_RESOURCE_POLICY_HASH = HashingUtils::HashString("InsufficientCloudWatchLogsResourcePolicy");
static const int HEALTH_CHECK_ALREADY_EXISTS_HASH = HashingUtils::HashString("HealthCheckAlreadyExists");
static const int TOO_MANY_TRAFFIC_POLICIES_HASH = HashingUtils::HashString("TooManyTrafficPolicies");
static const int TRAFFIC_POLICY_ALREADY_EXISTS_HASH = HashingUtils::HashString("TrafficPolicyAlreadyExists");
static const int KEY_SIGNING_KEY_WITH_ACTIVE_STATUS_NOT_FOUND_HASH = HashingUtils::HashString("KeySigningKeyWithActiveStatusNotFound");
static const int NO_SUCH_CIDR_LOCATION_HASH = HashingUtils::HashString("NoSuchCidrLocationException");
static const int PRIOR_REQUEST_NOT_COMPLETE_HASH = HashingUtils::HashString("PriorRequestNotComplete");
static const int TOO_MANY_V_P_C_ASSOCIATION_AUTHORIZATIONS_HASH = HashingUtils::HashString("TooManyVPCAssociationAuthorizations");
static const int INCOMPATIBLE_VERSION_HASH = HashingUtils::HashString("IncompatibleVersion");
static const int NO_SUCH_HEALTH_CHECK_HASH = HashingUtils::HashString("NoSuchHealthCheck");
static const int DELEGATION_SET_ALREADY_CREATED_HASH = HashingUtils::HashString("DelegationSetAlreadyCreated");
static const int KEY_SIGNING_KEY_IN_USE_HASH = HashingUtils::HashString("KeySigningKeyInUse");
static const int TRAFFIC_POLICY_IN_USE_HASH = HashingUtils::HashString("TrafficPolicyInUse");
static const int HOSTED_ZONE_PARTIALLY_DELEGATED_HASH = HashingUtils::HashString("HostedZonePartiallyDelegated");
static const int D_N_S_S_E_C_NOT_FOUND_HASH = HashingUtils::HashString("DNSSECNotFound");
static const int TOO_MANY_HOSTED_ZONES_HASH = HashingUtils::HashString("TooManyHostedZones");
static const int NO_SUCH_CHANGE_HASH = HashingUtils::HashString("NoSuchChange");
static const int NO_SUCH_KEY_SIGNING_KEY_HASH = HashingUtils::HashString("NoSuchKeySigningKey");
static const int NO_SUCH_GEO_LOCATION_HASH = HashingUtils::HashString("NoSuchGeoLocation");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgument");
static const int V_P_C_ASSOCIATION_AUTHORIZATION_NOT_FOUND_HASH = HashingUtils::HashString("VPCAssociationAuthorizationNotFound");
static const int HOSTED_ZONE_NOT_PRIVATE_HASH = HashingUtils::HashString("HostedZoneNotPrivate");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModification");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedException");
static const int CIDR_COLLECTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("CidrCollectionAlreadyExistsException");
static const int QUERY_LOGGING_CONFIG_ALREADY_EXISTS_HASH = HashingUtils::HashString("QueryLoggingConfigAlreadyExists");
static const int NO_SUCH_HOSTED_ZONE_HASH = HashingUtils::HashString("NoSuchHostedZone");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TOO_MANY_KEY_SIGNING_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_KEY_SIGNING_KEYS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_KEY_SIGNING_KEY_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_KEY_SIGNING_KEY_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_DOMAIN_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_DOMAIN_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HOSTED_ZONE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELEGATION_SET_ALREADY_REUSABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_ALREADY_REUSABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRAFFIC_POLICY_INSTANCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TRAFFIC_POLICY_INSTANCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HOSTED_ZONE_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_NOT_EMPTY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TRAFFIC_POLICY_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_TRAFFIC_POLICY_INSTANCES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KEY_SIGNING_KEY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CHANGE_BATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_CHANGE_BATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_CLOUD_WATCH_LOGS_LOG_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CLOUD_WATCH_LOGS_LOG_GROUP), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_V_P_C_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_V_P_C_ID), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CIDR_BLOCK_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_BLOCK_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == V_P_C_ASSOCIATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::V_P_C_ASSOCIATION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CIDR_COLLECTION_VERSION_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_COLLECTION_VERSION_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_TRAFFIC_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_TRAFFIC_POLICY_DOCUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HOSTED_ZONE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LAST_V_P_C_ASSOCIATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::LAST_V_P_C_ASSOCIATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELEGATION_SET_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_NOT_AVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::LIMITS_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PUBLIC_ZONE_V_P_C_ASSOCIATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::PUBLIC_ZONE_V_P_C_ASSOCIATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_CIDR_COLLECTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CIDR_COLLECTION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_DELEGATION_SET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_DELEGATION_SET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KEY_SIGNING_KEY_IN_PARENT_D_S_RECORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_IN_PARENT_D_S_RECORD), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_TRAFFIC_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_TRAFFIC_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICTING_TYPES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CONFLICTING_TYPES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TRAFFIC_POLICY_VERSIONS_FOR_CURRENT_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_TRAFFIC_POLICY_VERSIONS_FOR_CURRENT_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CIDR_COLLECTION_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_COLLECTION_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_TRAFFIC_POLICY_INSTANCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_TRAFFIC_POLICY_INSTANCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_QUERY_LOGGING_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_QUERY_LOGGING_CONFIG), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HEALTH_CHECK_VERSION_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HEALTH_CHECK_VERSION_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICTING_DOMAIN_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CONFLICTING_DOMAIN_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_K_M_S_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_K_M_S_ARN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELEGATION_SET_NOT_REUSABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_NOT_REUSABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_KEY_SIGNING_KEY_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_KEY_SIGNING_KEY_STATUS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_HEALTH_CHECKS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_HEALTH_CHECKS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELEGATION_SET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SIGNING_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_SIGNING_STATUS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HEALTH_CHECK_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HEALTH_CHECK_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_PAGINATION_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_CLOUD_WATCH_LOGS_RESOURCE_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INSUFFICIENT_CLOUD_WATCH_LOGS_RESOURCE_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HEALTH_CHECK_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HEALTH_CHECK_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TRAFFIC_POLICIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_TRAFFIC_POLICIES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRAFFIC_POLICY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TRAFFIC_POLICY_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KEY_SIGNING_KEY_WITH_ACTIVE_STATUS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_WITH_ACTIVE_STATUS_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_CIDR_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CIDR_LOCATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PRIOR_REQUEST_NOT_COMPLETE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::PRIOR_REQUEST_NOT_COMPLETE), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_V_P_C_ASSOCIATION_AUTHORIZATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_V_P_C_ASSOCIATION_AUTHORIZATIONS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INCOMPATIBLE_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INCOMPATIBLE_VERSION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_HEALTH_CHECK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_HEALTH_CHECK), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELEGATION_SET_ALREADY_CREATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_ALREADY_CREATED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KEY_SIGNING_KEY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRAFFIC_POLICY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TRAFFIC_POLICY_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HOSTED_ZONE_PARTIALLY_DELEGATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_PARTIALLY_DELEGATED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == D_N_S_S_E_C_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::D_N_S_S_E_C_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_HOSTED_ZONES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_HOSTED_ZONES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_CHANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CHANGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_KEY_SIGNING_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_KEY_SIGNING_KEY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_GEO_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_GEO_LOCATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == V_P_C_ASSOCIATION_AUTHORIZATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::V_P_C_ASSOCIATION_AUTHORIZATION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == HOSTED_ZONE_NOT_PRIVATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_NOT_PRIVATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NOT_AUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CIDR_COLLECTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_COLLECTION_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == QUERY_LOGGING_CONFIG_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::QUERY_LOGGING_CONFIG_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_HOSTED_ZONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_HOSTED_ZONE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53ErrorMapper
} // namespace Route53
} // namespace Aws
