/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/PeriodUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceQuotas
  {
    namespace Model
    {
      namespace PeriodUnitMapper
      {

        static constexpr uint32_t MICROSECOND_HASH = ConstExprHashingUtils::HashString("MICROSECOND");
        static constexpr uint32_t MILLISECOND_HASH = ConstExprHashingUtils::HashString("MILLISECOND");
        static constexpr uint32_t SECOND_HASH = ConstExprHashingUtils::HashString("SECOND");
        static constexpr uint32_t MINUTE_HASH = ConstExprHashingUtils::HashString("MINUTE");
        static constexpr uint32_t HOUR_HASH = ConstExprHashingUtils::HashString("HOUR");
        static constexpr uint32_t DAY_HASH = ConstExprHashingUtils::HashString("DAY");
        static constexpr uint32_t WEEK_HASH = ConstExprHashingUtils::HashString("WEEK");


        PeriodUnit GetPeriodUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MICROSECOND_HASH)
          {
            return PeriodUnit::MICROSECOND;
          }
          else if (hashCode == MILLISECOND_HASH)
          {
            return PeriodUnit::MILLISECOND;
          }
          else if (hashCode == SECOND_HASH)
          {
            return PeriodUnit::SECOND;
          }
          else if (hashCode == MINUTE_HASH)
          {
            return PeriodUnit::MINUTE;
          }
          else if (hashCode == HOUR_HASH)
          {
            return PeriodUnit::HOUR;
          }
          else if (hashCode == DAY_HASH)
          {
            return PeriodUnit::DAY;
          }
          else if (hashCode == WEEK_HASH)
          {
            return PeriodUnit::WEEK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeriodUnit>(hashCode);
          }

          return PeriodUnit::NOT_SET;
        }

        Aws::String GetNameForPeriodUnit(PeriodUnit enumValue)
        {
          switch(enumValue)
          {
          case PeriodUnit::NOT_SET:
            return {};
          case PeriodUnit::MICROSECOND:
            return "MICROSECOND";
          case PeriodUnit::MILLISECOND:
            return "MILLISECOND";
          case PeriodUnit::SECOND:
            return "SECOND";
          case PeriodUnit::MINUTE:
            return "MINUTE";
          case PeriodUnit::HOUR:
            return "HOUR";
          case PeriodUnit::DAY:
            return "DAY";
          case PeriodUnit::WEEK:
            return "WEEK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodUnitMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
