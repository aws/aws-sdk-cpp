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
enum class GuardrailAction { NOT_SET, NONE, BLOCKED, MASKED };

namespace GuardrailActionMapper {
AWS_QCONNECT_API GuardrailAction GetGuardrailActionForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailAction(GuardrailAction value);
}  // namespace GuardrailActionMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
