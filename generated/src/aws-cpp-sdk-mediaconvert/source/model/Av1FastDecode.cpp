/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/Av1FastDecode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace Av1FastDecodeMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

Av1FastDecode GetAv1FastDecodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return Av1FastDecode::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return Av1FastDecode::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Av1FastDecode>(hashCode);
  }

  return Av1FastDecode::NOT_SET;
}

Aws::String GetNameForAv1FastDecode(Av1FastDecode enumValue) {
  switch (enumValue) {
    case Av1FastDecode::NOT_SET:
      return {};
    case Av1FastDecode::DISABLED:
      return "DISABLED";
    case Av1FastDecode::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Av1FastDecodeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
