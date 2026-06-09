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
enum class QuoteCapacityType { NOT_SET, EC2, EBS, S3 };

namespace QuoteCapacityTypeMapper {
AWS_OUTPOSTS_API QuoteCapacityType GetQuoteCapacityTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForQuoteCapacityType(QuoteCapacityType value);
}  // namespace QuoteCapacityTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
