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
enum class QuoteRackUseType { NOT_SET, NETWORKING, COMPUTE };

namespace QuoteRackUseTypeMapper {
AWS_OUTPOSTS_API QuoteRackUseType GetQuoteRackUseTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForQuoteRackUseType(QuoteRackUseType value);
}  // namespace QuoteRackUseTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
