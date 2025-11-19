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
enum class ResaleAccountModel { NOT_SET, DISTRIBUTOR, END_CUSTOMER, SOLUTION_PROVIDER };

namespace ResaleAccountModelMapper {
AWS_PARTNERCENTRALCHANNEL_API ResaleAccountModel GetResaleAccountModelForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForResaleAccountModel(ResaleAccountModel value);
}  // namespace ResaleAccountModelMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
