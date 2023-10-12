/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/BackupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorksCM
  {
    namespace Model
    {
      namespace BackupStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t OK_HASH = ConstExprHashingUtils::HashString("OK");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        BackupStatus GetBackupStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return BackupStatus::IN_PROGRESS;
          }
          else if (hashCode == OK_HASH)
          {
            return BackupStatus::OK;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BackupStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return BackupStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupStatus>(hashCode);
          }

          return BackupStatus::NOT_SET;
        }

        Aws::String GetNameForBackupStatus(BackupStatus enumValue)
        {
          switch(enumValue)
          {
          case BackupStatus::NOT_SET:
            return {};
          case BackupStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case BackupStatus::OK:
            return "OK";
          case BackupStatus::FAILED:
            return "FAILED";
          case BackupStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupStatusMapper
    } // namespace Model
  } // namespace OpsWorksCM
} // namespace Aws
