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

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int START_FAILED_HASH = HashingUtils::HashString("START_FAILED");
        static const int STOP_FAILED_HASH = HashingUtils::HashString("STOP_FAILED");


        PipeState GetPipeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
