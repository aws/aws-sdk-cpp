/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/EmbeddedModeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace EmbeddedModeTypeMapper {

static const int EMBEDDED_608_AND_708_HASH = HashingUtils::HashString("EMBEDDED_608_AND_708");
static const int EMBEDDED_608_ONLY_HASH = HashingUtils::HashString("EMBEDDED_608_ONLY");
static const int EMBEDDED_708_ONLY_HASH = HashingUtils::HashString("EMBEDDED_708_ONLY");

EmbeddedModeType GetEmbeddedModeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMBEDDED_608_AND_708_HASH) {
    return EmbeddedModeType::EMBEDDED_608_AND_708;
  } else if (hashCode == EMBEDDED_608_ONLY_HASH) {
    return EmbeddedModeType::EMBEDDED_608_ONLY;
  } else if (hashCode == EMBEDDED_708_ONLY_HASH) {
    return EmbeddedModeType::EMBEDDED_708_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EmbeddedModeType>(hashCode);
  }

  return EmbeddedModeType::NOT_SET;
}

Aws::String GetNameForEmbeddedModeType(EmbeddedModeType enumValue) {
  switch (enumValue) {
    case EmbeddedModeType::NOT_SET:
      return {};
    case EmbeddedModeType::EMBEDDED_608_AND_708:
      return "EMBEDDED_608_AND_708";
    case EmbeddedModeType::EMBEDDED_608_ONLY:
      return "EMBEDDED_608_ONLY";
    case EmbeddedModeType::EMBEDDED_708_ONLY:
      return "EMBEDDED_708_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EmbeddedModeTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
