/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class RequestCancelActivityTaskFailedCause
  {
    NOT_SET,
    ACTIVITY_ID_UNKNOWN,
    OPERATION_NOT_PERMITTED
  };

namespace RequestCancelActivityTaskFailedCauseMapper
{
AWS_SWF_API RequestCancelActivityTaskFailedCause GetRequestCancelActivityTaskFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForRequestCancelActivityTaskFailedCause(RequestCancelActivityTaskFailedCause value);
} // namespace RequestCancelActivityTaskFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
