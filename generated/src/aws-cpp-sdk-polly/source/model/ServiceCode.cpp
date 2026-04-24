/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/ServiceCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace ServiceCodeMapper {

static const int polly_HASH = HashingUtils::HashString("polly");

ServiceCode GetServiceCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == polly_HASH) {
    return ServiceCode::polly;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceCode>(hashCode);
  }

  return ServiceCode::NOT_SET;
}

Aws::String GetNameForServiceCode(ServiceCode enumValue) {
  switch (enumValue) {
    case ServiceCode::NOT_SET:
      return {};
    case ServiceCode::polly:
      return "polly";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceCodeMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
