/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class AttachmentErrorCode
  {
    NOT_SET,
    VPC_NOT_FOUND,
    SUBNET_NOT_FOUND,
    SUBNET_DUPLICATED_IN_AVAILABILITY_ZONE,
    SUBNET_NO_FREE_ADDRESSES,
    SUBNET_UNSUPPORTED_AVAILABILITY_ZONE,
    SUBNET_NO_IPV6_CIDRS,
    VPN_CONNECTION_NOT_FOUND,
    MAXIMUM_NO_ENCAP_LIMIT_EXCEEDED,
    DIRECT_CONNECT_GATEWAY_NOT_FOUND,
    DIRECT_CONNECT_GATEWAY_EXISTING_ATTACHMENTS,
    DIRECT_CONNECT_GATEWAY_NO_PRIVATE_VIF
  };

namespace AttachmentErrorCodeMapper
{
AWS_NETWORKMANAGER_API AttachmentErrorCode GetAttachmentErrorCodeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForAttachmentErrorCode(AttachmentErrorCode value);
} // namespace AttachmentErrorCodeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
