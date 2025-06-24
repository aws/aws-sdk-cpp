/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConnectorProviderName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ConnectorProviderNameMapper
      {

        static const int JIRA_CLOUD_HASH = HashingUtils::HashString("JIRA_CLOUD");
        static const int SERVICENOW_HASH = HashingUtils::HashString("SERVICENOW");


        ConnectorProviderName GetConnectorProviderNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JIRA_CLOUD_HASH)
          {
            return ConnectorProviderName::JIRA_CLOUD;
          }
          else if (hashCode == SERVICENOW_HASH)
          {
            return ConnectorProviderName::SERVICENOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorProviderName>(hashCode);
          }

          return ConnectorProviderName::NOT_SET;
        }

        Aws::String GetNameForConnectorProviderName(ConnectorProviderName enumValue)
        {
          switch(enumValue)
          {
          case ConnectorProviderName::NOT_SET:
            return {};
          case ConnectorProviderName::JIRA_CLOUD:
            return "JIRA_CLOUD";
          case ConnectorProviderName::SERVICENOW:
            return "SERVICENOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorProviderNameMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
