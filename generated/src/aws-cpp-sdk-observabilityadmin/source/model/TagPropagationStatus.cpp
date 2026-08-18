/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/TagPropagationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace TagPropagationStatusMapper {

static const int Healthy_HASH = HashingUtils::HashString("Healthy");
static const int Unhealthy_HASH = HashingUtils::HashString("Unhealthy");

TagPropagationStatus GetTagPropagationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Healthy_HASH) {
    return TagPropagationStatus::Healthy;
  } else if (hashCode == Unhealthy_HASH) {
    return TagPropagationStatus::Unhealthy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagPropagationStatus>(hashCode);
  }

  return TagPropagationStatus::NOT_SET;
}

Aws::String GetNameForTagPropagationStatus(TagPropagationStatus enumValue) {
  switch (enumValue) {
    case TagPropagationStatus::NOT_SET:
      return {};
    case TagPropagationStatus::Healthy:
      return "Healthy";
    case TagPropagationStatus::Unhealthy:
      return "Unhealthy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagPropagationStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
