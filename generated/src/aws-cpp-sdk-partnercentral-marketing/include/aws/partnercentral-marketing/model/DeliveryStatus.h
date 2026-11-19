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
enum class DeliveryStatus { NOT_SET, PENDING, DELIVERED, FAILED };

namespace DeliveryStatusMapper {
AWS_PARTNERCENTRALMARKETING_API DeliveryStatus GetDeliveryStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForDeliveryStatus(DeliveryStatus value);
}  // namespace DeliveryStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
