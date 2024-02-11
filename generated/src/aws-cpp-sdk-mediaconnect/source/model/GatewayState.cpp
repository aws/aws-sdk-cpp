/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/GatewayState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace GatewayStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        GatewayState GetGatewayStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return GatewayState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return GatewayState::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GatewayState::UPDATING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return GatewayState::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GatewayState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return GatewayState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayState>(hashCode);
          }

          return GatewayState::NOT_SET;
        }

        Aws::String GetNameForGatewayState(GatewayState enumValue)
        {
          switch(enumValue)
          {
          case GatewayState::NOT_SET:
            return {};
          case GatewayState::CREATING:
            return "CREATING";
          case GatewayState::ACTIVE:
            return "ACTIVE";
          case GatewayState::UPDATING:
            return "UPDATING";
          case GatewayState::ERROR_:
            return "ERROR";
          case GatewayState::DELETING:
            return "DELETING";
          case GatewayState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayStateMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
