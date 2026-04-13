/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class QuotePricingType { NOT_SET, SUBSCRIPTION };

namespace QuotePricingTypeMapper {
AWS_OUTPOSTS_API QuotePricingType GetQuotePricingTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForQuotePricingType(QuotePricingType value);
}  // namespace QuotePricingTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
