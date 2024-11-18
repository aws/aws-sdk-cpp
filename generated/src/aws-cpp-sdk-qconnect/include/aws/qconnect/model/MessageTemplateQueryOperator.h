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
  enum class MessageTemplateQueryOperator
  {
    NOT_SET,
    CONTAINS,
    CONTAINS_AND_PREFIX
  };

namespace MessageTemplateQueryOperatorMapper
{
AWS_QCONNECT_API MessageTemplateQueryOperator GetMessageTemplateQueryOperatorForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForMessageTemplateQueryOperator(MessageTemplateQueryOperator value);
} // namespace MessageTemplateQueryOperatorMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
