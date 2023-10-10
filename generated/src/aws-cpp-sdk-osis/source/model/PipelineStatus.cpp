/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/PipelineStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OSIS
  {
    namespace Model
    {
      namespace PipelineStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int START_FAILED_HASH = HashingUtils::HashString("START_FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        PipelineStatus GetPipelineStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return PipelineStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return PipelineStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return PipelineStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PipelineStatus::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return PipelineStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return PipelineStatus::UPDATE_FAILED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return PipelineStatus::STARTING;
          }
          else if (hashCode == START_FAILED_HASH)
          {
            return PipelineStatus::START_FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return PipelineStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return PipelineStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineStatus>(hashCode);
          }

          return PipelineStatus::NOT_SET;
        }

        Aws::String GetNameForPipelineStatus(PipelineStatus enumValue)
        {
          switch(enumValue)
          {
          case PipelineStatus::NOT_SET:
            return {};
          case PipelineStatus::CREATING:
            return "CREATING";
          case PipelineStatus::ACTIVE:
            return "ACTIVE";
          case PipelineStatus::UPDATING:
            return "UPDATING";
          case PipelineStatus::DELETING:
            return "DELETING";
          case PipelineStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case PipelineStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case PipelineStatus::STARTING:
            return "STARTING";
          case PipelineStatus::START_FAILED:
            return "START_FAILED";
          case PipelineStatus::STOPPING:
            return "STOPPING";
          case PipelineStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineStatusMapper
    } // namespace Model
  } // namespace OSIS
} // namespace Aws
