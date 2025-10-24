﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing/Pricing_EXPORTS.h>

namespace Aws {
namespace Pricing {
namespace Model {
enum class FilterType { NOT_SET, TERM_MATCH, EQUALS, CONTAINS, ANY_OF, NONE_OF };

namespace FilterTypeMapper {
AWS_PRICING_API FilterType GetFilterTypeForName(const Aws::String& name);

AWS_PRICING_API Aws::String GetNameForFilterType(FilterType value);
}  // namespace FilterTypeMapper
}  // namespace Model
}  // namespace Pricing
}  // namespace Aws
