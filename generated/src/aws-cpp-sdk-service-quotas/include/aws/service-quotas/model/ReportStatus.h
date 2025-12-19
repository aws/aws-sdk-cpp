/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

namespace Aws {
namespace ServiceQuotas {
namespace Model {
enum class ReportStatus { NOT_SET, PENDING, IN_PROGRESS, COMPLETED, FAILED };

namespace ReportStatusMapper {
AWS_SERVICEQUOTAS_API ReportStatus GetReportStatusForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForReportStatus(ReportStatus value);
}  // namespace ReportStatusMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
