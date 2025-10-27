/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class FilterType { NOT_SET, INCLUDE, EXCLUDE };

namespace FilterTypeMapper {
AWS_RTBFABRIC_API FilterType GetFilterTypeForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForFilterType(FilterType value);
}  // namespace FilterTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
