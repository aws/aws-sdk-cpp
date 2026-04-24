/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/SupportedAwsIntegration.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace SupportedAwsIntegrationMapper {

static const int KmsTde_HASH = HashingUtils::HashString("KmsTde");

SupportedAwsIntegration GetSupportedAwsIntegrationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KmsTde_HASH) {
    return SupportedAwsIntegration::KmsTde;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SupportedAwsIntegration>(hashCode);
  }

  return SupportedAwsIntegration::NOT_SET;
}

Aws::String GetNameForSupportedAwsIntegration(SupportedAwsIntegration enumValue) {
  switch (enumValue) {
    case SupportedAwsIntegration::NOT_SET:
      return {};
    case SupportedAwsIntegration::KmsTde:
      return "KmsTde";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SupportedAwsIntegrationMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
