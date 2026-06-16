/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3-crt/model/AnnotationConfigurationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Crt {
namespace Model {
namespace AnnotationConfigurationStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

AnnotationConfigurationState GetAnnotationConfigurationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return AnnotationConfigurationState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return AnnotationConfigurationState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnnotationConfigurationState>(hashCode);
  }

  return AnnotationConfigurationState::NOT_SET;
}

Aws::String GetNameForAnnotationConfigurationState(AnnotationConfigurationState enumValue) {
  switch (enumValue) {
    case AnnotationConfigurationState::NOT_SET:
      return {};
    case AnnotationConfigurationState::ENABLED:
      return "ENABLED";
    case AnnotationConfigurationState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnnotationConfigurationStateMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
