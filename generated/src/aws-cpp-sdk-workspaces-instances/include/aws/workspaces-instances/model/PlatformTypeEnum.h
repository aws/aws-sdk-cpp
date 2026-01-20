/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

namespace Aws {
namespace WorkspacesInstances {
namespace Model {
enum class PlatformTypeEnum {
  NOT_SET,
  Windows,
  Windows_BYOL,
  Linux_UNIX,
  Ubuntu_Pro_Linux,
  Red_Hat_Enterprise_Linux,
  Red_Hat_BYOL_Linux,
  SUSE_Linux
};

namespace PlatformTypeEnumMapper {
AWS_WORKSPACESINSTANCES_API PlatformTypeEnum GetPlatformTypeEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForPlatformTypeEnum(PlatformTypeEnum value);
}  // namespace PlatformTypeEnumMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
