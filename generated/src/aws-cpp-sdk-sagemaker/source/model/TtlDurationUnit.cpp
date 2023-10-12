/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TtlDurationUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace TtlDurationUnitMapper
      {

        static constexpr uint32_t Seconds_HASH = ConstExprHashingUtils::HashString("Seconds");
        static constexpr uint32_t Minutes_HASH = ConstExprHashingUtils::HashString("Minutes");
        static constexpr uint32_t Hours_HASH = ConstExprHashingUtils::HashString("Hours");
        static constexpr uint32_t Days_HASH = ConstExprHashingUtils::HashString("Days");
        static constexpr uint32_t Weeks_HASH = ConstExprHashingUtils::HashString("Weeks");


        TtlDurationUnit GetTtlDurationUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Seconds_HASH)
          {
            return TtlDurationUnit::Seconds;
          }
          else if (hashCode == Minutes_HASH)
          {
            return TtlDurationUnit::Minutes;
          }
          else if (hashCode == Hours_HASH)
          {
            return TtlDurationUnit::Hours;
          }
          else if (hashCode == Days_HASH)
          {
            return TtlDurationUnit::Days;
          }
          else if (hashCode == Weeks_HASH)
          {
            return TtlDurationUnit::Weeks;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TtlDurationUnit>(hashCode);
          }

          return TtlDurationUnit::NOT_SET;
        }

        Aws::String GetNameForTtlDurationUnit(TtlDurationUnit enumValue)
        {
          switch(enumValue)
          {
          case TtlDurationUnit::NOT_SET:
            return {};
          case TtlDurationUnit::Seconds:
            return "Seconds";
          case TtlDurationUnit::Minutes:
            return "Minutes";
          case TtlDurationUnit::Hours:
            return "Hours";
          case TtlDurationUnit::Days:
            return "Days";
          case TtlDurationUnit::Weeks:
            return "Weeks";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TtlDurationUnitMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
