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
enum class PricingResult { NOT_SET, PRICED, UNABLE_TO_PRICE };

namespace PricingResultMapper {
AWS_OUTPOSTS_API PricingResult GetPricingResultForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPricingResult(PricingResult value);
}  // namespace PricingResultMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
