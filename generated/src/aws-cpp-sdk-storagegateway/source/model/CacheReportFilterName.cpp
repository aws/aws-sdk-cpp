/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CacheReportFilterName.h>
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
      namespace CacheReportFilterNameMapper
      {

        static const int UploadState_HASH = HashingUtils::HashString("UploadState");
        static const int UploadFailureReason_HASH = HashingUtils::HashString("UploadFailureReason");


        CacheReportFilterName GetCacheReportFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UploadState_HASH)
          {
            return CacheReportFilterName::UploadState;
          }
          else if (hashCode == UploadFailureReason_HASH)
          {
            return CacheReportFilterName::UploadFailureReason;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheReportFilterName>(hashCode);
          }

          return CacheReportFilterName::NOT_SET;
        }

        Aws::String GetNameForCacheReportFilterName(CacheReportFilterName enumValue)
        {
          switch(enumValue)
          {
          case CacheReportFilterName::NOT_SET:
            return {};
          case CacheReportFilterName::UploadState:
            return "UploadState";
          case CacheReportFilterName::UploadFailureReason:
            return "UploadFailureReason";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheReportFilterNameMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
