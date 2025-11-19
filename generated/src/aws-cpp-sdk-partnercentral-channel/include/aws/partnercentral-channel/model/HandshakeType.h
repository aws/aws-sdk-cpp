/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
enum class HandshakeType { NOT_SET, START_SERVICE_PERIOD, REVOKE_SERVICE_PERIOD, PROGRAM_MANAGEMENT_ACCOUNT };

namespace HandshakeTypeMapper {
AWS_PARTNERCENTRALCHANNEL_API HandshakeType GetHandshakeTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForHandshakeType(HandshakeType value);
}  // namespace HandshakeTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
