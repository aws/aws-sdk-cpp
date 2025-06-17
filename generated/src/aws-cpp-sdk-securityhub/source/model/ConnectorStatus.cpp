/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConnectorStatus.h>
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
      namespace ConnectorStatusMapper
      {

        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int FAILED_TO_CONNECT_HASH = HashingUtils::HashString("FAILED_TO_CONNECT");
        static const int PENDING_CONFIGURATION_HASH = HashingUtils::HashString("PENDING_CONFIGURATION");
        static const int PENDING_AUTHORIZATION_HASH = HashingUtils::HashString("PENDING_AUTHORIZATION");


        ConnectorStatus GetConnectorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return ConnectorStatus::CONNECTED;
          }
          else if (hashCode == FAILED_TO_CONNECT_HASH)
          {
            return ConnectorStatus::FAILED_TO_CONNECT;
          }
          else if (hashCode == PENDING_CONFIGURATION_HASH)
          {
            return ConnectorStatus::PENDING_CONFIGURATION;
          }
          else if (hashCode == PENDING_AUTHORIZATION_HASH)
          {
            return ConnectorStatus::PENDING_AUTHORIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorStatus>(hashCode);
          }

          return ConnectorStatus::NOT_SET;
        }

        Aws::String GetNameForConnectorStatus(ConnectorStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectorStatus::NOT_SET:
            return {};
          case ConnectorStatus::CONNECTED:
            return "CONNECTED";
          case ConnectorStatus::FAILED_TO_CONNECT:
            return "FAILED_TO_CONNECT";
          case ConnectorStatus::PENDING_CONFIGURATION:
            return "PENDING_CONFIGURATION";
          case ConnectorStatus::PENDING_AUTHORIZATION:
            return "PENDING_AUTHORIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
