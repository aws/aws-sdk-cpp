/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/SchedulerConfigComponent.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace SchedulerConfigComponentMapper {

static const int PriorityClasses_HASH = HashingUtils::HashString("PriorityClasses");
static const int FairShare_HASH = HashingUtils::HashString("FairShare");
static const int IdleResourceSharing_HASH = HashingUtils::HashString("IdleResourceSharing");

SchedulerConfigComponent GetSchedulerConfigComponentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PriorityClasses_HASH) {
    return SchedulerConfigComponent::PriorityClasses;
  } else if (hashCode == FairShare_HASH) {
    return SchedulerConfigComponent::FairShare;
  } else if (hashCode == IdleResourceSharing_HASH) {
    return SchedulerConfigComponent::IdleResourceSharing;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SchedulerConfigComponent>(hashCode);
  }

  return SchedulerConfigComponent::NOT_SET;
}

Aws::String GetNameForSchedulerConfigComponent(SchedulerConfigComponent enumValue) {
  switch (enumValue) {
    case SchedulerConfigComponent::NOT_SET:
      return {};
    case SchedulerConfigComponent::PriorityClasses:
      return "PriorityClasses";
    case SchedulerConfigComponent::FairShare:
      return "FairShare";
    case SchedulerConfigComponent::IdleResourceSharing:
      return "IdleResourceSharing";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SchedulerConfigComponentMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
