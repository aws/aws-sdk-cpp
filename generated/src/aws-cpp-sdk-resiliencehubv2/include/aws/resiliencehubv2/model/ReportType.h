/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class ReportType { NOT_SET, FAILURE_MODE };

namespace ReportTypeMapper {
AWS_RESILIENCEHUBV2_API ReportType GetReportTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForReportType(ReportType value);
}  // namespace ReportTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
