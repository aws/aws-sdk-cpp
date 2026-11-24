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
enum class ChannelContractStatus { NOT_SET, PENDING, ACCEPTED, EXPIRED, CANCELED, INACTIVE };

namespace ChannelContractStatusMapper {
AWS_PARTNERCENTRALCHANNEL_API ChannelContractStatus GetChannelContractStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForChannelContractStatus(ChannelContractStatus value);
}  // namespace ChannelContractStatusMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
