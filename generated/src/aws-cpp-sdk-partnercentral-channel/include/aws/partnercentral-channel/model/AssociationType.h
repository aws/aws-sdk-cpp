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
enum class AssociationType { NOT_SET, DOWNSTREAM_SELLER, END_CUSTOMER, INTERNAL };

namespace AssociationTypeMapper {
AWS_PARTNERCENTRALCHANNEL_API AssociationType GetAssociationTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForAssociationType(AssociationType value);
}  // namespace AssociationTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
