/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace SyncStatusMapper
      {

        static const int SYNC_FAILED_HASH = HashingUtils::HashString("SYNC_FAILED");
        static const int SYNCING_IN_PROGRESS_HASH = HashingUtils::HashString("SYNCING_IN_PROGRESS");
        static const int SYNC_SUCCESS_HASH = HashingUtils::HashString("SYNC_SUCCESS");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");


        SyncStatus GetSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNC_FAILED_HASH)
          {
            return SyncStatus::SYNC_FAILED;
          }
          else if (hashCode == SYNCING_IN_PROGRESS_HASH)
          {
            return SyncStatus::SYNCING_IN_PROGRESS;
          }
          else if (hashCode == SYNC_SUCCESS_HASH)
          {
            return SyncStatus::SYNC_SUCCESS;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return SyncStatus::CREATE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncStatus>(hashCode);
          }

          return SyncStatus::NOT_SET;
        }

        Aws::String GetNameForSyncStatus(SyncStatus enumValue)
        {
          switch(enumValue)
          {
          case SyncStatus::NOT_SET:
            return {};
          case SyncStatus::SYNC_FAILED:
            return "SYNC_FAILED";
          case SyncStatus::SYNCING_IN_PROGRESS:
            return "SYNCING_IN_PROGRESS";
          case SyncStatus::SYNC_SUCCESS:
            return "SYNC_SUCCESS";
          case SyncStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncStatusMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
