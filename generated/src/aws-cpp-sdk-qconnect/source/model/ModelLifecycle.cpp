/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/ModelLifecycle.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace ModelLifecycleMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int LEGACY_HASH = HashingUtils::HashString("LEGACY");

ModelLifecycle GetModelLifecycleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ModelLifecycle::ACTIVE;
  } else if (hashCode == LEGACY_HASH) {
    return ModelLifecycle::LEGACY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModelLifecycle>(hashCode);
  }

  return ModelLifecycle::NOT_SET;
}

Aws::String GetNameForModelLifecycle(ModelLifecycle enumValue) {
  switch (enumValue) {
    case ModelLifecycle::NOT_SET:
      return {};
    case ModelLifecycle::ACTIVE:
      return "ACTIVE";
    case ModelLifecycle::LEGACY:
      return "LEGACY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModelLifecycleMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
