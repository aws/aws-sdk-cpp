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
    CUSTOM,
    ASANA,
    ATLASSIAN_CONFLUENCE,
    GOOGLE_CALENDAR,
    JIRA_CLOUD,
    MICROSOFT_EXCHANGE,
    MICROSOFT_TEAMS,
    PAGERDUTY_ADVANCE,
    SALESFORCE_CRM,
    SERVICENOW_NOW_PLATFORM,
    SMARTSHEET,
    ZENDESK_SUITE
  };

namespace PluginTypeMapper
{
AWS_QAPPS_API PluginType GetPluginTypeForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForPluginType(PluginType value);
} // namespace PluginTypeMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
