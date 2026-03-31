/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/TemplateVariableSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace TemplateVariableSourceMapper {

static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");

TemplateVariableSource GetTemplateVariableSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_HASH) {
    return TemplateVariableSource::CUSTOMER;
  } else if (hashCode == SYSTEM_HASH) {
    return TemplateVariableSource::SYSTEM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TemplateVariableSource>(hashCode);
  }

  return TemplateVariableSource::NOT_SET;
}

Aws::String GetNameForTemplateVariableSource(TemplateVariableSource enumValue) {
  switch (enumValue) {
    case TemplateVariableSource::NOT_SET:
      return {};
    case TemplateVariableSource::CUSTOMER:
      return "CUSTOMER";
    case TemplateVariableSource::SYSTEM:
      return "SYSTEM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TemplateVariableSourceMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
