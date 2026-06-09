/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/GuardrailPolicyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace GuardrailPolicyTypeMapper {

static const int CONTENT_FILTER_HASH = HashingUtils::HashString("CONTENT_FILTER");
static const int TOPIC_HASH = HashingUtils::HashString("TOPIC");
static const int WORD_HASH = HashingUtils::HashString("WORD");
static const int SENSITIVE_INFORMATION_PII_HASH = HashingUtils::HashString("SENSITIVE_INFORMATION_PII");
static const int SENSITIVE_INFORMATION_REGEX_HASH = HashingUtils::HashString("SENSITIVE_INFORMATION_REGEX");
static const int CONTEXTUAL_GROUNDING_HASH = HashingUtils::HashString("CONTEXTUAL_GROUNDING");

GuardrailPolicyType GetGuardrailPolicyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTENT_FILTER_HASH) {
    return GuardrailPolicyType::CONTENT_FILTER;
  } else if (hashCode == TOPIC_HASH) {
    return GuardrailPolicyType::TOPIC;
  } else if (hashCode == WORD_HASH) {
    return GuardrailPolicyType::WORD;
  } else if (hashCode == SENSITIVE_INFORMATION_PII_HASH) {
    return GuardrailPolicyType::SENSITIVE_INFORMATION_PII;
  } else if (hashCode == SENSITIVE_INFORMATION_REGEX_HASH) {
    return GuardrailPolicyType::SENSITIVE_INFORMATION_REGEX;
  } else if (hashCode == CONTEXTUAL_GROUNDING_HASH) {
    return GuardrailPolicyType::CONTEXTUAL_GROUNDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailPolicyType>(hashCode);
  }

  return GuardrailPolicyType::NOT_SET;
}

Aws::String GetNameForGuardrailPolicyType(GuardrailPolicyType enumValue) {
  switch (enumValue) {
    case GuardrailPolicyType::NOT_SET:
      return {};
    case GuardrailPolicyType::CONTENT_FILTER:
      return "CONTENT_FILTER";
    case GuardrailPolicyType::TOPIC:
      return "TOPIC";
    case GuardrailPolicyType::WORD:
      return "WORD";
    case GuardrailPolicyType::SENSITIVE_INFORMATION_PII:
      return "SENSITIVE_INFORMATION_PII";
    case GuardrailPolicyType::SENSITIVE_INFORMATION_REGEX:
      return "SENSITIVE_INFORMATION_REGEX";
    case GuardrailPolicyType::CONTEXTUAL_GROUNDING:
      return "CONTEXTUAL_GROUNDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailPolicyTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
