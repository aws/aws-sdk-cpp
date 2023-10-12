/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static constexpr uint32_t INVITE_HASH = ConstExprHashingUtils::HashString("INVITE");
        static constexpr uint32_t ENABLE_ALL_FEATURES_HASH = ConstExprHashingUtils::HashString("ENABLE_ALL_FEATURES");
        static constexpr uint32_t APPROVE_ALL_FEATURES_HASH = ConstExprHashingUtils::HashString("APPROVE_ALL_FEATURES");
        static constexpr uint32_t ADD_ORGANIZATIONS_SERVICE_LINKED_ROLE_HASH = ConstExprHashingUtils::HashString("ADD_ORGANIZATIONS_SERVICE_LINKED_ROLE");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITE_HASH)
          {
            return ActionType::INVITE;
          }
          else if (hashCode == ENABLE_ALL_FEATURES_HASH)
          {
            return ActionType::ENABLE_ALL_FEATURES;
          }
          else if (hashCode == APPROVE_ALL_FEATURES_HASH)
          {
            return ActionType::APPROVE_ALL_FEATURES;
          }
          else if (hashCode == ADD_ORGANIZATIONS_SERVICE_LINKED_ROLE_HASH)
          {
            return ActionType::ADD_ORGANIZATIONS_SERVICE_LINKED_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::NOT_SET:
            return {};
          case ActionType::INVITE:
            return "INVITE";
          case ActionType::ENABLE_ALL_FEATURES:
            return "ENABLE_ALL_FEATURES";
          case ActionType::APPROVE_ALL_FEATURES:
            return "APPROVE_ALL_FEATURES";
          case ActionType::ADD_ORGANIZATIONS_SERVICE_LINKED_ROLE:
            return "ADD_ORGANIZATIONS_SERVICE_LINKED_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
