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
enum class QuoteConstraintType { NOT_SET, RACK_MAXIMUM, RACK_MAX_POWER_KVA, RACK_MAX_WEIGHT_LBS };

namespace QuoteConstraintTypeMapper {
AWS_OUTPOSTS_API QuoteConstraintType GetQuoteConstraintTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForQuoteConstraintType(QuoteConstraintType value);
}  // namespace QuoteConstraintTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
