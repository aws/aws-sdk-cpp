/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/PeeringState.h>
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
      namespace PeeringStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        PeeringState GetPeeringStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return PeeringState::CREATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PeeringState::FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return PeeringState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PeeringState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeeringState>(hashCode);
          }

          return PeeringState::NOT_SET;
        }

        Aws::String GetNameForPeeringState(PeeringState enumValue)
        {
          switch(enumValue)
          {
          case PeeringState::NOT_SET:
            return {};
          case PeeringState::CREATING:
            return "CREATING";
          case PeeringState::FAILED:
            return "FAILED";
          case PeeringState::AVAILABLE:
            return "AVAILABLE";
          case PeeringState::DELETING:
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

      } // namespace PeeringStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
