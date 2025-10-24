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
enum class GuardrailFilterStrength { NOT_SET, NONE, LOW, MEDIUM, HIGH };

namespace GuardrailFilterStrengthMapper {
AWS_QCONNECT_API GuardrailFilterStrength GetGuardrailFilterStrengthForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailFilterStrength(GuardrailFilterStrength value);
}  // namespace GuardrailFilterStrengthMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
