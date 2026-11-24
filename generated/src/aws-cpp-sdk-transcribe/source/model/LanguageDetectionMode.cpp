/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribe/model/LanguageDetectionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {
namespace LanguageDetectionModeMapper {

static const int IDENTIFY_LANGUAGE_HASH = HashingUtils::HashString("IDENTIFY_LANGUAGE");

LanguageDetectionMode GetLanguageDetectionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDENTIFY_LANGUAGE_HASH) {
    return LanguageDetectionMode::IDENTIFY_LANGUAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LanguageDetectionMode>(hashCode);
  }

  return LanguageDetectionMode::NOT_SET;
}

Aws::String GetNameForLanguageDetectionMode(LanguageDetectionMode enumValue) {
  switch (enumValue) {
    case LanguageDetectionMode::NOT_SET:
      return {};
    case LanguageDetectionMode::IDENTIFY_LANGUAGE:
      return "IDENTIFY_LANGUAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LanguageDetectionModeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
