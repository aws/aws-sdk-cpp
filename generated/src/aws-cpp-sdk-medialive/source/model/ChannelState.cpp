/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ChannelState.h>
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
      namespace ChannelStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t IDLE_HASH = ConstExprHashingUtils::HashString("IDLE");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t RECOVERING_HASH = ConstExprHashingUtils::HashString("RECOVERING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        ChannelState GetChannelStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ChannelState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ChannelState::CREATE_FAILED;
          }
          else if (hashCode == IDLE_HASH)
          {
            return ChannelState::IDLE;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ChannelState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ChannelState::RUNNING;
          }
          else if (hashCode == RECOVERING_HASH)
          {
            return ChannelState::RECOVERING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ChannelState::STOPPING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ChannelState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ChannelState::DELETED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ChannelState::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ChannelState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelState>(hashCode);
          }

          return ChannelState::NOT_SET;
        }

        Aws::String GetNameForChannelState(ChannelState enumValue)
        {
          switch(enumValue)
          {
          case ChannelState::NOT_SET:
            return {};
          case ChannelState::CREATING:
            return "CREATING";
          case ChannelState::CREATE_FAILED:
            return "CREATE_FAILED";
          case ChannelState::IDLE:
            return "IDLE";
          case ChannelState::STARTING:
            return "STARTING";
          case ChannelState::RUNNING:
            return "RUNNING";
          case ChannelState::RECOVERING:
            return "RECOVERING";
          case ChannelState::STOPPING:
            return "STOPPING";
          case ChannelState::DELETING:
            return "DELETING";
          case ChannelState::DELETED:
            return "DELETED";
          case ChannelState::UPDATING:
            return "UPDATING";
          case ChannelState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
