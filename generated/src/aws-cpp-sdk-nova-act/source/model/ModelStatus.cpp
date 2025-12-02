/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/model/ModelStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {
namespace ModelStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int LEGACY_HASH = HashingUtils::HashString("LEGACY");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
static const int PREVIEW_HASH = HashingUtils::HashString("PREVIEW");

ModelStatus GetModelStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ModelStatus::ACTIVE;
  } else if (hashCode == LEGACY_HASH) {
    return ModelStatus::LEGACY;
  } else if (hashCode == DEPRECATED_HASH) {
    return ModelStatus::DEPRECATED;
  } else if (hashCode == PREVIEW_HASH) {
    return ModelStatus::PREVIEW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModelStatus>(hashCode);
  }

  return ModelStatus::NOT_SET;
}

Aws::String GetNameForModelStatus(ModelStatus enumValue) {
  switch (enumValue) {
    case ModelStatus::NOT_SET:
      return {};
    case ModelStatus::ACTIVE:
      return "ACTIVE";
    case ModelStatus::LEGACY:
      return "LEGACY";
    case ModelStatus::DEPRECATED:
      return "DEPRECATED";
    case ModelStatus::PREVIEW:
      return "PREVIEW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModelStatusMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
