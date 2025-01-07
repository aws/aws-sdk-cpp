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
  enum class GuardrailManagedWordsType
  {
    NOT_SET,
    PROFANITY
  };

namespace GuardrailManagedWordsTypeMapper
{
AWS_QCONNECT_API GuardrailManagedWordsType GetGuardrailManagedWordsTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailManagedWordsType(GuardrailManagedWordsType value);
} // namespace GuardrailManagedWordsTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
