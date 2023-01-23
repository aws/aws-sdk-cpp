/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class CanaryState
  {
    NOT_SET,
    CREATING,
    READY,
    STARTING,
    RUNNING,
    UPDATING,
    STOPPING,
    STOPPED,
    ERROR_,
    DELETING
  };

namespace CanaryStateMapper
{
AWS_SYNTHETICS_API CanaryState GetCanaryStateForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForCanaryState(CanaryState value);
} // namespace CanaryStateMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
