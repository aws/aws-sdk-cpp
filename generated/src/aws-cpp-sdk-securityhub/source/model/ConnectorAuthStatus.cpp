/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConnectorAuthStatus.h>
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
      namespace ConnectorAuthStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ConnectorAuthStatus GetConnectorAuthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ConnectorAuthStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConnectorAuthStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorAuthStatus>(hashCode);
          }

          return ConnectorAuthStatus::NOT_SET;
        }

        Aws::String GetNameForConnectorAuthStatus(ConnectorAuthStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectorAuthStatus::NOT_SET:
            return {};
          case ConnectorAuthStatus::ACTIVE:
            return "ACTIVE";
          case ConnectorAuthStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorAuthStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
