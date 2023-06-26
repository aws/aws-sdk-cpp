/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class HITStatus
  {
    NOT_SET,
    Assignable,
    Unassignable,
    Reviewable,
    Reviewing,
    Disposed
  };

namespace HITStatusMapper
{
AWS_MTURK_API HITStatus GetHITStatusForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForHITStatus(HITStatus value);
} // namespace HITStatusMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
