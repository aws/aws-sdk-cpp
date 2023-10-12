/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ConnectionStateMapper
      {

        static constexpr uint32_t CONNECTED_HASH = ConstExprHashingUtils::HashString("CONNECTED");
        static constexpr uint32_t DISCONNECTED_HASH = ConstExprHashingUtils::HashString("DISCONNECTED");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        ConnectionState GetConnectionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return ConnectionState::CONNECTED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return ConnectionState::DISCONNECTED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ConnectionState::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionState>(hashCode);
          }

          return ConnectionState::NOT_SET;
        }

        Aws::String GetNameForConnectionState(ConnectionState enumValue)
        {
          switch(enumValue)
          {
          case ConnectionState::NOT_SET:
            return {};
          case ConnectionState::CONNECTED:
            return "CONNECTED";
          case ConnectionState::DISCONNECTED:
            return "DISCONNECTED";
          case ConnectionState::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
