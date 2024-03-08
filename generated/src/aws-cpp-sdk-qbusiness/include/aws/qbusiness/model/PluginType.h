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
  enum class PluginType
  {
    NOT_SET,
    SERVICE_NOW,
    SALESFORCE,
    JIRA,
    ZENDESK
  };

namespace PluginTypeMapper
{
AWS_QBUSINESS_API PluginType GetPluginTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPluginType(PluginType value);
} // namespace PluginTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
