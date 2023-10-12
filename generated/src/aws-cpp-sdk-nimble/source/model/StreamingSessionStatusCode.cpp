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

        static constexpr uint32_t STREAMING_SESSION_READY_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_READY");
        static constexpr uint32_t STREAMING_SESSION_DELETED_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_DELETED");
        static constexpr uint32_t STREAMING_SESSION_CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_CREATE_IN_PROGRESS");
        static constexpr uint32_t STREAMING_SESSION_DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_DELETE_IN_PROGRESS");
        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t INSUFFICIENT_CAPACITY_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_CAPACITY");
        static constexpr uint32_t ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR_HASH = ConstExprHashingUtils::HashString("ACTIVE_DIRECTORY_DOMAIN_JOIN_ERROR");
        static constexpr uint32_t NETWORK_CONNECTION_ERROR_HASH = ConstExprHashingUtils::HashString("NETWORK_CONNECTION_ERROR");
        static constexpr uint32_t INITIALIZATION_SCRIPT_ERROR_HASH = ConstExprHashingUtils::HashString("INITIALIZATION_SCRIPT_ERROR");
        static constexpr uint32_t DECRYPT_STREAMING_IMAGE_ERROR_HASH = ConstExprHashingUtils::HashString("DECRYPT_STREAMING_IMAGE_ERROR");
        static constexpr uint32_t NETWORK_INTERFACE_ERROR_HASH = ConstExprHashingUtils::HashString("NETWORK_INTERFACE_ERROR");
        static constexpr uint32_t STREAMING_SESSION_STOPPED_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_STOPPED");
        static constexpr uint32_t STREAMING_SESSION_STARTED_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_STARTED");
        static constexpr uint32_t STREAMING_SESSION_STOP_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_STOP_IN_PROGRESS");
        static constexpr uint32_t STREAMING_SESSION_START_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STREAMING_SESSION_START_IN_PROGRESS");
        static constexpr uint32_t AMI_VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("AMI_VALIDATION_ERROR");


        StreamingSessionStatusCode GetStreamingSessionStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
