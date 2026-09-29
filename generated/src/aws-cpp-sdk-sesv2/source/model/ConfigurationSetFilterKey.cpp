/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/ConfigurationSetFilterKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace ConfigurationSetFilterKeyMapper {

static const int CONFIGURATION_SET_NAME_CONTAINS_HASH = HashingUtils::HashString("CONFIGURATION_SET_NAME_CONTAINS");

ConfigurationSetFilterKey GetConfigurationSetFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFIGURATION_SET_NAME_CONTAINS_HASH) {
    return ConfigurationSetFilterKey::CONFIGURATION_SET_NAME_CONTAINS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurationSetFilterKey>(hashCode);
  }

  return ConfigurationSetFilterKey::NOT_SET;
}

Aws::String GetNameForConfigurationSetFilterKey(ConfigurationSetFilterKey enumValue) {
  switch (enumValue) {
    case ConfigurationSetFilterKey::NOT_SET:
      return {};
    case ConfigurationSetFilterKey::CONFIGURATION_SET_NAME_CONTAINS:
      return "CONFIGURATION_SET_NAME_CONTAINS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurationSetFilterKeyMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
