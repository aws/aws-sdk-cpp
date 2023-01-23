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
  enum class ChildPolicy
  {
    NOT_SET,
    TERMINATE,
    REQUEST_CANCEL,
    ABANDON
  };

namespace ChildPolicyMapper
{
AWS_SWF_API ChildPolicy GetChildPolicyForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForChildPolicy(ChildPolicy value);
} // namespace ChildPolicyMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
