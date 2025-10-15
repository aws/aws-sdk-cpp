/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/LogFormats.h>
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
      namespace LogFormatsMapper
      {

        static const int full_HASH = HashingUtils::HashString("full");


        LogFormats GetLogFormatsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == full_HASH)
          {
            return LogFormats::full;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogFormats>(hashCode);
          }

          return LogFormats::NOT_SET;
        }

        Aws::String GetNameForLogFormats(LogFormats enumValue)
        {
          switch(enumValue)
          {
          case LogFormats::NOT_SET:
            return {};
          case LogFormats::full:
            return "full";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogFormatsMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
