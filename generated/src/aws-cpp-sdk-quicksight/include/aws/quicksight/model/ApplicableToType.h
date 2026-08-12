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
enum class ApplicableToType { NOT_SET, GROUP };

namespace ApplicableToTypeMapper {
AWS_QUICKSIGHT_API ApplicableToType GetApplicableToTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForApplicableToType(ApplicableToType value);
}  // namespace ApplicableToTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
