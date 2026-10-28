/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/neptunedata/model/WriteBufferSize.h>

using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {
namespace WriteBufferSizeMapper {

static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");

WriteBufferSize GetWriteBufferSizeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOW_HASH) {
    return WriteBufferSize::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return WriteBufferSize::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return WriteBufferSize::HIGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WriteBufferSize>(hashCode);
  }

  return WriteBufferSize::NOT_SET;
}

Aws::String GetNameForWriteBufferSize(WriteBufferSize enumValue) {
  switch (enumValue) {
    case WriteBufferSize::NOT_SET:
      return {};
    case WriteBufferSize::LOW:
      return "LOW";
    case WriteBufferSize::MEDIUM:
      return "MEDIUM";
    case WriteBufferSize::HIGH:
      return "HIGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WriteBufferSizeMapper
}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
