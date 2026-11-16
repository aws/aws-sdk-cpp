/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/InferenceRouterStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace InferenceRouterStatusMapper {

static const int InService_HASH = HashingUtils::HashString("InService");
static const int Creating_HASH = HashingUtils::HashString("Creating");
static const int Updating_HASH = HashingUtils::HashString("Updating");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");

InferenceRouterStatus GetInferenceRouterStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InService_HASH) {
    return InferenceRouterStatus::InService;
  } else if (hashCode == Creating_HASH) {
    return InferenceRouterStatus::Creating;
  } else if (hashCode == Updating_HASH) {
    return InferenceRouterStatus::Updating;
  } else if (hashCode == Failed_HASH) {
    return InferenceRouterStatus::Failed;
  } else if (hashCode == Deleting_HASH) {
    return InferenceRouterStatus::Deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InferenceRouterStatus>(hashCode);
  }

  return InferenceRouterStatus::NOT_SET;
}

Aws::String GetNameForInferenceRouterStatus(InferenceRouterStatus enumValue) {
  switch (enumValue) {
    case InferenceRouterStatus::NOT_SET:
      return {};
    case InferenceRouterStatus::InService:
      return "InService";
    case InferenceRouterStatus::Creating:
      return "Creating";
    case InferenceRouterStatus::Updating:
      return "Updating";
    case InferenceRouterStatus::Failed:
      return "Failed";
    case InferenceRouterStatus::Deleting:
      return "Deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InferenceRouterStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
