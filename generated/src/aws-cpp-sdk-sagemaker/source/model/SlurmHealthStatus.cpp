/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/SlurmHealthStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace SlurmHealthStatusMapper {

static const int Healthy_HASH = HashingUtils::HashString("Healthy");
static const int Unhealthy_HASH = HashingUtils::HashString("Unhealthy");

SlurmHealthStatus GetSlurmHealthStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Healthy_HASH) {
    return SlurmHealthStatus::Healthy;
  } else if (hashCode == Unhealthy_HASH) {
    return SlurmHealthStatus::Unhealthy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SlurmHealthStatus>(hashCode);
  }

  return SlurmHealthStatus::NOT_SET;
}

Aws::String GetNameForSlurmHealthStatus(SlurmHealthStatus enumValue) {
  switch (enumValue) {
    case SlurmHealthStatus::NOT_SET:
      return {};
    case SlurmHealthStatus::Healthy:
      return "Healthy";
    case SlurmHealthStatus::Unhealthy:
      return "Unhealthy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SlurmHealthStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
