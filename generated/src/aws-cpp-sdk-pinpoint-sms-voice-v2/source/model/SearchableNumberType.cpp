/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/SearchableNumberType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace SearchableNumberTypeMapper {

static const int TEN_DLC_HASH = HashingUtils::HashString("TEN_DLC");

SearchableNumberType GetSearchableNumberTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEN_DLC_HASH) {
    return SearchableNumberType::TEN_DLC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchableNumberType>(hashCode);
  }

  return SearchableNumberType::NOT_SET;
}

Aws::String GetNameForSearchableNumberType(SearchableNumberType enumValue) {
  switch (enumValue) {
    case SearchableNumberType::NOT_SET:
      return {};
    case SearchableNumberType::TEN_DLC:
      return "TEN_DLC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchableNumberTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
