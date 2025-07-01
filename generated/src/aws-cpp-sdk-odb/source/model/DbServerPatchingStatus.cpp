/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbServerPatchingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace DbServerPatchingStatusMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int MAINTENANCE_IN_PROGRESS_HASH = HashingUtils::HashString("MAINTENANCE_IN_PROGRESS");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");


        DbServerPatchingStatus GetDbServerPatchingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return DbServerPatchingStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DbServerPatchingStatus::FAILED;
          }
          else if (hashCode == MAINTENANCE_IN_PROGRESS_HASH)
          {
            return DbServerPatchingStatus::MAINTENANCE_IN_PROGRESS;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return DbServerPatchingStatus::SCHEDULED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DbServerPatchingStatus>(hashCode);
          }

          return DbServerPatchingStatus::NOT_SET;
        }

        Aws::String GetNameForDbServerPatchingStatus(DbServerPatchingStatus enumValue)
        {
          switch(enumValue)
          {
          case DbServerPatchingStatus::NOT_SET:
            return {};
          case DbServerPatchingStatus::COMPLETE:
            return "COMPLETE";
          case DbServerPatchingStatus::FAILED:
            return "FAILED";
          case DbServerPatchingStatus::MAINTENANCE_IN_PROGRESS:
            return "MAINTENANCE_IN_PROGRESS";
          case DbServerPatchingStatus::SCHEDULED:
            return "SCHEDULED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DbServerPatchingStatusMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
