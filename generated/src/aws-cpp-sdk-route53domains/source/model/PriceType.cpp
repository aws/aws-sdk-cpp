/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53domains/model/PriceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53Domains {
namespace Model {
namespace PriceTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int REGISTRY_PREMIUM_HASH = HashingUtils::HashString("REGISTRY_PREMIUM");

PriceType GetPriceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return PriceType::STANDARD;
  } else if (hashCode == REGISTRY_PREMIUM_HASH) {
    return PriceType::REGISTRY_PREMIUM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PriceType>(hashCode);
  }

  return PriceType::NOT_SET;
}

Aws::String GetNameForPriceType(PriceType enumValue) {
  switch (enumValue) {
    case PriceType::NOT_SET:
      return {};
    case PriceType::STANDARD:
      return "STANDARD";
    case PriceType::REGISTRY_PREMIUM:
      return "REGISTRY_PREMIUM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PriceTypeMapper
}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws
