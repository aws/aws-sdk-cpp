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
enum class HandshakeStatus { NOT_SET, PENDING, ACCEPTED, REJECTED, CANCELED, EXPIRED };

namespace HandshakeStatusMapper {
AWS_PARTNERCENTRALCHANNEL_API HandshakeStatus GetHandshakeStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForHandshakeStatus(HandshakeStatus value);
}  // namespace HandshakeStatusMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
