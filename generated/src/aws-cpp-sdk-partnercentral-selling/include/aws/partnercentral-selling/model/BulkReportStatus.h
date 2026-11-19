/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class BulkReportStatus { NOT_SET, NOT_STARTED, IN_PROGRESS, AVAILABLE, FAILED, EXPIRED };

namespace BulkReportStatusMapper {
AWS_PARTNERCENTRALSELLING_API BulkReportStatus GetBulkReportStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForBulkReportStatus(BulkReportStatus value);
}  // namespace BulkReportStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
