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
enum class QuoteStatus { NOT_SET, CREATED, ORDER_SUBMITTED, EXPIRED };

namespace QuoteStatusMapper {
AWS_OUTPOSTS_API QuoteStatus GetQuoteStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForQuoteStatus(QuoteStatus value);
}  // namespace QuoteStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
