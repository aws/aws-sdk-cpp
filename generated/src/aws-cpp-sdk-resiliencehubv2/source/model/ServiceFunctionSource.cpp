/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ServiceFunctionSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ServiceFunctionSourceMapper {

static const int AI_GENERATED_HASH = HashingUtils::HashString("AI_GENERATED");
static const int USER_HASH = HashingUtils::HashString("USER");

ServiceFunctionSource GetServiceFunctionSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AI_GENERATED_HASH) {
    return ServiceFunctionSource::AI_GENERATED;
  } else if (hashCode == USER_HASH) {
    return ServiceFunctionSource::USER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceFunctionSource>(hashCode);
  }

  return ServiceFunctionSource::NOT_SET;
}

Aws::String GetNameForServiceFunctionSource(ServiceFunctionSource enumValue) {
  switch (enumValue) {
    case ServiceFunctionSource::NOT_SET:
      return {};
    case ServiceFunctionSource::AI_GENERATED:
      return "AI_GENERATED";
    case ServiceFunctionSource::USER:
      return "USER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceFunctionSourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
