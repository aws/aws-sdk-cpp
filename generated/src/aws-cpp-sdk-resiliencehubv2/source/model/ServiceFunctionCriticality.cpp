/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ServiceFunctionCriticality.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ServiceFunctionCriticalityMapper {

static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
static const int SUPPLEMENTAL_HASH = HashingUtils::HashString("SUPPLEMENTAL");

ServiceFunctionCriticality GetServiceFunctionCriticalityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_HASH) {
    return ServiceFunctionCriticality::PRIMARY;
  } else if (hashCode == SUPPLEMENTAL_HASH) {
    return ServiceFunctionCriticality::SUPPLEMENTAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceFunctionCriticality>(hashCode);
  }

  return ServiceFunctionCriticality::NOT_SET;
}

Aws::String GetNameForServiceFunctionCriticality(ServiceFunctionCriticality enumValue) {
  switch (enumValue) {
    case ServiceFunctionCriticality::NOT_SET:
      return {};
    case ServiceFunctionCriticality::PRIMARY:
      return "PRIMARY";
    case ServiceFunctionCriticality::SUPPLEMENTAL:
      return "SUPPLEMENTAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceFunctionCriticalityMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
