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

        static constexpr uint32_t CompositeAlarm_HASH = ConstExprHashingUtils::HashString("CompositeAlarm");
        static constexpr uint32_t MetricAlarm_HASH = ConstExprHashingUtils::HashString("MetricAlarm");


        AlarmType GetAlarmTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AlarmType::NOT_SET:
            return {};
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
