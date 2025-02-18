/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CloudWatchAlarmTemplateTargetResourceType.h>
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
      namespace CloudWatchAlarmTemplateTargetResourceTypeMapper
      {

        static const int CLOUDFRONT_DISTRIBUTION_HASH = HashingUtils::HashString("CLOUDFRONT_DISTRIBUTION");
        static const int MEDIALIVE_MULTIPLEX_HASH = HashingUtils::HashString("MEDIALIVE_MULTIPLEX");
        static const int MEDIALIVE_CHANNEL_HASH = HashingUtils::HashString("MEDIALIVE_CHANNEL");
        static const int MEDIALIVE_INPUT_DEVICE_HASH = HashingUtils::HashString("MEDIALIVE_INPUT_DEVICE");
        static const int MEDIAPACKAGE_CHANNEL_HASH = HashingUtils::HashString("MEDIAPACKAGE_CHANNEL");
        static const int MEDIAPACKAGE_ORIGIN_ENDPOINT_HASH = HashingUtils::HashString("MEDIAPACKAGE_ORIGIN_ENDPOINT");
        static const int MEDIACONNECT_FLOW_HASH = HashingUtils::HashString("MEDIACONNECT_FLOW");
        static const int S3_BUCKET_HASH = HashingUtils::HashString("S3_BUCKET");
        static const int MEDIATAILOR_PLAYBACK_CONFIGURATION_HASH = HashingUtils::HashString("MEDIATAILOR_PLAYBACK_CONFIGURATION");


        CloudWatchAlarmTemplateTargetResourceType GetCloudWatchAlarmTemplateTargetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFRONT_DISTRIBUTION_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::CLOUDFRONT_DISTRIBUTION;
          }
          else if (hashCode == MEDIALIVE_MULTIPLEX_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::MEDIALIVE_MULTIPLEX;
          }
          else if (hashCode == MEDIALIVE_CHANNEL_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::MEDIALIVE_CHANNEL;
          }
          else if (hashCode == MEDIALIVE_INPUT_DEVICE_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::MEDIALIVE_INPUT_DEVICE;
          }
          else if (hashCode == MEDIAPACKAGE_CHANNEL_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::MEDIAPACKAGE_CHANNEL;
          }
          else if (hashCode == MEDIAPACKAGE_ORIGIN_ENDPOINT_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::MEDIAPACKAGE_ORIGIN_ENDPOINT;
          }
          else if (hashCode == MEDIACONNECT_FLOW_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::MEDIACONNECT_FLOW;
          }
          else if (hashCode == S3_BUCKET_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::S3_BUCKET;
          }
          else if (hashCode == MEDIATAILOR_PLAYBACK_CONFIGURATION_HASH)
          {
            return CloudWatchAlarmTemplateTargetResourceType::MEDIATAILOR_PLAYBACK_CONFIGURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchAlarmTemplateTargetResourceType>(hashCode);
          }

          return CloudWatchAlarmTemplateTargetResourceType::NOT_SET;
        }

        Aws::String GetNameForCloudWatchAlarmTemplateTargetResourceType(CloudWatchAlarmTemplateTargetResourceType enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchAlarmTemplateTargetResourceType::NOT_SET:
            return {};
          case CloudWatchAlarmTemplateTargetResourceType::CLOUDFRONT_DISTRIBUTION:
            return "CLOUDFRONT_DISTRIBUTION";
          case CloudWatchAlarmTemplateTargetResourceType::MEDIALIVE_MULTIPLEX:
            return "MEDIALIVE_MULTIPLEX";
          case CloudWatchAlarmTemplateTargetResourceType::MEDIALIVE_CHANNEL:
            return "MEDIALIVE_CHANNEL";
          case CloudWatchAlarmTemplateTargetResourceType::MEDIALIVE_INPUT_DEVICE:
            return "MEDIALIVE_INPUT_DEVICE";
          case CloudWatchAlarmTemplateTargetResourceType::MEDIAPACKAGE_CHANNEL:
            return "MEDIAPACKAGE_CHANNEL";
          case CloudWatchAlarmTemplateTargetResourceType::MEDIAPACKAGE_ORIGIN_ENDPOINT:
            return "MEDIAPACKAGE_ORIGIN_ENDPOINT";
          case CloudWatchAlarmTemplateTargetResourceType::MEDIACONNECT_FLOW:
            return "MEDIACONNECT_FLOW";
          case CloudWatchAlarmTemplateTargetResourceType::S3_BUCKET:
            return "S3_BUCKET";
          case CloudWatchAlarmTemplateTargetResourceType::MEDIATAILOR_PLAYBACK_CONFIGURATION:
            return "MEDIATAILOR_PLAYBACK_CONFIGURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchAlarmTemplateTargetResourceTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
