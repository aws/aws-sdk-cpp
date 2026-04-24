/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift/model/ApplicationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Redshift {
namespace Model {
namespace ApplicationTypeMapper {

static const int None_HASH = HashingUtils::HashString("None");
static const int Lakehouse_HASH = HashingUtils::HashString("Lakehouse");

ApplicationType GetApplicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == None_HASH) {
    return ApplicationType::None;
  } else if (hashCode == Lakehouse_HASH) {
    return ApplicationType::Lakehouse;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplicationType>(hashCode);
  }

  return ApplicationType::NOT_SET;
}

Aws::String GetNameForApplicationType(ApplicationType enumValue) {
  switch (enumValue) {
    case ApplicationType::NOT_SET:
      return {};
    case ApplicationType::None:
      return "None";
    case ApplicationType::Lakehouse:
      return "Lakehouse";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplicationTypeMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
