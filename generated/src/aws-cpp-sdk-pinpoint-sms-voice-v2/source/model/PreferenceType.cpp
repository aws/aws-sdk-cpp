/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/PreferenceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace PreferenceTypeMapper {

static const int StartsWith_HASH = HashingUtils::HashString("StartsWith");
static const int EndsWith_HASH = HashingUtils::HashString("EndsWith");
static const int Contains_HASH = HashingUtils::HashString("Contains");
static const int ExactMatch_HASH = HashingUtils::HashString("ExactMatch");

PreferenceType GetPreferenceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == StartsWith_HASH) {
    return PreferenceType::StartsWith;
  } else if (hashCode == EndsWith_HASH) {
    return PreferenceType::EndsWith;
  } else if (hashCode == Contains_HASH) {
    return PreferenceType::Contains;
  } else if (hashCode == ExactMatch_HASH) {
    return PreferenceType::ExactMatch;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreferenceType>(hashCode);
  }

  return PreferenceType::NOT_SET;
}

Aws::String GetNameForPreferenceType(PreferenceType enumValue) {
  switch (enumValue) {
    case PreferenceType::NOT_SET:
      return {};
    case PreferenceType::StartsWith:
      return "StartsWith";
    case PreferenceType::EndsWith:
      return "EndsWith";
    case PreferenceType::Contains:
      return "Contains";
    case PreferenceType::ExactMatch:
      return "ExactMatch";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreferenceTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
