/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/SetupFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace SetupFormatMapper {

static const int BICEP_HASH = HashingUtils::HashString("BICEP");

SetupFormat GetSetupFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BICEP_HASH) {
    return SetupFormat::BICEP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SetupFormat>(hashCode);
  }

  return SetupFormat::NOT_SET;
}

Aws::String GetNameForSetupFormat(SetupFormat enumValue) {
  switch (enumValue) {
    case SetupFormat::NOT_SET:
      return {};
    case SetupFormat::BICEP:
      return "BICEP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SetupFormatMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
