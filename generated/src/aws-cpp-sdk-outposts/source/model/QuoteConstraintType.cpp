/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/QuoteConstraintType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace QuoteConstraintTypeMapper {

static const int RACK_MAXIMUM_HASH = HashingUtils::HashString("RACK_MAXIMUM");
static const int RACK_MAX_POWER_KVA_HASH = HashingUtils::HashString("RACK_MAX_POWER_KVA");
static const int RACK_MAX_WEIGHT_LBS_HASH = HashingUtils::HashString("RACK_MAX_WEIGHT_LBS");

QuoteConstraintType GetQuoteConstraintTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RACK_MAXIMUM_HASH) {
    return QuoteConstraintType::RACK_MAXIMUM;
  } else if (hashCode == RACK_MAX_POWER_KVA_HASH) {
    return QuoteConstraintType::RACK_MAX_POWER_KVA;
  } else if (hashCode == RACK_MAX_WEIGHT_LBS_HASH) {
    return QuoteConstraintType::RACK_MAX_WEIGHT_LBS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuoteConstraintType>(hashCode);
  }

  return QuoteConstraintType::NOT_SET;
}

Aws::String GetNameForQuoteConstraintType(QuoteConstraintType enumValue) {
  switch (enumValue) {
    case QuoteConstraintType::NOT_SET:
      return {};
    case QuoteConstraintType::RACK_MAXIMUM:
      return "RACK_MAXIMUM";
    case QuoteConstraintType::RACK_MAX_POWER_KVA:
      return "RACK_MAX_POWER_KVA";
    case QuoteConstraintType::RACK_MAX_WEIGHT_LBS:
      return "RACK_MAX_WEIGHT_LBS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuoteConstraintTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
