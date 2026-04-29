/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/UriSeparator.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace UriSeparatorMapper {

static const int UNDERSCORE_HASH = HashingUtils::HashString("UNDERSCORE");
static const int HYPHEN_HASH = HashingUtils::HashString("HYPHEN");

UriSeparator GetUriSeparatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNDERSCORE_HASH) {
    return UriSeparator::UNDERSCORE;
  } else if (hashCode == HYPHEN_HASH) {
    return UriSeparator::HYPHEN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UriSeparator>(hashCode);
  }

  return UriSeparator::NOT_SET;
}

Aws::String GetNameForUriSeparator(UriSeparator enumValue) {
  switch (enumValue) {
    case UriSeparator::NOT_SET:
      return {};
    case UriSeparator::UNDERSCORE:
      return "UNDERSCORE";
    case UriSeparator::HYPHEN:
      return "HYPHEN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UriSeparatorMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
