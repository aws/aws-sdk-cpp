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
  enum class MessageTemplateFilterOperator
  {
    NOT_SET,
    EQUALS,
    PREFIX
  };

namespace MessageTemplateFilterOperatorMapper
{
AWS_QCONNECT_API MessageTemplateFilterOperator GetMessageTemplateFilterOperatorForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForMessageTemplateFilterOperator(MessageTemplateFilterOperator value);
} // namespace MessageTemplateFilterOperatorMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
