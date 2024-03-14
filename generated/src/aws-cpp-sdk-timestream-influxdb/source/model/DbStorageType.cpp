/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamInfluxDB
  {
    namespace Model
    {
      namespace DbStorageTypeMapper
      {

        static const int InfluxIOIncludedT1_HASH = HashingUtils::HashString("InfluxIOIncludedT1");
        static const int InfluxIOIncludedT2_HASH = HashingUtils::HashString("InfluxIOIncludedT2");
        static const int InfluxIOIncludedT3_HASH = HashingUtils::HashString("InfluxIOIncludedT3");


        DbStorageType GetDbStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InfluxIOIncludedT1_HASH)
          {
            return DbStorageType::InfluxIOIncludedT1;
          }
          else if (hashCode == InfluxIOIncludedT2_HASH)
          {
            return DbStorageType::InfluxIOIncludedT2;
          }
          else if (hashCode == InfluxIOIncludedT3_HASH)
          {
            return DbStorageType::InfluxIOIncludedT3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DbStorageType>(hashCode);
          }

          return DbStorageType::NOT_SET;
        }

        Aws::String GetNameForDbStorageType(DbStorageType enumValue)
        {
          switch(enumValue)
          {
          case DbStorageType::NOT_SET:
            return {};
          case DbStorageType::InfluxIOIncludedT1:
            return "InfluxIOIncludedT1";
          case DbStorageType::InfluxIOIncludedT2:
            return "InfluxIOIncludedT2";
          case DbStorageType::InfluxIOIncludedT3:
            return "InfluxIOIncludedT3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DbStorageTypeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
