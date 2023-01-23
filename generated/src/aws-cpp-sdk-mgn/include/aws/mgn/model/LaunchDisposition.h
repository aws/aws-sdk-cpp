/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class LaunchDisposition
  {
    NOT_SET,
    STOPPED,
    STARTED
  };

namespace LaunchDispositionMapper
{
AWS_MGN_API LaunchDisposition GetLaunchDispositionForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForLaunchDisposition(LaunchDisposition value);
} // namespace LaunchDispositionMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
