/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionStatusCode.h>
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
      namespace StreamingSessionStatusCodeMapper
      {

        static const int STREAMING_SESSION_READY_HASH = HashingUtils::HashString("STREAMING_SESSION_READY");
        static const int STREAMING_SESSION_DELETED_HASH = HashingUtils::HashString("STREAMING_SESSION_DELETED");
        static const int STREAMING_SESSION_CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("STREAMING_SESSION_CREATE_IN_PROGRESS");
        static const int STREAMING_SESSION_DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("STREAMING_SESSION_DELETE_IN_PROGRESS");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INSUFFICIENT_CAPACITY_HASH = HashingUtils::HashString("INSUFFICIENT_CAPACITY");
        static const int ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR_HASH = HashingUtils::HashString("ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR");
        static const int NETWORK_CONNECTION_ERROR_HASH = HashingUtils::HashString("NETWORK_CONNECTION_ERROR");
        static const int INITIALIZATION_SCRIPT_ERROR_HASH = HashingUtils::HashString("INITIALIZATION_SCRIPT_ERROR");
        static const int DECRYPT_STREAMING_IMAGE_ERROR_HASH = HashingUtils::HashString("DECRYPT_STREAMING_IMAGE_ERROR");
        static const int NETWORK_INTERFACE_ERROR_HASH = HashingUtils::HashString("NETWORK_INTERFACE_ERROR");
        static const int STREAMING_SESSION_STOPPED_HASH = HashingUtils::HashString("STREAMING_SESSION_STOPPED");
        static const int STREAMING_SESSION_STARTED_HASH = HashingUtils::HashString("STREAMING_SESSION_STARTED");
        static const int STREAMING_SESSION_STOP_IN_PROGRESS_HASH = HashingUtils::HashString("STREAMING_SESSION_STOP_IN_PROGRESS");
        static const int STREAMING_SESSION_START_IN_PROGRESS_HASH = HashingUtils::HashString("STREAMING_SESSION_START_IN_PROGRESS");
        static const int AMI_VALIDATION_ERROR_HASH = HashingUtils::HashString("AMI_VALIDATION_ERROR");


        StreamingSessionStatusCode GetStreamingSessionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STREAMING_SESSION_READY_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_READY;
          }
          else if (hashCode == STREAMING_SESSION_DELETED_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_DELETED;
          }
          else if (hashCode == STREAMING_SESSION_CREATE_IN_PROGRESS_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_CREATE_IN_PROGRESS;
          }
          else if (hashCode == STREAMING_SESSION_DELETE_IN_PROGRESS_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_DELETE_IN_PROGRESS;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return StreamingSessionStatusCode::INTERNAL_ERROR;
          }
          else if (hashCode == INSUFFICIENT_CAPACITY_HASH)
          {
            return StreamingSessionStatusCode::INSUFFICIENT_CAPACITY;
          }
          else if (hashCode == ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR_HASH)
          {
            return StreamingSessionStatusCode::ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR;
          }
          else if (hashCode == NETWORK_CONNECTION_ERROR_HASH)
          {
            return StreamingSessionStatusCode::NETWORK_CONNECTION_ERROR;
          }
          else if (hashCode == INITIALIZATION_SCRIPT_ERROR_HASH)
          {
            return StreamingSessionStatusCode::INITIALIZATION_SCRIPT_ERROR;
          }
          else if (hashCode == DECRYPT_STREAMING_IMAGE_ERROR_HASH)
          {
            return StreamingSessionStatusCode::DECRYPT_STREAMING_IMAGE_ERROR;
          }
          else if (hashCode == NETWORK_INTERFACE_ERROR_HASH)
          {
            return StreamingSessionStatusCode::NETWORK_INTERFACE_ERROR;
          }
          else if (hashCode == STREAMING_SESSION_STOPPED_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_STOPPED;
          }
          else if (hashCode == STREAMING_SESSION_STARTED_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_STARTED;
          }
          else if (hashCode == STREAMING_SESSION_STOP_IN_PROGRESS_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_STOP_IN_PROGRESS;
          }
          else if (hashCode == STREAMING_SESSION_START_IN_PROGRESS_HASH)
          {
            return StreamingSessionStatusCode::STREAMING_SESSION_START_IN_PROGRESS;
          }
          else if (hashCode == AMI_VALIDATION_ERROR_HASH)
          {
            return StreamingSessionStatusCode::AMI_VALIDATION_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingSessionStatusCode>(hashCode);
          }

          return StreamingSessionStatusCode::NOT_SET;
        }

        Aws::String GetNameForStreamingSessionStatusCode(StreamingSessionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case StreamingSessionStatusCode::NOT_SET:
            return {};
          case StreamingSessionStatusCode::STREAMING_SESSION_READY:
            return "STREAMING_SESSION_READY";
          case StreamingSessionStatusCode::STREAMING_SESSION_DELETED:
            return "STREAMING_SESSION_DELETED";
          case StreamingSessionStatusCode::STREAMING_SESSION_CREATE_IN_PROGRESS:
            return "STREAMING_SESSION_CREATE_IN_PROGRESS";
          case StreamingSessionStatusCode::STREAMING_SESSION_DELETE_IN_PROGRESS:
            return "STREAMING_SESSION_DELETE_IN_PROGRESS";
          case StreamingSessionStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case StreamingSessionStatusCode::INSUFFICIENT_CAPACITY:
            return "INSUFFICIENT_CAPACITY";
          case StreamingSessionStatusCode::ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR:
            return "ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR";
          case StreamingSessionStatusCode::NETWORK_CONNECTION_ERROR:
            return "NETWORK_CONNECTION_ERROR";
          case StreamingSessionStatusCode::INITIALIZATION_SCRIPT_ERROR:
            return "INITIALIZATION_SCRIPT_ERROR";
          case StreamingSessionStatusCode::DECRYPT_STREAMING_IMAGE_ERROR:
            return "DECRYPT_STREAMING_IMAGE_ERROR";
          case StreamingSessionStatusCode::NETWORK_INTERFACE_ERROR:
            return "NETWORK_INTERFACE_ERROR";
          case StreamingSessionStatusCode::STREAMING_SESSION_STOPPED:
            return "STREAMING_SESSION_STOPPED";
          case StreamingSessionStatusCode::STREAMING_SESSION_STARTED:
            return "STREAMING_SESSION_STARTED";
          case StreamingSessionStatusCode::STREAMING_SESSION_STOP_IN_PROGRESS:
            return "STREAMING_SESSION_STOP_IN_PROGRESS";
          case StreamingSessionStatusCode::STREAMING_SESSION_START_IN_PROGRESS:
            return "STREAMING_SESSION_START_IN_PROGRESS";
          case StreamingSessionStatusCode::AMI_VALIDATION_ERROR:
            return "AMI_VALIDATION_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingSessionStatusCodeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
