/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class Size { NOT_SET, SMALL, MEDIUM, LARGE };

namespace SizeMapper {
AWS_PCS_API Size GetSizeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForSize(Size value);
}  // namespace SizeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
