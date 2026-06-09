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
enum class FindingStatus { NOT_SET, OPEN, RESOLVED, IRRELEVANT };

namespace FindingStatusMapper {
AWS_RESILIENCEHUBV2_API FindingStatus GetFindingStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForFindingStatus(FindingStatus value);
}  // namespace FindingStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
