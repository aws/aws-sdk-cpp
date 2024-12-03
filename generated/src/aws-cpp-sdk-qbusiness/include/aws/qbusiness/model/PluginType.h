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
    ZENDESK,
    CUSTOM,
    QUICKSIGHT,
    SERVICENOW_NOW_PLATFORM,
    JIRA_CLOUD,
    SALESFORCE_CRM,
    ZENDESK_SUITE,
    ATLASSIAN_CONFLUENCE,
    GOOGLE_CALENDAR,
    MICROSOFT_TEAMS,
    MICROSOFT_EXCHANGE,
    PAGERDUTY_ADVANCE,
    SMARTSHEET,
    ASANA
  };

namespace PluginTypeMapper
{
AWS_QBUSINESS_API PluginType GetPluginTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPluginType(PluginType value);
} // namespace PluginTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
