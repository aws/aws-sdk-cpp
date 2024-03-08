/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisJobStatus.h>
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
      namespace MediaAnalysisJobStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        MediaAnalysisJobStatus GetMediaAnalysisJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return MediaAnalysisJobStatus::CREATED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return MediaAnalysisJobStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return MediaAnalysisJobStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return MediaAnalysisJobStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MediaAnalysisJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaAnalysisJobStatus>(hashCode);
          }

          return MediaAnalysisJobStatus::NOT_SET;
        }

        Aws::String GetNameForMediaAnalysisJobStatus(MediaAnalysisJobStatus enumValue)
        {
          switch(enumValue)
          {
          case MediaAnalysisJobStatus::NOT_SET:
            return {};
          case MediaAnalysisJobStatus::CREATED:
            return "CREATED";
          case MediaAnalysisJobStatus::QUEUED:
            return "QUEUED";
          case MediaAnalysisJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MediaAnalysisJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case MediaAnalysisJobStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaAnalysisJobStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
