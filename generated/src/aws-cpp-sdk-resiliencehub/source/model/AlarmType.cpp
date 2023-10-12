/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AlarmType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace AlarmTypeMapper
      {

        static constexpr uint32_t Metric_HASH = ConstExprHashingUtils::HashString("Metric");
        static constexpr uint32_t Composite_HASH = ConstExprHashingUtils::HashString("Composite");
        static constexpr uint32_t Canary_HASH = ConstExprHashingUtils::HashString("Canary");
        static constexpr uint32_t Logs_HASH = ConstExprHashingUtils::HashString("Logs");
        static constexpr uint32_t Event_HASH = ConstExprHashingUtils::HashString("Event");


        AlarmType GetAlarmTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Metric_HASH)
          {
            return AlarmType::Metric;
          }
          else if (hashCode == Composite_HASH)
          {
            return AlarmType::Composite;
          }
          else if (hashCode == Canary_HASH)
          {
            return AlarmType::Canary;
          }
          else if (hashCode == Logs_HASH)
          {
            return AlarmType::Logs;
          }
          else if (hashCode == Event_HASH)
          {
            return AlarmType::Event;
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
          case AlarmType::Metric:
            return "Metric";
          case AlarmType::Composite:
            return "Composite";
          case AlarmType::Canary:
            return "Canary";
          case AlarmType::Logs:
            return "Logs";
          case AlarmType::Event:
            return "Event";
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
  } // namespace ResilienceHub
} // namespace Aws
