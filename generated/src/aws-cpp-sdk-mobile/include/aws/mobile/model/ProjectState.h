/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Mobile
{
namespace Model
{
  enum class ProjectState
  {
    NOT_SET,
    NORMAL,
    SYNCING,
    IMPORTING
  };

namespace ProjectStateMapper
{
AWS_MOBILE_API ProjectState GetProjectStateForName(const Aws::String& name);

AWS_MOBILE_API Aws::String GetNameForProjectState(ProjectState value);
} // namespace ProjectStateMapper
} // namespace Model
} // namespace Mobile
} // namespace Aws
