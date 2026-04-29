/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/CustomAdType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace CustomAdTypeMapper {

static const int PROGRAM_HASH = HashingUtils::HashString("PROGRAM");
static const int CHAPTER_HASH = HashingUtils::HashString("CHAPTER");
static const int UNSCHEDULED_EVENT_HASH = HashingUtils::HashString("UNSCHEDULED_EVENT");
static const int ALTERNATE_CONTENT_OPPORTUNITY_HASH = HashingUtils::HashString("ALTERNATE_CONTENT_OPPORTUNITY");
static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");

CustomAdType GetCustomAdTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROGRAM_HASH) {
    return CustomAdType::PROGRAM;
  } else if (hashCode == CHAPTER_HASH) {
    return CustomAdType::CHAPTER;
  } else if (hashCode == UNSCHEDULED_EVENT_HASH) {
    return CustomAdType::UNSCHEDULED_EVENT;
  } else if (hashCode == ALTERNATE_CONTENT_OPPORTUNITY_HASH) {
    return CustomAdType::ALTERNATE_CONTENT_OPPORTUNITY;
  } else if (hashCode == NETWORK_HASH) {
    return CustomAdType::NETWORK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomAdType>(hashCode);
  }

  return CustomAdType::NOT_SET;
}

Aws::String GetNameForCustomAdType(CustomAdType enumValue) {
  switch (enumValue) {
    case CustomAdType::NOT_SET:
      return {};
    case CustomAdType::PROGRAM:
      return "PROGRAM";
    case CustomAdType::CHAPTER:
      return "CHAPTER";
    case CustomAdType::UNSCHEDULED_EVENT:
      return "UNSCHEDULED_EVENT";
    case CustomAdType::ALTERNATE_CONTENT_OPPORTUNITY:
      return "ALTERNATE_CONTENT_OPPORTUNITY";
    case CustomAdType::NETWORK:
      return "NETWORK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomAdTypeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
