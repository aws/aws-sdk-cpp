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
  enum class GuardrailTopicType
  {
    NOT_SET,
    DENY
  };

namespace GuardrailTopicTypeMapper
{
AWS_QCONNECT_API GuardrailTopicType GetGuardrailTopicTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForGuardrailTopicType(GuardrailTopicType value);
} // namespace GuardrailTopicTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
