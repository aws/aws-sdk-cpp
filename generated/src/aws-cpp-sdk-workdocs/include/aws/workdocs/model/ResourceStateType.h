/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/WorkDocs_EXPORTS.h>

namespace Aws {
namespace WorkDocs {
namespace Model {
enum class ResourceStateType { NOT_SET, ACTIVE, RESTORING, RECYCLING, RECYCLED };

namespace ResourceStateTypeMapper {
AWS_WORKDOCS_API ResourceStateType GetResourceStateTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForResourceStateType(ResourceStateType value);
}  // namespace ResourceStateTypeMapper
}  // namespace Model
}  // namespace WorkDocs
}  // namespace Aws
