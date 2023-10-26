/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace DataLakeStatusMapper
      {

        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DataLakeStatus GetDataLakeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return DataLakeStatus::INITIALIZED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DataLakeStatus::PENDING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DataLakeStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataLakeStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLakeStatus>(hashCode);
          }

          return DataLakeStatus::NOT_SET;
        }

        Aws::String GetNameForDataLakeStatus(DataLakeStatus enumValue)
        {
          switch(enumValue)
          {
          case DataLakeStatus::NOT_SET:
            return {};
          case DataLakeStatus::INITIALIZED:
            return "INITIALIZED";
          case DataLakeStatus::PENDING:
            return "PENDING";
          case DataLakeStatus::COMPLETED:
            return "COMPLETED";
          case DataLakeStatus::FAILED:
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

      } // namespace DataLakeStatusMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
