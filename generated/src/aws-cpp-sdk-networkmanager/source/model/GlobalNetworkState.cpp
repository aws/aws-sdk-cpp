/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GlobalNetworkState.h>
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
      namespace GlobalNetworkStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        GlobalNetworkState GetGlobalNetworkStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return GlobalNetworkState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return GlobalNetworkState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GlobalNetworkState::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GlobalNetworkState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalNetworkState>(hashCode);
          }

          return GlobalNetworkState::NOT_SET;
        }

        Aws::String GetNameForGlobalNetworkState(GlobalNetworkState enumValue)
        {
          switch(enumValue)
          {
          case GlobalNetworkState::PENDING:
            return "PENDING";
          case GlobalNetworkState::AVAILABLE:
            return "AVAILABLE";
          case GlobalNetworkState::DELETING:
            return "DELETING";
          case GlobalNetworkState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalNetworkStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
