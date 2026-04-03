/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace CloudWatch {
namespace Model {
enum class OTelEnrichmentStatus { NOT_SET, Running, Stopped };

namespace OTelEnrichmentStatusMapper {
AWS_CLOUDWATCH_API OTelEnrichmentStatus GetOTelEnrichmentStatusForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForOTelEnrichmentStatus(OTelEnrichmentStatus value);
}  // namespace OTelEnrichmentStatusMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
