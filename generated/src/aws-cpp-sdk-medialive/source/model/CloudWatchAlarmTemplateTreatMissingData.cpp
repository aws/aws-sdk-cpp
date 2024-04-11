/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CloudWatchAlarmTemplateTreatMissingData.h>
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
      namespace CloudWatchAlarmTemplateTreatMissingDataMapper
      {

        static const int notBreaching_HASH = HashingUtils::HashString("notBreaching");
        static const int breaching_HASH = HashingUtils::HashString("breaching");
        static const int ignore_HASH = HashingUtils::HashString("ignore");
        static const int missing_HASH = HashingUtils::HashString("missing");


        CloudWatchAlarmTemplateTreatMissingData GetCloudWatchAlarmTemplateTreatMissingDataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == notBreaching_HASH)
          {
            return CloudWatchAlarmTemplateTreatMissingData::notBreaching;
          }
          else if (hashCode == breaching_HASH)
          {
            return CloudWatchAlarmTemplateTreatMissingData::breaching;
          }
          else if (hashCode == ignore_HASH)
          {
            return CloudWatchAlarmTemplateTreatMissingData::ignore;
          }
          else if (hashCode == missing_HASH)
          {
            return CloudWatchAlarmTemplateTreatMissingData::missing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchAlarmTemplateTreatMissingData>(hashCode);
          }

          return CloudWatchAlarmTemplateTreatMissingData::NOT_SET;
        }

        Aws::String GetNameForCloudWatchAlarmTemplateTreatMissingData(CloudWatchAlarmTemplateTreatMissingData enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchAlarmTemplateTreatMissingData::NOT_SET:
            return {};
          case CloudWatchAlarmTemplateTreatMissingData::notBreaching:
            return "notBreaching";
          case CloudWatchAlarmTemplateTreatMissingData::breaching:
            return "breaching";
          case CloudWatchAlarmTemplateTreatMissingData::ignore:
            return "ignore";
          case CloudWatchAlarmTemplateTreatMissingData::missing:
            return "missing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchAlarmTemplateTreatMissingDataMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
