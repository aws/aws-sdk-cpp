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

        static constexpr uint32_t INITIALIZED_HASH = ConstExprHashingUtils::HashString("INITIALIZED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        DataLakeStatus GetDataLakeStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
