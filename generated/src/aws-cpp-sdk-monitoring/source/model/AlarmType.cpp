/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/AlarmType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace AlarmTypeMapper
      {

        static const int CompositeAlarm_HASH = HashingUtils::HashString("CompositeAlarm");
        static const int MetricAlarm_HASH = HashingUtils::HashString("MetricAlarm");


        AlarmType GetAlarmTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CompositeAlarm_HASH)
          {
            return AlarmType::CompositeAlarm;
          }
          else if (hashCode == MetricAlarm_HASH)
          {
            return AlarmType::MetricAlarm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlarmType>(hashCode);
          }

          return AlarmType::NOT_SET;
        }

        Aws::String GetNameForAlarmType(AlarmType enumValue)
        {
          switch(enumValue)
          {
          case AlarmType::CompositeAlarm:
            return "CompositeAlarm";
          case AlarmType::MetricAlarm:
            return "MetricAlarm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlarmTypeMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
