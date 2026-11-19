/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/Catalog.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CatalogMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int Sandbox_HASH = HashingUtils::HashString("Sandbox");

Catalog GetCatalogForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return Catalog::AWS;
  } else if (hashCode == Sandbox_HASH) {
    return Catalog::Sandbox;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Catalog>(hashCode);
  }

  return Catalog::NOT_SET;
}

Aws::String GetNameForCatalog(Catalog enumValue) {
  switch (enumValue) {
    case Catalog::NOT_SET:
      return {};
    case Catalog::AWS:
      return "AWS";
    case Catalog::Sandbox:
      return "Sandbox";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CatalogMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
