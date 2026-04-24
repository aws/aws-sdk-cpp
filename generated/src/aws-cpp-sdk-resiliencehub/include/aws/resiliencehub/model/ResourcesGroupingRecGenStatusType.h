/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class ResourcesGroupingRecGenStatusType { NOT_SET, Pending, InProgress, Failed, Success };

namespace ResourcesGroupingRecGenStatusTypeMapper {
AWS_RESILIENCEHUB_API ResourcesGroupingRecGenStatusType GetResourcesGroupingRecGenStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResourcesGroupingRecGenStatusType(ResourcesGroupingRecGenStatusType value);
}  // namespace ResourcesGroupingRecGenStatusTypeMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
