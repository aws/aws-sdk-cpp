/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/LastSyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace LastSyncStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LastSyncStatus GetLastSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return LastSyncStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LastSyncStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastSyncStatus>(hashCode);
          }

          return LastSyncStatus::NOT_SET;
        }

        Aws::String GetNameForLastSyncStatus(LastSyncStatus enumValue)
        {
          switch(enumValue)
          {
          case LastSyncStatus::SUCCEEDED:
            return "SUCCEEDED";
          case LastSyncStatus::FAILED:
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

      } // namespace LastSyncStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
