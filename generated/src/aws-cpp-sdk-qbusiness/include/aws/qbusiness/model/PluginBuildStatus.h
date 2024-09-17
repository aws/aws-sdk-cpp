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
  enum class PluginBuildStatus
  {
    NOT_SET,
    READY,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED,
    DELETE_IN_PROGRESS,
    DELETE_FAILED
  };

namespace PluginBuildStatusMapper
{
AWS_QBUSINESS_API PluginBuildStatus GetPluginBuildStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPluginBuildStatus(PluginBuildStatus value);
} // namespace PluginBuildStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
