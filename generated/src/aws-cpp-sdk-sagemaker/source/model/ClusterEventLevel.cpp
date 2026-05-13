/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterEventLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterEventLevelMapper {

static const int Info_HASH = HashingUtils::HashString("Info");
static const int Warn_HASH = HashingUtils::HashString("Warn");
static const int Error_HASH = HashingUtils::HashString("Error");

ClusterEventLevel GetClusterEventLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Info_HASH) {
    return ClusterEventLevel::Info;
  } else if (hashCode == Warn_HASH) {
    return ClusterEventLevel::Warn;
  } else if (hashCode == Error_HASH) {
    return ClusterEventLevel::Error;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterEventLevel>(hashCode);
  }

  return ClusterEventLevel::NOT_SET;
}

Aws::String GetNameForClusterEventLevel(ClusterEventLevel enumValue) {
  switch (enumValue) {
    case ClusterEventLevel::NOT_SET:
      return {};
    case ClusterEventLevel::Info:
      return "Info";
    case ClusterEventLevel::Warn:
      return "Warn";
    case ClusterEventLevel::Error:
      return "Error";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterEventLevelMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
