/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputState.h>
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
      namespace InputStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DETACHED_HASH = ConstExprHashingUtils::HashString("DETACHED");
        static constexpr uint32_t ATTACHED_HASH = ConstExprHashingUtils::HashString("ATTACHED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        InputState GetInputStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return InputState::CREATING;
          }
          else if (hashCode == DETACHED_HASH)
          {
            return InputState::DETACHED;
          }
          else if (hashCode == ATTACHED_HASH)
          {
            return InputState::ATTACHED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return InputState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return InputState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputState>(hashCode);
          }

          return InputState::NOT_SET;
        }

        Aws::String GetNameForInputState(InputState enumValue)
        {
          switch(enumValue)
          {
          case InputState::NOT_SET:
            return {};
          case InputState::CREATING:
            return "CREATING";
          case InputState::DETACHED:
            return "DETACHED";
          case InputState::ATTACHED:
            return "ATTACHED";
          case InputState::DELETING:
            return "DELETING";
          case InputState::DELETED:
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

      } // namespace InputStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
