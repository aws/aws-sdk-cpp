/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PluginType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace PluginTypeMapper
      {

        static const int SERVICE_NOW_HASH = HashingUtils::HashString("SERVICE_NOW");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int JIRA_HASH = HashingUtils::HashString("JIRA");
        static const int ZENDESK_HASH = HashingUtils::HashString("ZENDESK");


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
  } // namespace QBusiness
} // namespace Aws
