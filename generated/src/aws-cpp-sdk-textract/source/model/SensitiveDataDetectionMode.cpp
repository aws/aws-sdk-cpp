/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/textract/model/SensitiveDataDetectionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {
namespace SensitiveDataDetectionModeMapper {

static const int DETECTION_HASH = HashingUtils::HashString("DETECTION");
static const int DETECTION_AND_REDACTION_HASH = HashingUtils::HashString("DETECTION_AND_REDACTION");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

SensitiveDataDetectionMode GetSensitiveDataDetectionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DETECTION_HASH) {
    return SensitiveDataDetectionMode::DETECTION;
  } else if (hashCode == DETECTION_AND_REDACTION_HASH) {
    return SensitiveDataDetectionMode::DETECTION_AND_REDACTION;
  } else if (hashCode == DISABLED_HASH) {
    return SensitiveDataDetectionMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SensitiveDataDetectionMode>(hashCode);
  }

  return SensitiveDataDetectionMode::NOT_SET;
}

Aws::String GetNameForSensitiveDataDetectionMode(SensitiveDataDetectionMode enumValue) {
  switch (enumValue) {
    case SensitiveDataDetectionMode::NOT_SET:
      return {};
    case SensitiveDataDetectionMode::DETECTION:
      return "DETECTION";
    case SensitiveDataDetectionMode::DETECTION_AND_REDACTION:
      return "DETECTION_AND_REDACTION";
    case SensitiveDataDetectionMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SensitiveDataDetectionModeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
