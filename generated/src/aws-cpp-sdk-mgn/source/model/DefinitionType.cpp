/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/DefinitionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace DefinitionTypeMapper {

static const int MIGRATION_HASH = HashingUtils::HashString("MIGRATION");
static const int NEW_NETWORK_HASH = HashingUtils::HashString("NEW_NETWORK");

DefinitionType GetDefinitionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MIGRATION_HASH) {
    return DefinitionType::MIGRATION;
  } else if (hashCode == NEW_NETWORK_HASH) {
    return DefinitionType::NEW_NETWORK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DefinitionType>(hashCode);
  }

  return DefinitionType::NOT_SET;
}

Aws::String GetNameForDefinitionType(DefinitionType enumValue) {
  switch (enumValue) {
    case DefinitionType::NOT_SET:
      return {};
    case DefinitionType::MIGRATION:
      return "MIGRATION";
    case DefinitionType::NEW_NETWORK:
      return "NEW_NETWORK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DefinitionTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
