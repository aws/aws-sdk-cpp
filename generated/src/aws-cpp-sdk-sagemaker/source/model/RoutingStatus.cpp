/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/RoutingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace RoutingStatusMapper {

static const int Routable_HASH = HashingUtils::HashString("Routable");
static const int Unroutable_HASH = HashingUtils::HashString("Unroutable");
static const int Unknown_HASH = HashingUtils::HashString("Unknown");

RoutingStatus GetRoutingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Routable_HASH) {
    return RoutingStatus::Routable;
  } else if (hashCode == Unroutable_HASH) {
    return RoutingStatus::Unroutable;
  } else if (hashCode == Unknown_HASH) {
    return RoutingStatus::Unknown;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RoutingStatus>(hashCode);
  }

  return RoutingStatus::NOT_SET;
}

Aws::String GetNameForRoutingStatus(RoutingStatus enumValue) {
  switch (enumValue) {
    case RoutingStatus::NOT_SET:
      return {};
    case RoutingStatus::Routable:
      return "Routable";
    case RoutingStatus::Unroutable:
      return "Unroutable";
    case RoutingStatus::Unknown:
      return "Unknown";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RoutingStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
