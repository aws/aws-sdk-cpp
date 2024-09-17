/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class PluginType
  {
    NOT_SET,
    SERVICE_NOW,
    SALESFORCE,
    JIRA,
    ZENDESK,
    CUSTOM
  };

namespace PluginTypeMapper
{
AWS_QAPPS_API PluginType GetPluginTypeForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForPluginType(PluginType value);
} // namespace PluginTypeMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
