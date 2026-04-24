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
enum class GuardrailSensitiveInformationAction { NOT_SET, BLOCK, ANONYMIZE };

namespace GuardrailSensitiveInformationActionMapper {
AWS_QCONNECT_API GuardrailSensitiveInformationAction GetGuardrailSensitiveInformationActionForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailSensitiveInformationAction(GuardrailSensitiveInformationAction value);
}  // namespace GuardrailSensitiveInformationActionMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
