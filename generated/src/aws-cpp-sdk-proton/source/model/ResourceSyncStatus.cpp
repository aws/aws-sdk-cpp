/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ResourceSyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace ResourceSyncStatusMapper
      {

        static const int INITIATED_HASH = HashingUtils::HashString("INITIATED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ResourceSyncStatus GetResourceSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIATED_HASH)
          {
            return ResourceSyncStatus::INITIATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ResourceSyncStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ResourceSyncStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceSyncStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSyncStatus>(hashCode);
          }

          return ResourceSyncStatus::NOT_SET;
        }

        Aws::String GetNameForResourceSyncStatus(ResourceSyncStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceSyncStatus::NOT_SET:
            return {};
          case ResourceSyncStatus::INITIATED:
            return "INITIATED";
          case ResourceSyncStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResourceSyncStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ResourceSyncStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSyncStatusMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
