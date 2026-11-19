/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class CustomerSegment { NOT_SET, ENTERPRISE, SMB, PUBLIC_SECTOR, ISV };

namespace CustomerSegmentMapper {
AWS_PARTNERCENTRALMARKETING_API CustomerSegment GetCustomerSegmentForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCustomerSegment(CustomerSegment value);
}  // namespace CustomerSegmentMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
