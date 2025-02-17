/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/FailoverMode.h>
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
      namespace FailoverModeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int NO_FAILOVER_HASH = HashingUtils::HashString("NO_FAILOVER");


        FailoverMode GetFailoverModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return FailoverMode::AUTOMATIC;
          }
          else if (hashCode == NO_FAILOVER_HASH)
          {
            return FailoverMode::NO_FAILOVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailoverMode>(hashCode);
          }

          return FailoverMode::NOT_SET;
        }

        Aws::String GetNameForFailoverMode(FailoverMode enumValue)
        {
          switch(enumValue)
          {
          case FailoverMode::NOT_SET:
            return {};
          case FailoverMode::AUTOMATIC:
            return "AUTOMATIC";
          case FailoverMode::NO_FAILOVER:
            return "NO_FAILOVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailoverModeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
