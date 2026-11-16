/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/InferenceRouterRoutingPreference.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace InferenceRouterRoutingPreferenceMapper {

static const int LocalRegionFirst_HASH = HashingUtils::HashString("LocalRegionFirst");
static const int InstancePoolOrder_HASH = HashingUtils::HashString("InstancePoolOrder");

InferenceRouterRoutingPreference GetInferenceRouterRoutingPreferenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LocalRegionFirst_HASH) {
    return InferenceRouterRoutingPreference::LocalRegionFirst;
  } else if (hashCode == InstancePoolOrder_HASH) {
    return InferenceRouterRoutingPreference::InstancePoolOrder;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InferenceRouterRoutingPreference>(hashCode);
  }

  return InferenceRouterRoutingPreference::NOT_SET;
}

Aws::String GetNameForInferenceRouterRoutingPreference(InferenceRouterRoutingPreference enumValue) {
  switch (enumValue) {
    case InferenceRouterRoutingPreference::NOT_SET:
      return {};
    case InferenceRouterRoutingPreference::LocalRegionFirst:
      return "LocalRegionFirst";
    case InferenceRouterRoutingPreference::InstancePoolOrder:
      return "InstancePoolOrder";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InferenceRouterRoutingPreferenceMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
