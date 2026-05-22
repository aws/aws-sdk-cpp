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
enum class GuardrailSource { NOT_SET, INPUT, OUTPUT };

namespace GuardrailSourceMapper {
AWS_QCONNECT_API GuardrailSource GetGuardrailSourceForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailSource(GuardrailSource value);
}  // namespace GuardrailSourceMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
