/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/OpenMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace OpenModeMapper {

static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");
static const int READ_WRITE_HASH = HashingUtils::HashString("READ_WRITE");

OpenMode GetOpenModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READ_ONLY_HASH) {
    return OpenMode::READ_ONLY;
  } else if (hashCode == READ_WRITE_HASH) {
    return OpenMode::READ_WRITE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OpenMode>(hashCode);
  }

  return OpenMode::NOT_SET;
}

Aws::String GetNameForOpenMode(OpenMode enumValue) {
  switch (enumValue) {
    case OpenMode::NOT_SET:
      return {};
    case OpenMode::READ_ONLY:
      return "READ_ONLY";
    case OpenMode::READ_WRITE:
      return "READ_WRITE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OpenModeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
