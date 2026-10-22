/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/AttachmentErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace AttachmentErrorCodeMapper {

static const int VPC_NOT_FOUND_HASH = HashingUtils::HashString("VPC_NOT_FOUND");
static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SUBNET_NOT_FOUND");
static const int SUBNET_DUPLICATED_IN_AVAILABILITY_ZONE_HASH = HashingUtils::HashString("SUBNET_DUPLICATED_IN_AVAILABILITY_ZONE");
static const int SUBNET_NO_FREE_ADDRESSES_HASH = HashingUtils::HashString("SUBNET_NO_FREE_ADDRESSES");
static const int SUBNET_UNSUPPORTED_AVAILABILITY_ZONE_HASH = HashingUtils::HashString("SUBNET_UNSUPPORTED_AVAILABILITY_ZONE");
static const int SUBNET_NO_IPV6_CIDRS_HASH = HashingUtils::HashString("SUBNET_NO_IPV6_CIDRS");
static const int SECURITY_GROUP_REFERENCING_UNSUPPORTED_AVAILABILITY_ZONE_HASH =
    HashingUtils::HashString("SECURITY_GROUP_REFERENCING_UNSUPPORTED_AVAILABILITY_ZONE");
static const int VPN_CONNECTION_NOT_FOUND_HASH = HashingUtils::HashString("VPN_CONNECTION_NOT_FOUND");
static const int MAXIMUM_NO_ENCAP_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("MAXIMUM_NO_ENCAP_LIMIT_EXCEEDED");
static const int DIRECT_CONNECT_GATEWAY_NOT_FOUND_HASH = HashingUtils::HashString("DIRECT_CONNECT_GATEWAY_NOT_FOUND");
static const int DIRECT_CONNECT_GATEWAY_EXISTING_ATTACHMENTS_HASH = HashingUtils::HashString("DIRECT_CONNECT_GATEWAY_EXISTING_ATTACHMENTS");
static const int DIRECT_CONNECT_GATEWAY_NO_PRIVATE_VIF_HASH = HashingUtils::HashString("DIRECT_CONNECT_GATEWAY_NO_PRIVATE_VIF");
static const int VPN_EXISTING_ASSOCIATIONS_HASH = HashingUtils::HashString("VPN_EXISTING_ASSOCIATIONS");
static const int VPN_STATIC_ROUTES_NAT_UNSUPPORTED_HASH = HashingUtils::HashString("VPN_STATIC_ROUTES_NAT_UNSUPPORTED");
static const int VPC_UNSUPPORTED_FEATURES_HASH = HashingUtils::HashString("VPC_UNSUPPORTED_FEATURES");
static const int DIRECT_CONNECT_GATEWAY_TOPOLOGY_RESTRICTIONS_HASH =
    HashingUtils::HashString("DIRECT_CONNECT_GATEWAY_TOPOLOGY_RESTRICTIONS");
static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");

AttachmentErrorCode GetAttachmentErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPC_NOT_FOUND_HASH) {
    return AttachmentErrorCode::VPC_NOT_FOUND;
  } else if (hashCode == SUBNET_NOT_FOUND_HASH) {
    return AttachmentErrorCode::SUBNET_NOT_FOUND;
  } else if (hashCode == SUBNET_DUPLICATED_IN_AVAILABILITY_ZONE_HASH) {
    return AttachmentErrorCode::SUBNET_DUPLICATED_IN_AVAILABILITY_ZONE;
  } else if (hashCode == SUBNET_NO_FREE_ADDRESSES_HASH) {
    return AttachmentErrorCode::SUBNET_NO_FREE_ADDRESSES;
  } else if (hashCode == SUBNET_UNSUPPORTED_AVAILABILITY_ZONE_HASH) {
    return AttachmentErrorCode::SUBNET_UNSUPPORTED_AVAILABILITY_ZONE;
  } else if (hashCode == SUBNET_NO_IPV6_CIDRS_HASH) {
    return AttachmentErrorCode::SUBNET_NO_IPV6_CIDRS;
  } else if (hashCode == SECURITY_GROUP_REFERENCING_UNSUPPORTED_AVAILABILITY_ZONE_HASH) {
    return AttachmentErrorCode::SECURITY_GROUP_REFERENCING_UNSUPPORTED_AVAILABILITY_ZONE;
  } else if (hashCode == VPN_CONNECTION_NOT_FOUND_HASH) {
    return AttachmentErrorCode::VPN_CONNECTION_NOT_FOUND;
  } else if (hashCode == MAXIMUM_NO_ENCAP_LIMIT_EXCEEDED_HASH) {
    return AttachmentErrorCode::MAXIMUM_NO_ENCAP_LIMIT_EXCEEDED;
  } else if (hashCode == DIRECT_CONNECT_GATEWAY_NOT_FOUND_HASH) {
    return AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_NOT_FOUND;
  } else if (hashCode == DIRECT_CONNECT_GATEWAY_EXISTING_ATTACHMENTS_HASH) {
    return AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_EXISTING_ATTACHMENTS;
  } else if (hashCode == DIRECT_CONNECT_GATEWAY_NO_PRIVATE_VIF_HASH) {
    return AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_NO_PRIVATE_VIF;
  } else if (hashCode == VPN_EXISTING_ASSOCIATIONS_HASH) {
    return AttachmentErrorCode::VPN_EXISTING_ASSOCIATIONS;
  } else if (hashCode == VPN_STATIC_ROUTES_NAT_UNSUPPORTED_HASH) {
    return AttachmentErrorCode::VPN_STATIC_ROUTES_NAT_UNSUPPORTED;
  } else if (hashCode == VPC_UNSUPPORTED_FEATURES_HASH) {
    return AttachmentErrorCode::VPC_UNSUPPORTED_FEATURES;
  } else if (hashCode == DIRECT_CONNECT_GATEWAY_TOPOLOGY_RESTRICTIONS_HASH) {
    return AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_TOPOLOGY_RESTRICTIONS;
  } else if (hashCode == CREATION_FAILED_HASH) {
    return AttachmentErrorCode::CREATION_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return AttachmentErrorCode::UPDATE_FAILED;
  } else if (hashCode == DELETION_FAILED_HASH) {
    return AttachmentErrorCode::DELETION_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttachmentErrorCode>(hashCode);
  }

  return AttachmentErrorCode::NOT_SET;
}

Aws::String GetNameForAttachmentErrorCode(AttachmentErrorCode enumValue) {
  switch (enumValue) {
    case AttachmentErrorCode::NOT_SET:
      return {};
    case AttachmentErrorCode::VPC_NOT_FOUND:
      return "VPC_NOT_FOUND";
    case AttachmentErrorCode::SUBNET_NOT_FOUND:
      return "SUBNET_NOT_FOUND";
    case AttachmentErrorCode::SUBNET_DUPLICATED_IN_AVAILABILITY_ZONE:
      return "SUBNET_DUPLICATED_IN_AVAILABILITY_ZONE";
    case AttachmentErrorCode::SUBNET_NO_FREE_ADDRESSES:
      return "SUBNET_NO_FREE_ADDRESSES";
    case AttachmentErrorCode::SUBNET_UNSUPPORTED_AVAILABILITY_ZONE:
      return "SUBNET_UNSUPPORTED_AVAILABILITY_ZONE";
    case AttachmentErrorCode::SUBNET_NO_IPV6_CIDRS:
      return "SUBNET_NO_IPV6_CIDRS";
    case AttachmentErrorCode::SECURITY_GROUP_REFERENCING_UNSUPPORTED_AVAILABILITY_ZONE:
      return "SECURITY_GROUP_REFERENCING_UNSUPPORTED_AVAILABILITY_ZONE";
    case AttachmentErrorCode::VPN_CONNECTION_NOT_FOUND:
      return "VPN_CONNECTION_NOT_FOUND";
    case AttachmentErrorCode::MAXIMUM_NO_ENCAP_LIMIT_EXCEEDED:
      return "MAXIMUM_NO_ENCAP_LIMIT_EXCEEDED";
    case AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_NOT_FOUND:
      return "DIRECT_CONNECT_GATEWAY_NOT_FOUND";
    case AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_EXISTING_ATTACHMENTS:
      return "DIRECT_CONNECT_GATEWAY_EXISTING_ATTACHMENTS";
    case AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_NO_PRIVATE_VIF:
      return "DIRECT_CONNECT_GATEWAY_NO_PRIVATE_VIF";
    case AttachmentErrorCode::VPN_EXISTING_ASSOCIATIONS:
      return "VPN_EXISTING_ASSOCIATIONS";
    case AttachmentErrorCode::VPN_STATIC_ROUTES_NAT_UNSUPPORTED:
      return "VPN_STATIC_ROUTES_NAT_UNSUPPORTED";
    case AttachmentErrorCode::VPC_UNSUPPORTED_FEATURES:
      return "VPC_UNSUPPORTED_FEATURES";
    case AttachmentErrorCode::DIRECT_CONNECT_GATEWAY_TOPOLOGY_RESTRICTIONS:
      return "DIRECT_CONNECT_GATEWAY_TOPOLOGY_RESTRICTIONS";
    case AttachmentErrorCode::CREATION_FAILED:
      return "CREATION_FAILED";
    case AttachmentErrorCode::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case AttachmentErrorCode::DELETION_FAILED:
      return "DELETION_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttachmentErrorCodeMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
