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
enum class ParticipantType { NOT_SET, SENDER, RECEIVER };

namespace ParticipantTypeMapper {
AWS_PARTNERCENTRALCHANNEL_API ParticipantType GetParticipantTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForParticipantType(ParticipantType value);
}  // namespace ParticipantTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
