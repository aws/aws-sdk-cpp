/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/MaintenanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace MaintenanceStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        MaintenanceStatus GetMaintenanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MaintenanceStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return MaintenanceStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MaintenanceStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MaintenanceStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return MaintenanceStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceStatus>(hashCode);
          }

          return MaintenanceStatus::NOT_SET;
        }

        Aws::String GetNameForMaintenanceStatus(MaintenanceStatus enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceStatus::NOT_SET:
            return {};
          case MaintenanceStatus::PENDING:
            return "PENDING";
          case MaintenanceStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MaintenanceStatus::COMPLETED:
            return "COMPLETED";
          case MaintenanceStatus::FAILED:
            return "FAILED";
          case MaintenanceStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
