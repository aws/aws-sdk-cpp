/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CacheReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace CacheReportStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        CacheReportStatus GetCacheReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return CacheReportStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CacheReportStatus::COMPLETED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return CacheReportStatus::CANCELED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CacheReportStatus::FAILED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return CacheReportStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheReportStatus>(hashCode);
          }

          return CacheReportStatus::NOT_SET;
        }

        Aws::String GetNameForCacheReportStatus(CacheReportStatus enumValue)
        {
          switch(enumValue)
          {
          case CacheReportStatus::NOT_SET:
            return {};
          case CacheReportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case CacheReportStatus::COMPLETED:
            return "COMPLETED";
          case CacheReportStatus::CANCELED:
            return "CANCELED";
          case CacheReportStatus::FAILED:
            return "FAILED";
          case CacheReportStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheReportStatusMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
