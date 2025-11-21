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
enum class SortOrder { NOT_SET, Ascending, Descending };

namespace SortOrderMapper {
AWS_PARTNERCENTRALCHANNEL_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForSortOrder(SortOrder value);
}  // namespace SortOrderMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
