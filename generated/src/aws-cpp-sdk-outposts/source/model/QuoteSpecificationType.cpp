/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/QuoteSpecificationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace QuoteSpecificationTypeMapper {

static const int UPDATED_RACK_HASH = HashingUtils::HashString("UPDATED_RACK");
static const int NEW_RACK_HASH = HashingUtils::HashString("NEW_RACK");
static const int EXISTING_RACK_HASH = HashingUtils::HashString("EXISTING_RACK");
static const int SERVER_HASH = HashingUtils::HashString("SERVER");

QuoteSpecificationType GetQuoteSpecificationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UPDATED_RACK_HASH) {
    return QuoteSpecificationType::UPDATED_RACK;
  } else if (hashCode == NEW_RACK_HASH) {
    return QuoteSpecificationType::NEW_RACK;
  } else if (hashCode == EXISTING_RACK_HASH) {
    return QuoteSpecificationType::EXISTING_RACK;
  } else if (hashCode == SERVER_HASH) {
    return QuoteSpecificationType::SERVER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuoteSpecificationType>(hashCode);
  }

  return QuoteSpecificationType::NOT_SET;
}

Aws::String GetNameForQuoteSpecificationType(QuoteSpecificationType enumValue) {
  switch (enumValue) {
    case QuoteSpecificationType::NOT_SET:
      return {};
    case QuoteSpecificationType::UPDATED_RACK:
      return "UPDATED_RACK";
    case QuoteSpecificationType::NEW_RACK:
      return "NEW_RACK";
    case QuoteSpecificationType::EXISTING_RACK:
      return "EXISTING_RACK";
    case QuoteSpecificationType::SERVER:
      return "SERVER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuoteSpecificationTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
