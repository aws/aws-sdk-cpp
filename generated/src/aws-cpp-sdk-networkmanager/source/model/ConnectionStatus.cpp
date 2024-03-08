/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace ConnectionStatusMapper
      {

        static const int UP_HASH = HashingUtils::HashString("UP");
        static const int DOWN_HASH = HashingUtils::HashString("DOWN");


        ConnectionStatus GetConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UP_HASH)
          {
            return ConnectionStatus::UP;
          }
          else if (hashCode == DOWN_HASH)
          {
            return ConnectionStatus::DOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionStatus>(hashCode);
          }

          return ConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForConnectionStatus(ConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectionStatus::NOT_SET:
            return {};
          case ConnectionStatus::UP:
            return "UP";
          case ConnectionStatus::DOWN:
            return "DOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionStatusMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
