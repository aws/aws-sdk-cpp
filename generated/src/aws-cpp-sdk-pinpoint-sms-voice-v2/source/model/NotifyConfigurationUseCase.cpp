/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationUseCase.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace NotifyConfigurationUseCaseMapper {

static const int CODE_VERIFICATION_HASH = HashingUtils::HashString("CODE_VERIFICATION");

NotifyConfigurationUseCase GetNotifyConfigurationUseCaseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CODE_VERIFICATION_HASH) {
    return NotifyConfigurationUseCase::CODE_VERIFICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyConfigurationUseCase>(hashCode);
  }

  return NotifyConfigurationUseCase::NOT_SET;
}

Aws::String GetNameForNotifyConfigurationUseCase(NotifyConfigurationUseCase enumValue) {
  switch (enumValue) {
    case NotifyConfigurationUseCase::NOT_SET:
      return {};
    case NotifyConfigurationUseCase::CODE_VERIFICATION:
      return "CODE_VERIFICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyConfigurationUseCaseMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
