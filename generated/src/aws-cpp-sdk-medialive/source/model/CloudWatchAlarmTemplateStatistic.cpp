/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CloudWatchAlarmTemplateStatistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace CloudWatchAlarmTemplateStatisticMapper
      {

        static const int SampleCount_HASH = HashingUtils::HashString("SampleCount");
        static const int Average_HASH = HashingUtils::HashString("Average");
        static const int Sum_HASH = HashingUtils::HashString("Sum");
        static const int Minimum_HASH = HashingUtils::HashString("Minimum");
        static const int Maximum_HASH = HashingUtils::HashString("Maximum");


        CloudWatchAlarmTemplateStatistic GetCloudWatchAlarmTemplateStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SampleCount_HASH)
          {
            return CloudWatchAlarmTemplateStatistic::SampleCount;
          }
          else if (hashCode == Average_HASH)
          {
            return CloudWatchAlarmTemplateStatistic::Average;
          }
          else if (hashCode == Sum_HASH)
          {
            return CloudWatchAlarmTemplateStatistic::Sum;
          }
          else if (hashCode == Minimum_HASH)
          {
            return CloudWatchAlarmTemplateStatistic::Minimum;
          }
          else if (hashCode == Maximum_HASH)
          {
            return CloudWatchAlarmTemplateStatistic::Maximum;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchAlarmTemplateStatistic>(hashCode);
          }

          return CloudWatchAlarmTemplateStatistic::NOT_SET;
        }

        Aws::String GetNameForCloudWatchAlarmTemplateStatistic(CloudWatchAlarmTemplateStatistic enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchAlarmTemplateStatistic::NOT_SET:
            return {};
          case CloudWatchAlarmTemplateStatistic::SampleCount:
            return "SampleCount";
          case CloudWatchAlarmTemplateStatistic::Average:
            return "Average";
          case CloudWatchAlarmTemplateStatistic::Sum:
            return "Sum";
          case CloudWatchAlarmTemplateStatistic::Minimum:
            return "Minimum";
          case CloudWatchAlarmTemplateStatistic::Maximum:
            return "Maximum";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchAlarmTemplateStatisticMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
