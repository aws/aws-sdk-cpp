/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class GuardrailPolicyType {
  NOT_SET,
  CONTENT_FILTER,
  TOPIC,
  WORD,
  SENSITIVE_INFORMATION_PII,
  SENSITIVE_INFORMATION_REGEX,
  CONTEXTUAL_GROUNDING
};

namespace GuardrailPolicyTypeMapper {
AWS_QCONNECT_API GuardrailPolicyType GetGuardrailPolicyTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailPolicyType(GuardrailPolicyType value);
}  // namespace GuardrailPolicyTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
