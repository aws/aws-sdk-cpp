/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionStreamStatusCode.h>
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
      namespace StreamingSessionStreamStatusCodeMapper
      {

        static const int STREAM_CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("STREAM_CREATE_IN_PROGRESS");
        static const int STREAM_READY_HASH = HashingUtils::HashString("STREAM_READY");
        static const int STREAM_DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("STREAM_DELETE_IN_PROGRESS");
        static const int STREAM_DELETED_HASH = HashingUtils::HashString("STREAM_DELETED");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int NETWORK_CONNECTION_ERROR_HASH = HashingUtils::HashString("NETWORK_CONNECTION_ERROR");


        StreamingSessionStreamStatusCode GetStreamingSessionStreamStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STREAM_CREATE_IN_PROGRESS_HASH)
          {
            return StreamingSessionStreamStatusCode::STREAM_CREATE_IN_PROGRESS;
          }
          else if (hashCode == STREAM_READY_HASH)
          {
            return StreamingSessionStreamStatusCode::STREAM_READY;
          }
          else if (hashCode == STREAM_DELETE_IN_PROGRESS_HASH)
          {
            return StreamingSessionStreamStatusCode::STREAM_DELETE_IN_PROGRESS;
          }
          else if (hashCode == STREAM_DELETED_HASH)
          {
            return StreamingSessionStreamStatusCode::STREAM_DELETED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return StreamingSessionStreamStatusCode::INTERNAL_ERROR;
          }
          else if (hashCode == NETWORK_CONNECTION_ERROR_HASH)
          {
            return StreamingSessionStreamStatusCode::NETWORK_CONNECTION_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingSessionStreamStatusCode>(hashCode);
          }

          return StreamingSessionStreamStatusCode::NOT_SET;
        }

        Aws::String GetNameForStreamingSessionStreamStatusCode(StreamingSessionStreamStatusCode enumValue)
        {
          switch(enumValue)
          {
          case StreamingSessionStreamStatusCode::NOT_SET:
            return {};
          case StreamingSessionStreamStatusCode::STREAM_CREATE_IN_PROGRESS:
            return "STREAM_CREATE_IN_PROGRESS";
          case StreamingSessionStreamStatusCode::STREAM_READY:
            return "STREAM_READY";
          case StreamingSessionStreamStatusCode::STREAM_DELETE_IN_PROGRESS:
            return "STREAM_DELETE_IN_PROGRESS";
          case StreamingSessionStreamStatusCode::STREAM_DELETED:
            return "STREAM_DELETED";
          case StreamingSessionStreamStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case StreamingSessionStreamStatusCode::NETWORK_CONNECTION_ERROR:
            return "NETWORK_CONNECTION_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingSessionStreamStatusCodeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
