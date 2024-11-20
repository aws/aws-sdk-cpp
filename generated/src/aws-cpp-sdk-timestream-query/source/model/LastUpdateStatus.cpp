/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/LastUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace LastUpdateStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        LastUpdateStatus GetLastUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return LastUpdateStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LastUpdateStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return LastUpdateStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastUpdateStatus>(hashCode);
          }

          return LastUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForLastUpdateStatus(LastUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case LastUpdateStatus::NOT_SET:
            return {};
          case LastUpdateStatus::PENDING:
            return "PENDING";
          case LastUpdateStatus::FAILED:
            return "FAILED";
          case LastUpdateStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastUpdateStatusMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
