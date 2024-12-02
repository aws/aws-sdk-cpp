/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class GuardrailContentFilterType
  {
    NOT_SET,
    SEXUAL,
    VIOLENCE,
    HATE,
    INSULTS,
    MISCONDUCT,
    PROMPT_ATTACK
  };

namespace GuardrailContentFilterTypeMapper
{
AWS_QCONNECT_API GuardrailContentFilterType GetGuardrailContentFilterTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailContentFilterType(GuardrailContentFilterType value);
} // namespace GuardrailContentFilterTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
