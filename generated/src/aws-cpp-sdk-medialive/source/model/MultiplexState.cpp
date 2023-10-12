/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexState.h>
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
      namespace MultiplexStateMapper
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


        MultiplexState GetMultiplexStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return MultiplexState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return MultiplexState::CREATE_FAILED;
          }
          else if (hashCode == IDLE_HASH)
          {
            return MultiplexState::IDLE;
          }
          else if (hashCode == STARTING_HASH)
          {
            return MultiplexState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return MultiplexState::RUNNING;
          }
          else if (hashCode == RECOVERING_HASH)
          {
            return MultiplexState::RECOVERING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return MultiplexState::STOPPING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MultiplexState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return MultiplexState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultiplexState>(hashCode);
          }

          return MultiplexState::NOT_SET;
        }

        Aws::String GetNameForMultiplexState(MultiplexState enumValue)
        {
          switch(enumValue)
          {
          case MultiplexState::NOT_SET:
            return {};
          case MultiplexState::CREATING:
            return "CREATING";
          case MultiplexState::CREATE_FAILED:
            return "CREATE_FAILED";
          case MultiplexState::IDLE:
            return "IDLE";
          case MultiplexState::STARTING:
            return "STARTING";
          case MultiplexState::RUNNING:
            return "RUNNING";
          case MultiplexState::RECOVERING:
            return "RECOVERING";
          case MultiplexState::STOPPING:
            return "STOPPING";
          case MultiplexState::DELETING:
            return "DELETING";
          case MultiplexState::DELETED:
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

      } // namespace MultiplexStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
