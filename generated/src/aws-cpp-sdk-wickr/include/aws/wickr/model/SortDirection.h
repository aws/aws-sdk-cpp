/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Wickr {
namespace Model {
enum class SortDirection { NOT_SET, ASC, DESC };

namespace SortDirectionMapper {
AWS_WICKR_API SortDirection GetSortDirectionForName(const Aws::String& name);

AWS_WICKR_API Aws::String GetNameForSortDirection(SortDirection value);
}  // namespace SortDirectionMapper
}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
