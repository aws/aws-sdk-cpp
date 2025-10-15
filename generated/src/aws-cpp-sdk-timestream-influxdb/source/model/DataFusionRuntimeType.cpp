/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/DataFusionRuntimeType.h>
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
      namespace DataFusionRuntimeTypeMapper
      {

        static const int multi_thread_HASH = HashingUtils::HashString("multi-thread");
        static const int multi_thread_alt_HASH = HashingUtils::HashString("multi-thread-alt");


        DataFusionRuntimeType GetDataFusionRuntimeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == multi_thread_HASH)
          {
            return DataFusionRuntimeType::multi_thread;
          }
          else if (hashCode == multi_thread_alt_HASH)
          {
            return DataFusionRuntimeType::multi_thread_alt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataFusionRuntimeType>(hashCode);
          }

          return DataFusionRuntimeType::NOT_SET;
        }

        Aws::String GetNameForDataFusionRuntimeType(DataFusionRuntimeType enumValue)
        {
          switch(enumValue)
          {
          case DataFusionRuntimeType::NOT_SET:
            return {};
          case DataFusionRuntimeType::multi_thread:
            return "multi-thread";
          case DataFusionRuntimeType::multi_thread_alt:
            return "multi-thread-alt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataFusionRuntimeTypeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
