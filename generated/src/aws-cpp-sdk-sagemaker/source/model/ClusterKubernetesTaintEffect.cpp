/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterKubernetesTaintEffect.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterKubernetesTaintEffectMapper {

static const int NoSchedule_HASH = HashingUtils::HashString("NoSchedule");
static const int PreferNoSchedule_HASH = HashingUtils::HashString("PreferNoSchedule");
static const int NoExecute_HASH = HashingUtils::HashString("NoExecute");

ClusterKubernetesTaintEffect GetClusterKubernetesTaintEffectForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NoSchedule_HASH) {
    return ClusterKubernetesTaintEffect::NoSchedule;
  } else if (hashCode == PreferNoSchedule_HASH) {
    return ClusterKubernetesTaintEffect::PreferNoSchedule;
  } else if (hashCode == NoExecute_HASH) {
    return ClusterKubernetesTaintEffect::NoExecute;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterKubernetesTaintEffect>(hashCode);
  }

  return ClusterKubernetesTaintEffect::NOT_SET;
}

Aws::String GetNameForClusterKubernetesTaintEffect(ClusterKubernetesTaintEffect enumValue) {
  switch (enumValue) {
    case ClusterKubernetesTaintEffect::NOT_SET:
      return {};
    case ClusterKubernetesTaintEffect::NoSchedule:
      return "NoSchedule";
    case ClusterKubernetesTaintEffect::PreferNoSchedule:
      return "PreferNoSchedule";
    case ClusterKubernetesTaintEffect::NoExecute:
      return "NoExecute";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterKubernetesTaintEffectMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
