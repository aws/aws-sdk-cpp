/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/EmbeddedDestinationStyleControl.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace EmbeddedDestinationStyleControlMapper {

static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");

EmbeddedDestinationStyleControl GetEmbeddedDestinationStyleControlForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUAL_HASH) {
    return EmbeddedDestinationStyleControl::MANUAL;
  } else if (hashCode == PASSTHROUGH_HASH) {
    return EmbeddedDestinationStyleControl::PASSTHROUGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EmbeddedDestinationStyleControl>(hashCode);
  }

  return EmbeddedDestinationStyleControl::NOT_SET;
}

Aws::String GetNameForEmbeddedDestinationStyleControl(EmbeddedDestinationStyleControl enumValue) {
  switch (enumValue) {
    case EmbeddedDestinationStyleControl::NOT_SET:
      return {};
    case EmbeddedDestinationStyleControl::MANUAL:
      return "MANUAL";
    case EmbeddedDestinationStyleControl::PASSTHROUGH:
      return "PASSTHROUGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EmbeddedDestinationStyleControlMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
