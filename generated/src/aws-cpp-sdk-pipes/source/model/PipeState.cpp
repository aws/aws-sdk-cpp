/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace PipeStateMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t START_FAILED_HASH = ConstExprHashingUtils::HashString("START_FAILED");
        static constexpr uint32_t STOP_FAILED_HASH = ConstExprHashingUtils::HashString("STOP_FAILED");


        PipeState GetPipeStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return PipeState::RUNNING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return PipeState::STOPPED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return PipeState::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return PipeState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PipeState::DELETING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return PipeState::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return PipeState::STOPPING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return PipeState::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return PipeState::UPDATE_FAILED;
          }
          else if (hashCode == START_FAILED_HASH)
          {
            return PipeState::START_FAILED;
          }
          else if (hashCode == STOP_FAILED_HASH)
          {
            return PipeState::STOP_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipeState>(hashCode);
          }

          return PipeState::NOT_SET;
        }

        Aws::String GetNameForPipeState(PipeState enumValue)
        {
          switch(enumValue)
          {
          case PipeState::NOT_SET:
            return {};
          case PipeState::RUNNING:
            return "RUNNING";
          case PipeState::STOPPED:
            return "STOPPED";
          case PipeState::CREATING:
            return "CREATING";
          case PipeState::UPDATING:
            return "UPDATING";
          case PipeState::DELETING:
            return "DELETING";
          case PipeState::STARTING:
            return "STARTING";
          case PipeState::STOPPING:
            return "STOPPING";
          case PipeState::CREATE_FAILED:
            return "CREATE_FAILED";
          case PipeState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case PipeState::START_FAILED:
            return "START_FAILED";
          case PipeState::STOP_FAILED:
            return "STOP_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipeStateMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
