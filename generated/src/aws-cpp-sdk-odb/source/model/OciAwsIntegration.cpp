/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/OciAwsIntegration.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace OciAwsIntegrationMapper {

static const int KmsTde_HASH = HashingUtils::HashString("KmsTde");
static const int SecretsManager_HASH = HashingUtils::HashString("SecretsManager");

OciAwsIntegration GetOciAwsIntegrationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KmsTde_HASH) {
    return OciAwsIntegration::KmsTde;
  } else if (hashCode == SecretsManager_HASH) {
    return OciAwsIntegration::SecretsManager;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OciAwsIntegration>(hashCode);
  }

  return OciAwsIntegration::NOT_SET;
}

Aws::String GetNameForOciAwsIntegration(OciAwsIntegration enumValue) {
  switch (enumValue) {
    case OciAwsIntegration::NOT_SET:
      return {};
    case OciAwsIntegration::KmsTde:
      return "KmsTde";
    case OciAwsIntegration::SecretsManager:
      return "SecretsManager";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OciAwsIntegrationMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
