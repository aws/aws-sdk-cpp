/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace CatalogNameMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int Sandbox_HASH = HashingUtils::HashString("Sandbox");

CatalogName GetCatalogNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return CatalogName::AWS;
  } else if (hashCode == Sandbox_HASH) {
    return CatalogName::Sandbox;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CatalogName>(hashCode);
  }

  return CatalogName::NOT_SET;
}

Aws::String GetNameForCatalogName(CatalogName enumValue) {
  switch (enumValue) {
    case CatalogName::NOT_SET:
      return {};
    case CatalogName::AWS:
      return "AWS";
    case CatalogName::Sandbox:
      return "Sandbox";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CatalogNameMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
