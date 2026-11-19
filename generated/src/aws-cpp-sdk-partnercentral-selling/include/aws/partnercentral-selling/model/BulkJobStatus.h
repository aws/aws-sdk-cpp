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
enum class BulkJobStatus { NOT_SET, SUBMITTED, IN_PROGRESS, COMPLETED, FAILED };

namespace BulkJobStatusMapper {
AWS_PARTNERCENTRALSELLING_API BulkJobStatus GetBulkJobStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForBulkJobStatus(BulkJobStatus value);
}  // namespace BulkJobStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
