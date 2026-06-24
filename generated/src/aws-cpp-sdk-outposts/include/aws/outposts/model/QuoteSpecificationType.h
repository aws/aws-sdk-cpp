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
enum class QuoteSpecificationType { NOT_SET, UPDATED_RACK, NEW_RACK, EXISTING_RACK, SERVER };

namespace QuoteSpecificationTypeMapper {
AWS_OUTPOSTS_API QuoteSpecificationType GetQuoteSpecificationTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForQuoteSpecificationType(QuoteSpecificationType value);
}  // namespace QuoteSpecificationTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
