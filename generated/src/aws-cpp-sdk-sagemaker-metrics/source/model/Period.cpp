/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/Period.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerMetrics
  {
    namespace Model
    {
      namespace PeriodMapper
      {

        static const int OneMinute_HASH = HashingUtils::HashString("OneMinute");
        static const int FiveMinute_HASH = HashingUtils::HashString("FiveMinute");
        static const int OneHour_HASH = HashingUtils::HashString("OneHour");
        static const int IterationNumber_HASH = HashingUtils::HashString("IterationNumber");


        Period GetPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OneMinute_HASH)
          {
            return Period::OneMinute;
          }
          else if (hashCode == FiveMinute_HASH)
          {
            return Period::FiveMinute;
          }
          else if (hashCode == OneHour_HASH)
          {
            return Period::OneHour;
          }
          else if (hashCode == IterationNumber_HASH)
          {
            return Period::IterationNumber;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Period>(hashCode);
          }

          return Period::NOT_SET;
        }

        Aws::String GetNameForPeriod(Period enumValue)
        {
          switch(enumValue)
          {
          case Period::NOT_SET:
            return {};
          case Period::OneMinute:
            return "OneMinute";
          case Period::FiveMinute:
            return "FiveMinute";
          case Period::OneHour:
            return "OneHour";
          case Period::IterationNumber:
            return "IterationNumber";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodMapper
    } // namespace Model
  } // namespace SageMakerMetrics
} // namespace Aws
