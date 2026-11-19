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
enum class BulkReportType { NOT_SET, FAILED_RECORDS, ALL_RECORDS };

namespace BulkReportTypeMapper {
AWS_PARTNERCENTRALSELLING_API BulkReportType GetBulkReportTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForBulkReportType(BulkReportType value);
}  // namespace BulkReportTypeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
