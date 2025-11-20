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
enum class StartServicePeriodTypeSortName { NOT_SET, UpdatedAt };

namespace StartServicePeriodTypeSortNameMapper {
AWS_PARTNERCENTRALCHANNEL_API StartServicePeriodTypeSortName GetStartServicePeriodTypeSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForStartServicePeriodTypeSortName(StartServicePeriodTypeSortName value);
}  // namespace StartServicePeriodTypeSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
