/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class Application
  {
    NOT_SET,
    Microsoft_Office_2016,
    Microsoft_Office_2019
  };

namespace ApplicationMapper
{
AWS_WORKSPACES_API Application GetApplicationForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForApplication(Application value);
} // namespace ApplicationMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
