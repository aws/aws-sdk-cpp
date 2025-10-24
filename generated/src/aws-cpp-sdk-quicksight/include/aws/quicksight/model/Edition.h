/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class Edition { NOT_SET, STANDARD, ENTERPRISE, ENTERPRISE_AND_Q };

namespace EditionMapper {
AWS_QUICKSIGHT_API Edition GetEditionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForEdition(Edition value);
}  // namespace EditionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
