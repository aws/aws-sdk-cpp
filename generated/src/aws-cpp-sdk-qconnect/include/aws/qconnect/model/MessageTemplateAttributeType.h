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
  enum class MessageTemplateAttributeType
  {
    NOT_SET,
    SYSTEM,
    AGENT,
    CUSTOMER_PROFILE,
    CUSTOM
  };

namespace MessageTemplateAttributeTypeMapper
{
AWS_QCONNECT_API MessageTemplateAttributeType GetMessageTemplateAttributeTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForMessageTemplateAttributeType(MessageTemplateAttributeType value);
} // namespace MessageTemplateAttributeTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
