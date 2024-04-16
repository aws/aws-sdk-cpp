/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CapacityTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace CapacityTaskStatusMapper
      {

        static const int REQUESTED_HASH = HashingUtils::HashString("REQUESTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        CapacityTaskStatus GetCapacityTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUESTED_HASH)
          {
            return CapacityTaskStatus::REQUESTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CapacityTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CapacityTaskStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CapacityTaskStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return CapacityTaskStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityTaskStatus>(hashCode);
          }

          return CapacityTaskStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityTaskStatus(CapacityTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityTaskStatus::NOT_SET:
            return {};
          case CapacityTaskStatus::REQUESTED:
            return "REQUESTED";
          case CapacityTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case CapacityTaskStatus::FAILED:
            return "FAILED";
          case CapacityTaskStatus::COMPLETED:
            return "COMPLETED";
          case CapacityTaskStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityTaskStatusMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
