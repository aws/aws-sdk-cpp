/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingImageStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace StreamingImageStatusCodeMapper
      {

        static const int STREAMING_IMAGE_CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("STREAMING_IMAGE_CREATE_IN_PROGRESS");
        static const int STREAMING_IMAGE_READY_HASH = HashingUtils::HashString("STREAMING_IMAGE_READY");
        static const int STREAMING_IMAGE_DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("STREAMING_IMAGE_DELETE_IN_PROGRESS");
        static const int STREAMING_IMAGE_DELETED_HASH = HashingUtils::HashString("STREAMING_IMAGE_DELETED");
        static const int STREAMING_IMAGE_UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("STREAMING_IMAGE_UPDATE_IN_PROGRESS");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");


        StreamingImageStatusCode GetStreamingImageStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STREAMING_IMAGE_CREATE_IN_PROGRESS_HASH)
          {
            return StreamingImageStatusCode::STREAMING_IMAGE_CREATE_IN_PROGRESS;
          }
          else if (hashCode == STREAMING_IMAGE_READY_HASH)
          {
            return StreamingImageStatusCode::STREAMING_IMAGE_READY;
          }
          else if (hashCode == STREAMING_IMAGE_DELETE_IN_PROGRESS_HASH)
          {
            return StreamingImageStatusCode::STREAMING_IMAGE_DELETE_IN_PROGRESS;
          }
          else if (hashCode == STREAMING_IMAGE_DELETED_HASH)
          {
            return StreamingImageStatusCode::STREAMING_IMAGE_DELETED;
          }
          else if (hashCode == STREAMING_IMAGE_UPDATE_IN_PROGRESS_HASH)
          {
            return StreamingImageStatusCode::STREAMING_IMAGE_UPDATE_IN_PROGRESS;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return StreamingImageStatusCode::INTERNAL_ERROR;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return StreamingImageStatusCode::ACCESS_DENIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingImageStatusCode>(hashCode);
          }

          return StreamingImageStatusCode::NOT_SET;
        }

        Aws::String GetNameForStreamingImageStatusCode(StreamingImageStatusCode enumValue)
        {
          switch(enumValue)
          {
          case StreamingImageStatusCode::NOT_SET:
            return {};
          case StreamingImageStatusCode::STREAMING_IMAGE_CREATE_IN_PROGRESS:
            return "STREAMING_IMAGE_CREATE_IN_PROGRESS";
          case StreamingImageStatusCode::STREAMING_IMAGE_READY:
            return "STREAMING_IMAGE_READY";
          case StreamingImageStatusCode::STREAMING_IMAGE_DELETE_IN_PROGRESS:
            return "STREAMING_IMAGE_DELETE_IN_PROGRESS";
          case StreamingImageStatusCode::STREAMING_IMAGE_DELETED:
            return "STREAMING_IMAGE_DELETED";
          case StreamingImageStatusCode::STREAMING_IMAGE_UPDATE_IN_PROGRESS:
            return "STREAMING_IMAGE_UPDATE_IN_PROGRESS";
          case StreamingImageStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case StreamingImageStatusCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingImageStatusCodeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
