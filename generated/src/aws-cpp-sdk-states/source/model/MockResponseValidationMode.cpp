/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/states/model/MockResponseValidationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SFN {
namespace Model {
namespace MockResponseValidationModeMapper {

static const int STRICT_HASH = HashingUtils::HashString("STRICT");
static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");
static const int NONE_HASH = HashingUtils::HashString("NONE");

MockResponseValidationMode GetMockResponseValidationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRICT_HASH) {
    return MockResponseValidationMode::STRICT;
  } else if (hashCode == PRESENT_HASH) {
    return MockResponseValidationMode::PRESENT;
  } else if (hashCode == NONE_HASH) {
    return MockResponseValidationMode::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MockResponseValidationMode>(hashCode);
  }

  return MockResponseValidationMode::NOT_SET;
}

Aws::String GetNameForMockResponseValidationMode(MockResponseValidationMode enumValue) {
  switch (enumValue) {
    case MockResponseValidationMode::NOT_SET:
      return {};
    case MockResponseValidationMode::STRICT:
      return "STRICT";
    case MockResponseValidationMode::PRESENT:
      return "PRESENT";
    case MockResponseValidationMode::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MockResponseValidationModeMapper
}  // namespace Model
}  // namespace SFN
}  // namespace Aws
