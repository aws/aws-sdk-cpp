/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{
  enum class HttpTokensEnum
  {
    NOT_SET,
    optional,
    required
  };

namespace HttpTokensEnumMapper
{
AWS_WORKSPACESINSTANCES_API HttpTokensEnum GetHttpTokensEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForHttpTokensEnum(HttpTokensEnum value);
} // namespace HttpTokensEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
