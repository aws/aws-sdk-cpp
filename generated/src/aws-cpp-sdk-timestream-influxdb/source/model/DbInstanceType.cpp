/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/DbInstanceType.h>
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
      namespace DbInstanceTypeMapper
      {

        static const int db_influx_medium_HASH = HashingUtils::HashString("db.influx.medium");
        static const int db_influx_large_HASH = HashingUtils::HashString("db.influx.large");
        static const int db_influx_xlarge_HASH = HashingUtils::HashString("db.influx.xlarge");
        static const int db_influx_2xlarge_HASH = HashingUtils::HashString("db.influx.2xlarge");
        static const int db_influx_4xlarge_HASH = HashingUtils::HashString("db.influx.4xlarge");
        static const int db_influx_8xlarge_HASH = HashingUtils::HashString("db.influx.8xlarge");
        static const int db_influx_12xlarge_HASH = HashingUtils::HashString("db.influx.12xlarge");
        static const int db_influx_16xlarge_HASH = HashingUtils::HashString("db.influx.16xlarge");
        static const int db_influx_24xlarge_HASH = HashingUtils::HashString("db.influx.24xlarge");


        DbInstanceType GetDbInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == db_influx_medium_HASH)
          {
            return DbInstanceType::db_influx_medium;
          }
          else if (hashCode == db_influx_large_HASH)
          {
            return DbInstanceType::db_influx_large;
          }
          else if (hashCode == db_influx_xlarge_HASH)
          {
            return DbInstanceType::db_influx_xlarge;
          }
          else if (hashCode == db_influx_2xlarge_HASH)
          {
            return DbInstanceType::db_influx_2xlarge;
          }
          else if (hashCode == db_influx_4xlarge_HASH)
          {
            return DbInstanceType::db_influx_4xlarge;
          }
          else if (hashCode == db_influx_8xlarge_HASH)
          {
            return DbInstanceType::db_influx_8xlarge;
          }
          else if (hashCode == db_influx_12xlarge_HASH)
          {
            return DbInstanceType::db_influx_12xlarge;
          }
          else if (hashCode == db_influx_16xlarge_HASH)
          {
            return DbInstanceType::db_influx_16xlarge;
          }
          else if (hashCode == db_influx_24xlarge_HASH)
          {
            return DbInstanceType::db_influx_24xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DbInstanceType>(hashCode);
          }

          return DbInstanceType::NOT_SET;
        }

        Aws::String GetNameForDbInstanceType(DbInstanceType enumValue)
        {
          switch(enumValue)
          {
          case DbInstanceType::NOT_SET:
            return {};
          case DbInstanceType::db_influx_medium:
            return "db.influx.medium";
          case DbInstanceType::db_influx_large:
            return "db.influx.large";
          case DbInstanceType::db_influx_xlarge:
            return "db.influx.xlarge";
          case DbInstanceType::db_influx_2xlarge:
            return "db.influx.2xlarge";
          case DbInstanceType::db_influx_4xlarge:
            return "db.influx.4xlarge";
          case DbInstanceType::db_influx_8xlarge:
            return "db.influx.8xlarge";
          case DbInstanceType::db_influx_12xlarge:
            return "db.influx.12xlarge";
          case DbInstanceType::db_influx_16xlarge:
            return "db.influx.16xlarge";
          case DbInstanceType::db_influx_24xlarge:
            return "db.influx.24xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DbInstanceTypeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
