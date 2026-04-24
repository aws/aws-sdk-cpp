/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/uxc/model/AccountColor.h>

using namespace Aws::Utils;

namespace Aws {
namespace uxc {
namespace Model {
namespace AccountColorMapper {

static const int none_HASH = HashingUtils::HashString("none");
static const int pink_HASH = HashingUtils::HashString("pink");
static const int purple_HASH = HashingUtils::HashString("purple");
static const int darkBlue_HASH = HashingUtils::HashString("darkBlue");
static const int lightBlue_HASH = HashingUtils::HashString("lightBlue");
static const int teal_HASH = HashingUtils::HashString("teal");
static const int green_HASH = HashingUtils::HashString("green");
static const int yellow_HASH = HashingUtils::HashString("yellow");
static const int orange_HASH = HashingUtils::HashString("orange");
static const int red_HASH = HashingUtils::HashString("red");

AccountColor GetAccountColorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == none_HASH) {
    return AccountColor::none;
  } else if (hashCode == pink_HASH) {
    return AccountColor::pink;
  } else if (hashCode == purple_HASH) {
    return AccountColor::purple;
  } else if (hashCode == darkBlue_HASH) {
    return AccountColor::darkBlue;
  } else if (hashCode == lightBlue_HASH) {
    return AccountColor::lightBlue;
  } else if (hashCode == teal_HASH) {
    return AccountColor::teal;
  } else if (hashCode == green_HASH) {
    return AccountColor::green;
  } else if (hashCode == yellow_HASH) {
    return AccountColor::yellow;
  } else if (hashCode == orange_HASH) {
    return AccountColor::orange;
  } else if (hashCode == red_HASH) {
    return AccountColor::red;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountColor>(hashCode);
  }

  return AccountColor::NOT_SET;
}

Aws::String GetNameForAccountColor(AccountColor enumValue) {
  switch (enumValue) {
    case AccountColor::NOT_SET:
      return {};
    case AccountColor::none:
      return "none";
    case AccountColor::pink:
      return "pink";
    case AccountColor::purple:
      return "purple";
    case AccountColor::darkBlue:
      return "darkBlue";
    case AccountColor::lightBlue:
      return "lightBlue";
    case AccountColor::teal:
      return "teal";
    case AccountColor::green:
      return "green";
    case AccountColor::yellow:
      return "yellow";
    case AccountColor::orange:
      return "orange";
    case AccountColor::red:
      return "red";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountColorMapper
}  // namespace Model
}  // namespace uxc
}  // namespace Aws
