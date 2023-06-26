/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/CloudWatchLogsTimeZone.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace CloudWatchLogsTimeZoneMapper
      {

        static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");
        static const int UTC_HASH = HashingUtils::HashString("UTC");


        CloudWatchLogsTimeZone GetCloudWatchLogsTimeZoneForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOCAL_HASH)
          {
            return CloudWatchLogsTimeZone::LOCAL;
          }
          else if (hashCode == UTC_HASH)
          {
            return CloudWatchLogsTimeZone::UTC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchLogsTimeZone>(hashCode);
          }

          return CloudWatchLogsTimeZone::NOT_SET;
        }

        Aws::String GetNameForCloudWatchLogsTimeZone(CloudWatchLogsTimeZone enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchLogsTimeZone::LOCAL:
            return "LOCAL";
          case CloudWatchLogsTimeZone::UTC:
            return "UTC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchLogsTimeZoneMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
