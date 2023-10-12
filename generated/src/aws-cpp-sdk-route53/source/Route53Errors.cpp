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

static constexpr uint32_t TOO_MANY_KEY_SIGNING_KEYS_HASH = ConstExprHashingUtils::HashString("TooManyKeySigningKeys");
static constexpr uint32_t INVALID_KEY_SIGNING_KEY_NAME_HASH = ConstExprHashingUtils::HashString("InvalidKeySigningKeyName");
static constexpr uint32_t INVALID_DOMAIN_NAME_HASH = ConstExprHashingUtils::HashString("InvalidDomainName");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInput");
static constexpr uint32_t HOSTED_ZONE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("HostedZoneNotFound");
static constexpr uint32_t DELEGATION_SET_ALREADY_REUSABLE_HASH = ConstExprHashingUtils::HashString("DelegationSetAlreadyReusable");
static constexpr uint32_t TRAFFIC_POLICY_INSTANCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("TrafficPolicyInstanceAlreadyExists");
static constexpr uint32_t HOSTED_ZONE_NOT_EMPTY_HASH = ConstExprHashingUtils::HashString("HostedZoneNotEmpty");
static constexpr uint32_t TOO_MANY_TRAFFIC_POLICY_INSTANCES_HASH = ConstExprHashingUtils::HashString("TooManyTrafficPolicyInstances");
static constexpr uint32_t KEY_SIGNING_KEY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("KeySigningKeyAlreadyExists");
static constexpr uint32_t INVALID_CHANGE_BATCH_HASH = ConstExprHashingUtils::HashString("InvalidChangeBatch");
static constexpr uint32_t NO_SUCH_CLOUD_WATCH_LOGS_LOG_GROUP_HASH = ConstExprHashingUtils::HashString("NoSuchCloudWatchLogsLogGroup");
static constexpr uint32_t INVALID_V_P_C_ID_HASH = ConstExprHashingUtils::HashString("InvalidVPCId");
static constexpr uint32_t CIDR_BLOCK_IN_USE_HASH = ConstExprHashingUtils::HashString("CidrBlockInUseException");
static constexpr uint32_t V_P_C_ASSOCIATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("VPCAssociationNotFound");
static constexpr uint32_t CIDR_COLLECTION_VERSION_MISMATCH_HASH = ConstExprHashingUtils::HashString("CidrCollectionVersionMismatchException");
static constexpr uint32_t INVALID_TRAFFIC_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("InvalidTrafficPolicyDocument");
static constexpr uint32_t HOSTED_ZONE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("HostedZoneAlreadyExists");
static constexpr uint32_t LAST_V_P_C_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("LastVPCAssociation");
static constexpr uint32_t DELEGATION_SET_NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("DelegationSetNotAvailable");
static constexpr uint32_t LIMITS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitsExceeded");
static constexpr uint32_t PUBLIC_ZONE_V_P_C_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("PublicZoneVPCAssociation");
static constexpr uint32_t NO_SUCH_CIDR_COLLECTION_HASH = ConstExprHashingUtils::HashString("NoSuchCidrCollectionException");
static constexpr uint32_t NO_SUCH_DELEGATION_SET_HASH = ConstExprHashingUtils::HashString("NoSuchDelegationSet");
static constexpr uint32_t KEY_SIGNING_KEY_IN_PARENT_D_S_RECORD_HASH = ConstExprHashingUtils::HashString("KeySigningKeyInParentDSRecord");
static constexpr uint32_t NO_SUCH_TRAFFIC_POLICY_HASH = ConstExprHashingUtils::HashString("NoSuchTrafficPolicy");
static constexpr uint32_t CONFLICTING_TYPES_HASH = ConstExprHashingUtils::HashString("ConflictingTypes");
static constexpr uint32_t TOO_MANY_TRAFFIC_POLICY_VERSIONS_FOR_CURRENT_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyTrafficPolicyVersionsForCurrentPolicy");
static constexpr uint32_t CIDR_COLLECTION_IN_USE_HASH = ConstExprHashingUtils::HashString("CidrCollectionInUseException");
static constexpr uint32_t NO_SUCH_TRAFFIC_POLICY_INSTANCE_HASH = ConstExprHashingUtils::HashString("NoSuchTrafficPolicyInstance");
static constexpr uint32_t NO_SUCH_QUERY_LOGGING_CONFIG_HASH = ConstExprHashingUtils::HashString("NoSuchQueryLoggingConfig");
static constexpr uint32_t HEALTH_CHECK_VERSION_MISMATCH_HASH = ConstExprHashingUtils::HashString("HealthCheckVersionMismatch");
static constexpr uint32_t CONFLICTING_DOMAIN_EXISTS_HASH = ConstExprHashingUtils::HashString("ConflictingDomainExists");
static constexpr uint32_t INVALID_K_M_S_ARN_HASH = ConstExprHashingUtils::HashString("InvalidKMSArn");
static constexpr uint32_t DELEGATION_SET_NOT_REUSABLE_HASH = ConstExprHashingUtils::HashString("DelegationSetNotReusable");
static constexpr uint32_t INVALID_KEY_SIGNING_KEY_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidKeySigningKeyStatus");
static constexpr uint32_t TOO_MANY_HEALTH_CHECKS_HASH = ConstExprHashingUtils::HashString("TooManyHealthChecks");
static constexpr uint32_t DELEGATION_SET_IN_USE_HASH = ConstExprHashingUtils::HashString("DelegationSetInUse");
static constexpr uint32_t INVALID_SIGNING_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidSigningStatus");
static constexpr uint32_t HEALTH_CHECK_IN_USE_HASH = ConstExprHashingUtils::HashString("HealthCheckInUse");
static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidPaginationToken");
static constexpr uint32_t INSUFFICIENT_CLOUD_WATCH_LOGS_RESOURCE_POLICY_HASH = ConstExprHashingUtils::HashString("InsufficientCloudWatchLogsResourcePolicy");
static constexpr uint32_t HEALTH_CHECK_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("HealthCheckAlreadyExists");
static constexpr uint32_t TOO_MANY_TRAFFIC_POLICIES_HASH = ConstExprHashingUtils::HashString("TooManyTrafficPolicies");
static constexpr uint32_t TRAFFIC_POLICY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("TrafficPolicyAlreadyExists");
static constexpr uint32_t KEY_SIGNING_KEY_WITH_ACTIVE_STATUS_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("KeySigningKeyWithActiveStatusNotFound");
static constexpr uint32_t NO_SUCH_CIDR_LOCATION_HASH = ConstExprHashingUtils::HashString("NoSuchCidrLocationException");
static constexpr uint32_t PRIOR_REQUEST_NOT_COMPLETE_HASH = ConstExprHashingUtils::HashString("PriorRequestNotComplete");
static constexpr uint32_t TOO_MANY_V_P_C_ASSOCIATION_AUTHORIZATIONS_HASH = ConstExprHashingUtils::HashString("TooManyVPCAssociationAuthorizations");
static constexpr uint32_t INCOMPATIBLE_VERSION_HASH = ConstExprHashingUtils::HashString("IncompatibleVersion");
static constexpr uint32_t NO_SUCH_HEALTH_CHECK_HASH = ConstExprHashingUtils::HashString("NoSuchHealthCheck");
static constexpr uint32_t DELEGATION_SET_ALREADY_CREATED_HASH = ConstExprHashingUtils::HashString("DelegationSetAlreadyCreated");
static constexpr uint32_t KEY_SIGNING_KEY_IN_USE_HASH = ConstExprHashingUtils::HashString("KeySigningKeyInUse");
static constexpr uint32_t TRAFFIC_POLICY_IN_USE_HASH = ConstExprHashingUtils::HashString("TrafficPolicyInUse");
static constexpr uint32_t HOSTED_ZONE_PARTIALLY_DELEGATED_HASH = ConstExprHashingUtils::HashString("HostedZonePartiallyDelegated");
static constexpr uint32_t D_N_S_S_E_C_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("DNSSECNotFound");
static constexpr uint32_t TOO_MANY_HOSTED_ZONES_HASH = ConstExprHashingUtils::HashString("TooManyHostedZones");
static constexpr uint32_t NO_SUCH_CHANGE_HASH = ConstExprHashingUtils::HashString("NoSuchChange");
static constexpr uint32_t NO_SUCH_KEY_SIGNING_KEY_HASH = ConstExprHashingUtils::HashString("NoSuchKeySigningKey");
static constexpr uint32_t NO_SUCH_GEO_LOCATION_HASH = ConstExprHashingUtils::HashString("NoSuchGeoLocation");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgument");
static constexpr uint32_t V_P_C_ASSOCIATION_AUTHORIZATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("VPCAssociationAuthorizationNotFound");
static constexpr uint32_t HOSTED_ZONE_NOT_PRIVATE_HASH = ConstExprHashingUtils::HashString("HostedZoneNotPrivate");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModification");
static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NotAuthorizedException");
static constexpr uint32_t CIDR_COLLECTION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("CidrCollectionAlreadyExistsException");
static constexpr uint32_t QUERY_LOGGING_CONFIG_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("QueryLoggingConfigAlreadyExists");
static constexpr uint32_t NO_SUCH_HOSTED_ZONE_HASH = ConstExprHashingUtils::HashString("NoSuchHostedZone");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TOO_MANY_KEY_SIGNING_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_KEY_SIGNING_KEYS), false);
  }
  else if (hashCode == INVALID_KEY_SIGNING_KEY_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_KEY_SIGNING_KEY_NAME), false);
  }
  else if (hashCode == INVALID_DOMAIN_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_DOMAIN_NAME), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_INPUT), false);
  }
  else if (hashCode == HOSTED_ZONE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_NOT_FOUND), false);
  }
  else if (hashCode == DELEGATION_SET_ALREADY_REUSABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_ALREADY_REUSABLE), false);
  }
  else if (hashCode == TRAFFIC_POLICY_INSTANCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TRAFFIC_POLICY_INSTANCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == HOSTED_ZONE_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_NOT_EMPTY), false);
  }
  else if (hashCode == TOO_MANY_TRAFFIC_POLICY_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_TRAFFIC_POLICY_INSTANCES), false);
  }
  else if (hashCode == KEY_SIGNING_KEY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_CHANGE_BATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_CHANGE_BATCH), false);
  }
  else if (hashCode == NO_SUCH_CLOUD_WATCH_LOGS_LOG_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CLOUD_WATCH_LOGS_LOG_GROUP), false);
  }
  else if (hashCode == INVALID_V_P_C_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_V_P_C_ID), false);
  }
  else if (hashCode == CIDR_BLOCK_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_BLOCK_IN_USE), false);
  }
  else if (hashCode == V_P_C_ASSOCIATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::V_P_C_ASSOCIATION_NOT_FOUND), false);
  }
  else if (hashCode == CIDR_COLLECTION_VERSION_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_COLLECTION_VERSION_MISMATCH), false);
  }
  else if (hashCode == INVALID_TRAFFIC_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_TRAFFIC_POLICY_DOCUMENT), false);
  }
  else if (hashCode == HOSTED_ZONE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LAST_V_P_C_ASSOCIATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::LAST_V_P_C_ASSOCIATION), false);
  }
  else if (hashCode == DELEGATION_SET_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_NOT_AVAILABLE), false);
  }
  else if (hashCode == LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::LIMITS_EXCEEDED), false);
  }
  else if (hashCode == PUBLIC_ZONE_V_P_C_ASSOCIATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::PUBLIC_ZONE_V_P_C_ASSOCIATION), false);
  }
  else if (hashCode == NO_SUCH_CIDR_COLLECTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CIDR_COLLECTION), false);
  }
  else if (hashCode == NO_SUCH_DELEGATION_SET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_DELEGATION_SET), false);
  }
  else if (hashCode == KEY_SIGNING_KEY_IN_PARENT_D_S_RECORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_IN_PARENT_D_S_RECORD), false);
  }
  else if (hashCode == NO_SUCH_TRAFFIC_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_TRAFFIC_POLICY), false);
  }
  else if (hashCode == CONFLICTING_TYPES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CONFLICTING_TYPES), false);
  }
  else if (hashCode == TOO_MANY_TRAFFIC_POLICY_VERSIONS_FOR_CURRENT_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_TRAFFIC_POLICY_VERSIONS_FOR_CURRENT_POLICY), false);
  }
  else if (hashCode == CIDR_COLLECTION_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_COLLECTION_IN_USE), false);
  }
  else if (hashCode == NO_SUCH_TRAFFIC_POLICY_INSTANCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_TRAFFIC_POLICY_INSTANCE), false);
  }
  else if (hashCode == NO_SUCH_QUERY_LOGGING_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_QUERY_LOGGING_CONFIG), false);
  }
  else if (hashCode == HEALTH_CHECK_VERSION_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HEALTH_CHECK_VERSION_MISMATCH), false);
  }
  else if (hashCode == CONFLICTING_DOMAIN_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CONFLICTING_DOMAIN_EXISTS), false);
  }
  else if (hashCode == INVALID_K_M_S_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_K_M_S_ARN), false);
  }
  else if (hashCode == DELEGATION_SET_NOT_REUSABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_NOT_REUSABLE), false);
  }
  else if (hashCode == INVALID_KEY_SIGNING_KEY_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_KEY_SIGNING_KEY_STATUS), false);
  }
  else if (hashCode == TOO_MANY_HEALTH_CHECKS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_HEALTH_CHECKS), false);
  }
  else if (hashCode == DELEGATION_SET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_IN_USE), false);
  }
  else if (hashCode == INVALID_SIGNING_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_SIGNING_STATUS), false);
  }
  else if (hashCode == HEALTH_CHECK_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HEALTH_CHECK_IN_USE), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == INSUFFICIENT_CLOUD_WATCH_LOGS_RESOURCE_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INSUFFICIENT_CLOUD_WATCH_LOGS_RESOURCE_POLICY), false);
  }
  else if (hashCode == HEALTH_CHECK_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HEALTH_CHECK_ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_TRAFFIC_POLICIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_TRAFFIC_POLICIES), false);
  }
  else if (hashCode == TRAFFIC_POLICY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TRAFFIC_POLICY_ALREADY_EXISTS), false);
  }
  else if (hashCode == KEY_SIGNING_KEY_WITH_ACTIVE_STATUS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_WITH_ACTIVE_STATUS_NOT_FOUND), false);
  }
  else if (hashCode == NO_SUCH_CIDR_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CIDR_LOCATION), false);
  }
  else if (hashCode == PRIOR_REQUEST_NOT_COMPLETE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::PRIOR_REQUEST_NOT_COMPLETE), true);
  }
  else if (hashCode == TOO_MANY_V_P_C_ASSOCIATION_AUTHORIZATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_V_P_C_ASSOCIATION_AUTHORIZATIONS), false);
  }
  else if (hashCode == INCOMPATIBLE_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INCOMPATIBLE_VERSION), false);
  }
  else if (hashCode == NO_SUCH_HEALTH_CHECK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_HEALTH_CHECK), false);
  }
  else if (hashCode == DELEGATION_SET_ALREADY_CREATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::DELEGATION_SET_ALREADY_CREATED), false);
  }
  else if (hashCode == KEY_SIGNING_KEY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::KEY_SIGNING_KEY_IN_USE), false);
  }
  else if (hashCode == TRAFFIC_POLICY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TRAFFIC_POLICY_IN_USE), false);
  }
  else if (hashCode == HOSTED_ZONE_PARTIALLY_DELEGATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_PARTIALLY_DELEGATED), false);
  }
  else if (hashCode == D_N_S_S_E_C_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::D_N_S_S_E_C_NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_HOSTED_ZONES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::TOO_MANY_HOSTED_ZONES), false);
  }
  else if (hashCode == NO_SUCH_CHANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_CHANGE), false);
  }
  else if (hashCode == NO_SUCH_KEY_SIGNING_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_KEY_SIGNING_KEY), false);
  }
  else if (hashCode == NO_SUCH_GEO_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_GEO_LOCATION), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == V_P_C_ASSOCIATION_AUTHORIZATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::V_P_C_ASSOCIATION_AUTHORIZATION_NOT_FOUND), false);
  }
  else if (hashCode == HOSTED_ZONE_NOT_PRIVATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::HOSTED_ZONE_NOT_PRIVATE), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == CIDR_COLLECTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::CIDR_COLLECTION_ALREADY_EXISTS), false);
  }
  else if (hashCode == QUERY_LOGGING_CONFIG_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::QUERY_LOGGING_CONFIG_ALREADY_EXISTS), false);
  }
  else if (hashCode == NO_SUCH_HOSTED_ZONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53Errors::NO_SUCH_HOSTED_ZONE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53ErrorMapper
} // namespace Route53
} // namespace Aws
