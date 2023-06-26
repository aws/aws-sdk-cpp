/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ScheduledActionState
  {
    NOT_SET,
    ACTIVE,
    DISABLED
  };

namespace ScheduledActionStateMapper
{
AWS_REDSHIFT_API ScheduledActionState GetScheduledActionStateForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForScheduledActionState(ScheduledActionState value);
} // namespace ScheduledActionStateMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
