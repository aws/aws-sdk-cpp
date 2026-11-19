/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ConfigurableAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ConfigurableActionMapper {

static const int FILTER_HASH = HashingUtils::HashString("FILTER");
static const int ENRICH_REQUEST_EXT_HASH = HashingUtils::HashString("ENRICH_REQUEST_EXT");
static const int ENRICH_REQUEST_HEADERS_HASH = HashingUtils::HashString("ENRICH_REQUEST_HEADERS");
static const int OBSERVE_HASH = HashingUtils::HashString("OBSERVE");

ConfigurableAction GetConfigurableActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FILTER_HASH) {
    return ConfigurableAction::FILTER;
  } else if (hashCode == ENRICH_REQUEST_EXT_HASH) {
    return ConfigurableAction::ENRICH_REQUEST_EXT;
  } else if (hashCode == ENRICH_REQUEST_HEADERS_HASH) {
    return ConfigurableAction::ENRICH_REQUEST_HEADERS;
  } else if (hashCode == OBSERVE_HASH) {
    return ConfigurableAction::OBSERVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurableAction>(hashCode);
  }

  return ConfigurableAction::NOT_SET;
}

Aws::String GetNameForConfigurableAction(ConfigurableAction enumValue) {
  switch (enumValue) {
    case ConfigurableAction::NOT_SET:
      return {};
    case ConfigurableAction::FILTER:
      return "FILTER";
    case ConfigurableAction::ENRICH_REQUEST_EXT:
      return "ENRICH_REQUEST_EXT";
    case ConfigurableAction::ENRICH_REQUEST_HEADERS:
      return "ENRICH_REQUEST_HEADERS";
    case ConfigurableAction::OBSERVE:
      return "OBSERVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurableActionMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
