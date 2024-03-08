/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkState.h>
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
      namespace CoreNetworkStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        CoreNetworkState GetCoreNetworkStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CoreNetworkState::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return CoreNetworkState::UPDATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return CoreNetworkState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CoreNetworkState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoreNetworkState>(hashCode);
          }

          return CoreNetworkState::NOT_SET;
        }

        Aws::String GetNameForCoreNetworkState(CoreNetworkState enumValue)
        {
          switch(enumValue)
          {
          case CoreNetworkState::NOT_SET:
            return {};
          case CoreNetworkState::CREATING:
            return "CREATING";
          case CoreNetworkState::UPDATING:
            return "UPDATING";
          case CoreNetworkState::AVAILABLE:
            return "AVAILABLE";
          case CoreNetworkState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoreNetworkStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
