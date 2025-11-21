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
enum class Sector { NOT_SET, COMMERCIAL, GOVERNMENT, GOVERNMENT_EXCEPTION };

namespace SectorMapper {
AWS_PARTNERCENTRALCHANNEL_API Sector GetSectorForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForSector(Sector value);
}  // namespace SectorMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
