/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ResourceCriticality.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ResourceCriticalityMapper {

static const int Very_High_HASH = HashingUtils::HashString("Very High");
static const int High_HASH = HashingUtils::HashString("High");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int Low_HASH = HashingUtils::HashString("Low");
static const int Unknown_HASH = HashingUtils::HashString("Unknown");

ResourceCriticality GetResourceCriticalityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Very_High_HASH) {
    return ResourceCriticality::Very_High;
  } else if (hashCode == High_HASH) {
    return ResourceCriticality::High;
  } else if (hashCode == Medium_HASH) {
    return ResourceCriticality::Medium;
  } else if (hashCode == Low_HASH) {
    return ResourceCriticality::Low;
  } else if (hashCode == Unknown_HASH) {
    return ResourceCriticality::Unknown;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceCriticality>(hashCode);
  }

  return ResourceCriticality::NOT_SET;
}

Aws::String GetNameForResourceCriticality(ResourceCriticality enumValue) {
  switch (enumValue) {
    case ResourceCriticality::NOT_SET:
      return {};
    case ResourceCriticality::Very_High:
      return "Very High";
    case ResourceCriticality::High:
      return "High";
    case ResourceCriticality::Medium:
      return "Medium";
    case ResourceCriticality::Low:
      return "Low";
    case ResourceCriticality::Unknown:
      return "Unknown";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceCriticalityMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
