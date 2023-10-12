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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        GatewayState GetGatewayStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
