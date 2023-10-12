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

        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");


        LastResourceDataSyncStatus GetLastResourceDataSyncStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case LastResourceDataSyncStatus::NOT_SET:
            return {};
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
