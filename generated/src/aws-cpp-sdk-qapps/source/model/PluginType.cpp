/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PluginType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace PluginTypeMapper
      {

        static const int SERVICE_NOW_HASH = HashingUtils::HashString("SERVICE_NOW");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int JIRA_HASH = HashingUtils::HashString("JIRA");
        static const int ZENDESK_HASH = HashingUtils::HashString("ZENDESK");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int ASANA_HASH = HashingUtils::HashString("ASANA");
        static const int ATLASSIAN_CONFLUENCE_HASH = HashingUtils::HashString("ATLASSIAN_CONFLUENCE");
        static const int GOOGLE_CALENDAR_HASH = HashingUtils::HashString("GOOGLE_CALENDAR");
        static const int JIRA_CLOUD_HASH = HashingUtils::HashString("JIRA_CLOUD");
        static const int MICROSOFT_EXCHANGE_HASH = HashingUtils::HashString("MICROSOFT_EXCHANGE");
        static const int MICROSOFT_TEAMS_HASH = HashingUtils::HashString("MICROSOFT_TEAMS");
        static const int PAGERDUTY_ADVANCE_HASH = HashingUtils::HashString("PAGERDUTY_ADVANCE");
        static const int SALESFORCE_CRM_HASH = HashingUtils::HashString("SALESFORCE_CRM");
        static const int SERVICENOW_NOW_PLATFORM_HASH = HashingUtils::HashString("SERVICENOW_NOW_PLATFORM");
        static const int SMARTSHEET_HASH = HashingUtils::HashString("SMARTSHEET");
        static const int ZENDESK_SUITE_HASH = HashingUtils::HashString("ZENDESK_SUITE");


        PluginType GetPluginTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_NOW_HASH)
          {
            return PluginType::SERVICE_NOW;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return PluginType::SALESFORCE;
          }
          else if (hashCode == JIRA_HASH)
          {
            return PluginType::JIRA;
          }
          else if (hashCode == ZENDESK_HASH)
          {
            return PluginType::ZENDESK;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return PluginType::CUSTOM;
          }
          else if (hashCode == ASANA_HASH)
          {
            return PluginType::ASANA;
          }
          else if (hashCode == ATLASSIAN_CONFLUENCE_HASH)
          {
            return PluginType::ATLASSIAN_CONFLUENCE;
          }
          else if (hashCode == GOOGLE_CALENDAR_HASH)
          {
            return PluginType::GOOGLE_CALENDAR;
          }
          else if (hashCode == JIRA_CLOUD_HASH)
          {
            return PluginType::JIRA_CLOUD;
          }
          else if (hashCode == MICROSOFT_EXCHANGE_HASH)
          {
            return PluginType::MICROSOFT_EXCHANGE;
          }
          else if (hashCode == MICROSOFT_TEAMS_HASH)
          {
            return PluginType::MICROSOFT_TEAMS;
          }
          else if (hashCode == PAGERDUTY_ADVANCE_HASH)
          {
            return PluginType::PAGERDUTY_ADVANCE;
          }
          else if (hashCode == SALESFORCE_CRM_HASH)
          {
            return PluginType::SALESFORCE_CRM;
          }
          else if (hashCode == SERVICENOW_NOW_PLATFORM_HASH)
          {
            return PluginType::SERVICENOW_NOW_PLATFORM;
          }
          else if (hashCode == SMARTSHEET_HASH)
          {
            return PluginType::SMARTSHEET;
          }
          else if (hashCode == ZENDESK_SUITE_HASH)
          {
            return PluginType::ZENDESK_SUITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PluginType>(hashCode);
          }

          return PluginType::NOT_SET;
        }

        Aws::String GetNameForPluginType(PluginType enumValue)
        {
          switch(enumValue)
          {
          case PluginType::NOT_SET:
            return {};
          case PluginType::SERVICE_NOW:
            return "SERVICE_NOW";
          case PluginType::SALESFORCE:
            return "SALESFORCE";
          case PluginType::JIRA:
            return "JIRA";
          case PluginType::ZENDESK:
            return "ZENDESK";
          case PluginType::CUSTOM:
            return "CUSTOM";
          case PluginType::ASANA:
            return "ASANA";
          case PluginType::ATLASSIAN_CONFLUENCE:
            return "ATLASSIAN_CONFLUENCE";
          case PluginType::GOOGLE_CALENDAR:
            return "GOOGLE_CALENDAR";
          case PluginType::JIRA_CLOUD:
            return "JIRA_CLOUD";
          case PluginType::MICROSOFT_EXCHANGE:
            return "MICROSOFT_EXCHANGE";
          case PluginType::MICROSOFT_TEAMS:
            return "MICROSOFT_TEAMS";
          case PluginType::PAGERDUTY_ADVANCE:
            return "PAGERDUTY_ADVANCE";
          case PluginType::SALESFORCE_CRM:
            return "SALESFORCE_CRM";
          case PluginType::SERVICENOW_NOW_PLATFORM:
            return "SERVICENOW_NOW_PLATFORM";
          case PluginType::SMARTSHEET:
            return "SMARTSHEET";
          case PluginType::ZENDESK_SUITE:
            return "ZENDESK_SUITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PluginTypeMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
