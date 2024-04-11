/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CloudWatchAlarmTemplateComparisonOperator.h>
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
      namespace CloudWatchAlarmTemplateComparisonOperatorMapper
      {

        static const int GreaterThanOrEqualToThreshold_HASH = HashingUtils::HashString("GreaterThanOrEqualToThreshold");
        static const int GreaterThanThreshold_HASH = HashingUtils::HashString("GreaterThanThreshold");
        static const int LessThanThreshold_HASH = HashingUtils::HashString("LessThanThreshold");
        static const int LessThanOrEqualToThreshold_HASH = HashingUtils::HashString("LessThanOrEqualToThreshold");


        CloudWatchAlarmTemplateComparisonOperator GetCloudWatchAlarmTemplateComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreaterThanOrEqualToThreshold_HASH)
          {
            return CloudWatchAlarmTemplateComparisonOperator::GreaterThanOrEqualToThreshold;
          }
          else if (hashCode == GreaterThanThreshold_HASH)
          {
            return CloudWatchAlarmTemplateComparisonOperator::GreaterThanThreshold;
          }
          else if (hashCode == LessThanThreshold_HASH)
          {
            return CloudWatchAlarmTemplateComparisonOperator::LessThanThreshold;
          }
          else if (hashCode == LessThanOrEqualToThreshold_HASH)
          {
            return CloudWatchAlarmTemplateComparisonOperator::LessThanOrEqualToThreshold;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchAlarmTemplateComparisonOperator>(hashCode);
          }

          return CloudWatchAlarmTemplateComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForCloudWatchAlarmTemplateComparisonOperator(CloudWatchAlarmTemplateComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchAlarmTemplateComparisonOperator::NOT_SET:
            return {};
          case CloudWatchAlarmTemplateComparisonOperator::GreaterThanOrEqualToThreshold:
            return "GreaterThanOrEqualToThreshold";
          case CloudWatchAlarmTemplateComparisonOperator::GreaterThanThreshold:
            return "GreaterThanThreshold";
          case CloudWatchAlarmTemplateComparisonOperator::LessThanThreshold:
            return "LessThanThreshold";
          case CloudWatchAlarmTemplateComparisonOperator::LessThanOrEqualToThreshold:
            return "LessThanOrEqualToThreshold";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchAlarmTemplateComparisonOperatorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
