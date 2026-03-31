/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sustainability/model/Dimension.h>

using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {
namespace DimensionMapper {

static const int USAGE_ACCOUNT_ID_HASH = HashingUtils::HashString("USAGE_ACCOUNT_ID");
static const int REGION_HASH = HashingUtils::HashString("REGION");
static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");

Dimension GetDimensionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USAGE_ACCOUNT_ID_HASH) {
    return Dimension::USAGE_ACCOUNT_ID;
  } else if (hashCode == REGION_HASH) {
    return Dimension::REGION;
  } else if (hashCode == SERVICE_HASH) {
    return Dimension::SERVICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Dimension>(hashCode);
  }

  return Dimension::NOT_SET;
}

Aws::String GetNameForDimension(Dimension enumValue) {
  switch (enumValue) {
    case Dimension::NOT_SET:
      return {};
    case Dimension::USAGE_ACCOUNT_ID:
      return "USAGE_ACCOUNT_ID";
    case Dimension::REGION:
      return "REGION";
    case Dimension::SERVICE:
      return "SERVICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DimensionMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
