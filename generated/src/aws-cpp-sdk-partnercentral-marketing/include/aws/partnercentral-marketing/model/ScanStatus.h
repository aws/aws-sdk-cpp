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
enum class ScanStatus { NOT_SET, PENDING, CLEAN, REJECTED };

namespace ScanStatusMapper {
AWS_PARTNERCENTRALMARKETING_API ScanStatus GetScanStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForScanStatus(ScanStatus value);
}  // namespace ScanStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
