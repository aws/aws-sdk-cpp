/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/TransitGatewayRegistrationState.h>
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
      namespace TransitGatewayRegistrationStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        TransitGatewayRegistrationState GetTransitGatewayRegistrationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TransitGatewayRegistrationState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return TransitGatewayRegistrationState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TransitGatewayRegistrationState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return TransitGatewayRegistrationState::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TransitGatewayRegistrationState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayRegistrationState>(hashCode);
          }

          return TransitGatewayRegistrationState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayRegistrationState(TransitGatewayRegistrationState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayRegistrationState::NOT_SET:
            return {};
          case TransitGatewayRegistrationState::PENDING:
            return "PENDING";
          case TransitGatewayRegistrationState::AVAILABLE:
            return "AVAILABLE";
          case TransitGatewayRegistrationState::DELETING:
            return "DELETING";
          case TransitGatewayRegistrationState::DELETED:
            return "DELETED";
          case TransitGatewayRegistrationState::FAILED:
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

      } // namespace TransitGatewayRegistrationStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
