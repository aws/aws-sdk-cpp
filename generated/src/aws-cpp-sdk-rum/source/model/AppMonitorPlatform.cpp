/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rum/model/AppMonitorPlatform.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchRUM {
namespace Model {
namespace AppMonitorPlatformMapper {

static const int Web_HASH = HashingUtils::HashString("Web");
static const int Android_HASH = HashingUtils::HashString("Android");
static const int iOS_HASH = HashingUtils::HashString("iOS");

AppMonitorPlatform GetAppMonitorPlatformForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Web_HASH) {
    return AppMonitorPlatform::Web;
  } else if (hashCode == Android_HASH) {
    return AppMonitorPlatform::Android;
  } else if (hashCode == iOS_HASH) {
    return AppMonitorPlatform::iOS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AppMonitorPlatform>(hashCode);
  }

  return AppMonitorPlatform::NOT_SET;
}

Aws::String GetNameForAppMonitorPlatform(AppMonitorPlatform enumValue) {
  switch (enumValue) {
    case AppMonitorPlatform::NOT_SET:
      return {};
    case AppMonitorPlatform::Web:
      return "Web";
    case AppMonitorPlatform::Android:
      return "Android";
    case AppMonitorPlatform::iOS:
      return "iOS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AppMonitorPlatformMapper
}  // namespace Model
}  // namespace CloudWatchRUM
}  // namespace Aws
