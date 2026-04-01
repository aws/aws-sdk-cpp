/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/TemplateVariableType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace TemplateVariableTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");

TemplateVariableType GetTemplateVariableTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return TemplateVariableType::STRING;
  } else if (hashCode == INTEGER_HASH) {
    return TemplateVariableType::INTEGER;
  } else if (hashCode == BOOLEAN_HASH) {
    return TemplateVariableType::BOOLEAN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TemplateVariableType>(hashCode);
  }

  return TemplateVariableType::NOT_SET;
}

Aws::String GetNameForTemplateVariableType(TemplateVariableType enumValue) {
  switch (enumValue) {
    case TemplateVariableType::NOT_SET:
      return {};
    case TemplateVariableType::STRING:
      return "STRING";
    case TemplateVariableType::INTEGER:
      return "INTEGER";
    case TemplateVariableType::BOOLEAN:
      return "BOOLEAN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TemplateVariableTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
