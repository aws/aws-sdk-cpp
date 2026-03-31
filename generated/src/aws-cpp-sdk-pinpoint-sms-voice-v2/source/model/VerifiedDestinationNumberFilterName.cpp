/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/VerifiedDestinationNumberFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace VerifiedDestinationNumberFilterNameMapper {

static const int status_HASH = HashingUtils::HashString("status");
static const int rcs_agent_id_HASH = HashingUtils::HashString("rcs-agent-id");

VerifiedDestinationNumberFilterName GetVerifiedDestinationNumberFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == status_HASH) {
    return VerifiedDestinationNumberFilterName::status;
  } else if (hashCode == rcs_agent_id_HASH) {
    return VerifiedDestinationNumberFilterName::rcs_agent_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VerifiedDestinationNumberFilterName>(hashCode);
  }

  return VerifiedDestinationNumberFilterName::NOT_SET;
}

Aws::String GetNameForVerifiedDestinationNumberFilterName(VerifiedDestinationNumberFilterName enumValue) {
  switch (enumValue) {
    case VerifiedDestinationNumberFilterName::NOT_SET:
      return {};
    case VerifiedDestinationNumberFilterName::status:
      return "status";
    case VerifiedDestinationNumberFilterName::rcs_agent_id:
      return "rcs-agent-id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VerifiedDestinationNumberFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
