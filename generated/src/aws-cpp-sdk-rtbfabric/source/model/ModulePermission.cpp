/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ModulePermission.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ModulePermissionMapper {

static const int READ_REQUEST_BODY_HASH = HashingUtils::HashString("READ_REQUEST_BODY");
static const int READ_REQUEST_HEADERS_HASH = HashingUtils::HashString("READ_REQUEST_HEADERS");
static const int MUTATE_REQUEST_BODY_HASH = HashingUtils::HashString("MUTATE_REQUEST_BODY");
static const int ENRICH_REQUEST_HEADERS_HASH = HashingUtils::HashString("ENRICH_REQUEST_HEADERS");
static const int ENRICH_REQUEST_EXT_HASH = HashingUtils::HashString("ENRICH_REQUEST_EXT");
static const int FILTER_HASH = HashingUtils::HashString("FILTER");

ModulePermission GetModulePermissionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READ_REQUEST_BODY_HASH) {
    return ModulePermission::READ_REQUEST_BODY;
  } else if (hashCode == READ_REQUEST_HEADERS_HASH) {
    return ModulePermission::READ_REQUEST_HEADERS;
  } else if (hashCode == MUTATE_REQUEST_BODY_HASH) {
    return ModulePermission::MUTATE_REQUEST_BODY;
  } else if (hashCode == ENRICH_REQUEST_HEADERS_HASH) {
    return ModulePermission::ENRICH_REQUEST_HEADERS;
  } else if (hashCode == ENRICH_REQUEST_EXT_HASH) {
    return ModulePermission::ENRICH_REQUEST_EXT;
  } else if (hashCode == FILTER_HASH) {
    return ModulePermission::FILTER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModulePermission>(hashCode);
  }

  return ModulePermission::NOT_SET;
}

Aws::String GetNameForModulePermission(ModulePermission enumValue) {
  switch (enumValue) {
    case ModulePermission::NOT_SET:
      return {};
    case ModulePermission::READ_REQUEST_BODY:
      return "READ_REQUEST_BODY";
    case ModulePermission::READ_REQUEST_HEADERS:
      return "READ_REQUEST_HEADERS";
    case ModulePermission::MUTATE_REQUEST_BODY:
      return "MUTATE_REQUEST_BODY";
    case ModulePermission::ENRICH_REQUEST_HEADERS:
      return "ENRICH_REQUEST_HEADERS";
    case ModulePermission::ENRICH_REQUEST_EXT:
      return "ENRICH_REQUEST_EXT";
    case ModulePermission::FILTER:
      return "FILTER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModulePermissionMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
