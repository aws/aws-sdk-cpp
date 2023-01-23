/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/LastResourceDataSyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace LastResourceDataSyncStatusMapper
      {

        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");


        LastResourceDataSyncStatus GetLastResourceDataSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Successful_HASH)
          {
            return LastResourceDataSyncStatus::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return LastResourceDataSyncStatus::Failed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return LastResourceDataSyncStatus::InProgress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastResourceDataSyncStatus>(hashCode);
          }

          return LastResourceDataSyncStatus::NOT_SET;
        }

        Aws::String GetNameForLastResourceDataSyncStatus(LastResourceDataSyncStatus enumValue)
        {
          switch(enumValue)
          {
          case LastResourceDataSyncStatus::Successful:
            return "Successful";
          case LastResourceDataSyncStatus::Failed:
            return "Failed";
          case LastResourceDataSyncStatus::InProgress:
            return "InProgress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastResourceDataSyncStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
