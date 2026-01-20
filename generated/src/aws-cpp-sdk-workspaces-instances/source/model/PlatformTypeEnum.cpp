/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-instances/model/PlatformTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {
namespace PlatformTypeEnumMapper {

static const int Windows_HASH = HashingUtils::HashString("Windows");
static const int Windows_BYOL_HASH = HashingUtils::HashString("Windows BYOL");
static const int Linux_UNIX_HASH = HashingUtils::HashString("Linux/UNIX");
static const int Ubuntu_Pro_Linux_HASH = HashingUtils::HashString("Ubuntu Pro Linux");
static const int Red_Hat_Enterprise_Linux_HASH = HashingUtils::HashString("Red Hat Enterprise Linux");
static const int Red_Hat_BYOL_Linux_HASH = HashingUtils::HashString("Red Hat BYOL Linux");
static const int SUSE_Linux_HASH = HashingUtils::HashString("SUSE Linux");

PlatformTypeEnum GetPlatformTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Windows_HASH) {
    return PlatformTypeEnum::Windows;
  } else if (hashCode == Windows_BYOL_HASH) {
    return PlatformTypeEnum::Windows_BYOL;
  } else if (hashCode == Linux_UNIX_HASH) {
    return PlatformTypeEnum::Linux_UNIX;
  } else if (hashCode == Ubuntu_Pro_Linux_HASH) {
    return PlatformTypeEnum::Ubuntu_Pro_Linux;
  } else if (hashCode == Red_Hat_Enterprise_Linux_HASH) {
    return PlatformTypeEnum::Red_Hat_Enterprise_Linux;
  } else if (hashCode == Red_Hat_BYOL_Linux_HASH) {
    return PlatformTypeEnum::Red_Hat_BYOL_Linux;
  } else if (hashCode == SUSE_Linux_HASH) {
    return PlatformTypeEnum::SUSE_Linux;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PlatformTypeEnum>(hashCode);
  }

  return PlatformTypeEnum::NOT_SET;
}

Aws::String GetNameForPlatformTypeEnum(PlatformTypeEnum enumValue) {
  switch (enumValue) {
    case PlatformTypeEnum::NOT_SET:
      return {};
    case PlatformTypeEnum::Windows:
      return "Windows";
    case PlatformTypeEnum::Windows_BYOL:
      return "Windows BYOL";
    case PlatformTypeEnum::Linux_UNIX:
      return "Linux/UNIX";
    case PlatformTypeEnum::Ubuntu_Pro_Linux:
      return "Ubuntu Pro Linux";
    case PlatformTypeEnum::Red_Hat_Enterprise_Linux:
      return "Red Hat Enterprise Linux";
    case PlatformTypeEnum::Red_Hat_BYOL_Linux:
      return "Red Hat BYOL Linux";
    case PlatformTypeEnum::SUSE_Linux:
      return "SUSE Linux";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PlatformTypeEnumMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
