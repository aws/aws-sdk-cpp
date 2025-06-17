/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class ActionCompletionStrategy
  {
    NOT_SET,
    AUTO_COMPLETION_UPON_APPROVAL
  };

namespace ActionCompletionStrategyMapper
{
AWS_MPA_API ActionCompletionStrategy GetActionCompletionStrategyForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForActionCompletionStrategy(ActionCompletionStrategy value);
} // namespace ActionCompletionStrategyMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
