/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConnectionDirection.h>
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
      namespace ConnectionDirectionMapper
      {

        static const int INBOUND_HASH = HashingUtils::HashString("INBOUND");
        static const int OUTBOUND_HASH = HashingUtils::HashString("OUTBOUND");


        ConnectionDirection GetConnectionDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INBOUND_HASH)
          {
            return ConnectionDirection::INBOUND;
          }
          else if (hashCode == OUTBOUND_HASH)
          {
            return ConnectionDirection::OUTBOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionDirection>(hashCode);
          }

          return ConnectionDirection::NOT_SET;
        }

        Aws::String GetNameForConnectionDirection(ConnectionDirection enumValue)
        {
          switch(enumValue)
          {
          case ConnectionDirection::NOT_SET:
            return {};
          case ConnectionDirection::INBOUND:
            return "INBOUND";
          case ConnectionDirection::OUTBOUND:
            return "OUTBOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionDirectionMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
