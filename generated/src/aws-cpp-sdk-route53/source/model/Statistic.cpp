﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/Statistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace StatisticMapper
      {

        static const int Average_HASH = HashingUtils::HashString("Average");
        static const int Sum_HASH = HashingUtils::HashString("Sum");
        static const int SampleCount_HASH = HashingUtils::HashString("SampleCount");
        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int Minimum_HASH = HashingUtils::HashString("Minimum");


        Statistic GetStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Average_HASH)
          {
            return Statistic::Average;
          }
          else if (hashCode == Sum_HASH)
          {
            return Statistic::Sum;
          }
          else if (hashCode == SampleCount_HASH)
          {
            return Statistic::SampleCount;
          }
          else if (hashCode == Maximum_HASH)
          {
            return Statistic::Maximum;
          }
          else if (hashCode == Minimum_HASH)
          {
            return Statistic::Minimum;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Statistic>(hashCode);
          }

          return Statistic::NOT_SET;
        }

        Aws::String GetNameForStatistic(Statistic enumValue)
        {
          switch(enumValue)
          {
          case Statistic::NOT_SET:
            return {};
          case Statistic::Average:
            return "Average";
          case Statistic::Sum:
            return "Sum";
          case Statistic::SampleCount:
            return "SampleCount";
          case Statistic::Maximum:
            return "Maximum";
          case Statistic::Minimum:
            return "Minimum";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatisticMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
