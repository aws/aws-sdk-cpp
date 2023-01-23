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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int RECOVERING_HASH = HashingUtils::HashString("RECOVERING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        MultiplexState GetMultiplexStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
