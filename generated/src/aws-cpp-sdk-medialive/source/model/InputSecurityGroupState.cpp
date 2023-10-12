/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputSecurityGroupState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputSecurityGroupStateMapper
      {

        static constexpr uint32_t IDLE_HASH = ConstExprHashingUtils::HashString("IDLE");
        static constexpr uint32_t IN_USE_HASH = ConstExprHashingUtils::HashString("IN_USE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        InputSecurityGroupState GetInputSecurityGroupStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDLE_HASH)
          {
            return InputSecurityGroupState::IDLE;
          }
          else if (hashCode == IN_USE_HASH)
          {
            return InputSecurityGroupState::IN_USE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return InputSecurityGroupState::UPDATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return InputSecurityGroupState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputSecurityGroupState>(hashCode);
          }

          return InputSecurityGroupState::NOT_SET;
        }

        Aws::String GetNameForInputSecurityGroupState(InputSecurityGroupState enumValue)
        {
          switch(enumValue)
          {
          case InputSecurityGroupState::NOT_SET:
            return {};
          case InputSecurityGroupState::IDLE:
            return "IDLE";
          case InputSecurityGroupState::IN_USE:
            return "IN_USE";
          case InputSecurityGroupState::UPDATING:
            return "UPDATING";
          case InputSecurityGroupState::DELETED:
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

      } // namespace InputSecurityGroupStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
