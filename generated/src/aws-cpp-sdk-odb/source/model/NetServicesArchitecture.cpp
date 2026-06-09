/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/NetServicesArchitecture.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace NetServicesArchitectureMapper {

static const int DEDICATED_HASH = HashingUtils::HashString("DEDICATED");
static const int SHARED_HASH = HashingUtils::HashString("SHARED");

NetServicesArchitecture GetNetServicesArchitectureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEDICATED_HASH) {
    return NetServicesArchitecture::DEDICATED;
  } else if (hashCode == SHARED_HASH) {
    return NetServicesArchitecture::SHARED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetServicesArchitecture>(hashCode);
  }

  return NetServicesArchitecture::NOT_SET;
}

Aws::String GetNameForNetServicesArchitecture(NetServicesArchitecture enumValue) {
  switch (enumValue) {
    case NetServicesArchitecture::NOT_SET:
      return {};
    case NetServicesArchitecture::DEDICATED:
      return "DEDICATED";
    case NetServicesArchitecture::SHARED:
      return "SHARED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetServicesArchitectureMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
