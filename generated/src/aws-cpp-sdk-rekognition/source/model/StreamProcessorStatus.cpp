/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace StreamProcessorStatusMapper
      {

        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        StreamProcessorStatus GetStreamProcessorStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return StreamProcessorStatus::STOPPED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return StreamProcessorStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StreamProcessorStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StreamProcessorStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return StreamProcessorStatus::STOPPING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return StreamProcessorStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamProcessorStatus>(hashCode);
          }

          return StreamProcessorStatus::NOT_SET;
        }

        Aws::String GetNameForStreamProcessorStatus(StreamProcessorStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamProcessorStatus::NOT_SET:
            return {};
          case StreamProcessorStatus::STOPPED:
            return "STOPPED";
          case StreamProcessorStatus::STARTING:
            return "STARTING";
          case StreamProcessorStatus::RUNNING:
            return "RUNNING";
          case StreamProcessorStatus::FAILED:
            return "FAILED";
          case StreamProcessorStatus::STOPPING:
            return "STOPPING";
          case StreamProcessorStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamProcessorStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
