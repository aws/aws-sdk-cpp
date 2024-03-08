/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class PluginState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PluginStateMapper
{
AWS_QBUSINESS_API PluginState GetPluginStateForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPluginState(PluginState value);
} // namespace PluginStateMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
