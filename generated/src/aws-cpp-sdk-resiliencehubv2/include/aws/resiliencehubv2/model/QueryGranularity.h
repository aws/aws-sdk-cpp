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
enum class QueryGranularity { NOT_SET, HOURLY, DAILY };

namespace QueryGranularityMapper {
AWS_RESILIENCEHUBV2_API QueryGranularity GetQueryGranularityForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForQueryGranularity(QueryGranularity value);
}  // namespace QueryGranularityMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
