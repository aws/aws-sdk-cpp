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
enum class ChannelContractType { NOT_SET, MANAGED_SERVICES_ATTESTATION };

namespace ChannelContractTypeMapper {
AWS_PARTNERCENTRALCHANNEL_API ChannelContractType GetChannelContractTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForChannelContractType(ChannelContractType value);
}  // namespace ChannelContractTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
