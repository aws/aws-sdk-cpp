/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/ConfigurationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace ConfigurationStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ConfigurationStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return ConfigurationStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return ConfigurationStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return ConfigurationStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return ConfigurationStatus::DELETED;
  } else if (hashCode == FAILED_HASH) {
    return ConfigurationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurationStatus>(hashCode);
  }

  return ConfigurationStatus::NOT_SET;
}

Aws::String GetNameForConfigurationStatus(ConfigurationStatus enumValue) {
  switch (enumValue) {
    case ConfigurationStatus::NOT_SET:
      return {};
    case ConfigurationStatus::CREATING:
      return "CREATING";
    case ConfigurationStatus::ACTIVE:
      return "ACTIVE";
    case ConfigurationStatus::UPDATING:
      return "UPDATING";
    case ConfigurationStatus::DELETING:
      return "DELETING";
    case ConfigurationStatus::DELETED:
      return "DELETED";
    case ConfigurationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurationStatusMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
