/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/Av1TemporalAq.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace Av1TemporalAqMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

Av1TemporalAq GetAv1TemporalAqForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return Av1TemporalAq::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return Av1TemporalAq::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Av1TemporalAq>(hashCode);
  }

  return Av1TemporalAq::NOT_SET;
}

Aws::String GetNameForAv1TemporalAq(Av1TemporalAq enumValue) {
  switch (enumValue) {
    case Av1TemporalAq::NOT_SET:
      return {};
    case Av1TemporalAq::DISABLED:
      return "DISABLED";
    case Av1TemporalAq::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Av1TemporalAqMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
