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
enum class Provider { NOT_SET, DISTRIBUTOR, DISTRIBUTION_SELLER };

namespace ProviderMapper {
AWS_PARTNERCENTRALCHANNEL_API Provider GetProviderForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForProvider(Provider value);
}  // namespace ProviderMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
