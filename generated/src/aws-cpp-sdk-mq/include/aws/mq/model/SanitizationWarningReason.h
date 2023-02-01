/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MQ
{
namespace Model
{
  enum class SanitizationWarningReason
  {
    NOT_SET,
    DISALLOWED_ELEMENT_REMOVED,
    DISALLOWED_ATTRIBUTE_REMOVED,
    INVALID_ATTRIBUTE_VALUE_REMOVED
  };

namespace SanitizationWarningReasonMapper
{
AWS_MQ_API SanitizationWarningReason GetSanitizationWarningReasonForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForSanitizationWarningReason(SanitizationWarningReason value);
} // namespace SanitizationWarningReasonMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
