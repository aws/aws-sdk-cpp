/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/QuotePricingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace QuotePricingTypeMapper {

static const int SUBSCRIPTION_HASH = HashingUtils::HashString("SUBSCRIPTION");

QuotePricingType GetQuotePricingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBSCRIPTION_HASH) {
    return QuotePricingType::SUBSCRIPTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuotePricingType>(hashCode);
  }

  return QuotePricingType::NOT_SET;
}

Aws::String GetNameForQuotePricingType(QuotePricingType enumValue) {
  switch (enumValue) {
    case QuotePricingType::NOT_SET:
      return {};
    case QuotePricingType::SUBSCRIPTION:
      return "SUBSCRIPTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuotePricingTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
