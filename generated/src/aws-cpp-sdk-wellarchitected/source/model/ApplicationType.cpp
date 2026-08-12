/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/ApplicationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace ApplicationTypeMapper {

static const int SAS_HASH = HashingUtils::HashString("SAS");
static const int DESKTOP_APPLICATION_HASH = HashingUtils::HashString("DESKTOP_APPLICATION");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

ApplicationType GetApplicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SAS_HASH) {
    return ApplicationType::SAS;
  } else if (hashCode == DESKTOP_APPLICATION_HASH) {
    return ApplicationType::DESKTOP_APPLICATION;
  } else if (hashCode == OTHER_HASH) {
    return ApplicationType::OTHER;
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
    case ApplicationType::SAS:
      return "SAS";
    case ApplicationType::DESKTOP_APPLICATION:
      return "DESKTOP_APPLICATION";
    case ApplicationType::OTHER:
      return "OTHER";
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
}  // namespace WellArchitected
}  // namespace Aws
