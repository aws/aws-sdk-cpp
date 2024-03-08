/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisJobFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace MediaAnalysisJobFailureCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INVALID_S3_OBJECT_HASH = HashingUtils::HashString("INVALID_S3_OBJECT");
        static const int INVALID_MANIFEST_HASH = HashingUtils::HashString("INVALID_MANIFEST");
        static const int INVALID_OUTPUT_CONFIG_HASH = HashingUtils::HashString("INVALID_OUTPUT_CONFIG");
        static const int INVALID_KMS_KEY_HASH = HashingUtils::HashString("INVALID_KMS_KEY");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int RESOURCE_NOT_READY_HASH = HashingUtils::HashString("RESOURCE_NOT_READY");
        static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");


        MediaAnalysisJobFailureCode GetMediaAnalysisJobFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return MediaAnalysisJobFailureCode::INTERNAL_ERROR;
          }
          else if (hashCode == INVALID_S3_OBJECT_HASH)
          {
            return MediaAnalysisJobFailureCode::INVALID_S3_OBJECT;
          }
          else if (hashCode == INVALID_MANIFEST_HASH)
          {
            return MediaAnalysisJobFailureCode::INVALID_MANIFEST;
          }
          else if (hashCode == INVALID_OUTPUT_CONFIG_HASH)
          {
            return MediaAnalysisJobFailureCode::INVALID_OUTPUT_CONFIG;
          }
          else if (hashCode == INVALID_KMS_KEY_HASH)
          {
            return MediaAnalysisJobFailureCode::INVALID_KMS_KEY;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return MediaAnalysisJobFailureCode::ACCESS_DENIED;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return MediaAnalysisJobFailureCode::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == RESOURCE_NOT_READY_HASH)
          {
            return MediaAnalysisJobFailureCode::RESOURCE_NOT_READY;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return MediaAnalysisJobFailureCode::THROTTLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaAnalysisJobFailureCode>(hashCode);
          }

          return MediaAnalysisJobFailureCode::NOT_SET;
        }

        Aws::String GetNameForMediaAnalysisJobFailureCode(MediaAnalysisJobFailureCode enumValue)
        {
          switch(enumValue)
          {
          case MediaAnalysisJobFailureCode::NOT_SET:
            return {};
          case MediaAnalysisJobFailureCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case MediaAnalysisJobFailureCode::INVALID_S3_OBJECT:
            return "INVALID_S3_OBJECT";
          case MediaAnalysisJobFailureCode::INVALID_MANIFEST:
            return "INVALID_MANIFEST";
          case MediaAnalysisJobFailureCode::INVALID_OUTPUT_CONFIG:
            return "INVALID_OUTPUT_CONFIG";
          case MediaAnalysisJobFailureCode::INVALID_KMS_KEY:
            return "INVALID_KMS_KEY";
          case MediaAnalysisJobFailureCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case MediaAnalysisJobFailureCode::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case MediaAnalysisJobFailureCode::RESOURCE_NOT_READY:
            return "RESOURCE_NOT_READY";
          case MediaAnalysisJobFailureCode::THROTTLED:
            return "THROTTLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaAnalysisJobFailureCodeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
