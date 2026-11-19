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
enum class BulkRecordStatus { NOT_SET, SUCCEEDED, FAILED };

namespace BulkRecordStatusMapper {
AWS_PARTNERCENTRALSELLING_API BulkRecordStatus GetBulkRecordStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForBulkRecordStatus(BulkRecordStatus value);
}  // namespace BulkRecordStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
