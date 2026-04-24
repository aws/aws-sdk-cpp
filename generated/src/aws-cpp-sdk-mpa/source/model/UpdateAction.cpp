/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mpa/model/UpdateAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace MPA {
namespace Model {
namespace UpdateActionMapper {

static const int SYNCHRONIZE_MFA_DEVICES_HASH = HashingUtils::HashString("SYNCHRONIZE_MFA_DEVICES");

UpdateAction GetUpdateActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SYNCHRONIZE_MFA_DEVICES_HASH) {
    return UpdateAction::SYNCHRONIZE_MFA_DEVICES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateAction>(hashCode);
  }

  return UpdateAction::NOT_SET;
}

Aws::String GetNameForUpdateAction(UpdateAction enumValue) {
  switch (enumValue) {
    case UpdateAction::NOT_SET:
      return {};
    case UpdateAction::SYNCHRONIZE_MFA_DEVICES:
      return "SYNCHRONIZE_MFA_DEVICES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateActionMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
