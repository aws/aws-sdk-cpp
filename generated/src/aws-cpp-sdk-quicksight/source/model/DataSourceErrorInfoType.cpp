/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSourceErrorInfoType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DataSourceErrorInfoTypeMapper
      {

        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t COPY_SOURCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("COPY_SOURCE_NOT_FOUND");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");
        static constexpr uint32_t ENGINE_VERSION_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("ENGINE_VERSION_NOT_SUPPORTED");
        static constexpr uint32_t UNKNOWN_HOST_HASH = ConstExprHashingUtils::HashString("UNKNOWN_HOST");
        static constexpr uint32_t GENERIC_SQL_FAILURE_HASH = ConstExprHashingUtils::HashString("GENERIC_SQL_FAILURE");
        static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("CONFLICT");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        DataSourceErrorInfoType GetDataSourceErrorInfoTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return DataSourceErrorInfoType::ACCESS_DENIED;
          }
          else if (hashCode == COPY_SOURCE_NOT_FOUND_HASH)
          {
            return DataSourceErrorInfoType::COPY_SOURCE_NOT_FOUND;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return DataSourceErrorInfoType::TIMEOUT;
          }
          else if (hashCode == ENGINE_VERSION_NOT_SUPPORTED_HASH)
          {
            return DataSourceErrorInfoType::ENGINE_VERSION_NOT_SUPPORTED;
          }
          else if (hashCode == UNKNOWN_HOST_HASH)
          {
            return DataSourceErrorInfoType::UNKNOWN_HOST;
          }
          else if (hashCode == GENERIC_SQL_FAILURE_HASH)
          {
            return DataSourceErrorInfoType::GENERIC_SQL_FAILURE;
          }
          else if (hashCode == CONFLICT_HASH)
          {
            return DataSourceErrorInfoType::CONFLICT;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return DataSourceErrorInfoType::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceErrorInfoType>(hashCode);
          }

          return DataSourceErrorInfoType::NOT_SET;
        }

        Aws::String GetNameForDataSourceErrorInfoType(DataSourceErrorInfoType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceErrorInfoType::NOT_SET:
            return {};
          case DataSourceErrorInfoType::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case DataSourceErrorInfoType::COPY_SOURCE_NOT_FOUND:
            return "COPY_SOURCE_NOT_FOUND";
          case DataSourceErrorInfoType::TIMEOUT:
            return "TIMEOUT";
          case DataSourceErrorInfoType::ENGINE_VERSION_NOT_SUPPORTED:
            return "ENGINE_VERSION_NOT_SUPPORTED";
          case DataSourceErrorInfoType::UNKNOWN_HOST:
            return "UNKNOWN_HOST";
          case DataSourceErrorInfoType::GENERIC_SQL_FAILURE:
            return "GENERIC_SQL_FAILURE";
          case DataSourceErrorInfoType::CONFLICT:
            return "CONFLICT";
          case DataSourceErrorInfoType::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceErrorInfoTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
