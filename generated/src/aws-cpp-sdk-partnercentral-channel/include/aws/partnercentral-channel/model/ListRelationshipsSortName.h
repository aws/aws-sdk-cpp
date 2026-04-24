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
enum class ListRelationshipsSortName { NOT_SET, UpdatedAt };

namespace ListRelationshipsSortNameMapper {
AWS_PARTNERCENTRALCHANNEL_API ListRelationshipsSortName GetListRelationshipsSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForListRelationshipsSortName(ListRelationshipsSortName value);
}  // namespace ListRelationshipsSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
