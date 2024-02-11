/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionState.h>
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
      namespace StreamingSessionStateMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int STOP_IN_PROGRESS_HASH = HashingUtils::HashString("STOP_IN_PROGRESS");
        static const int START_IN_PROGRESS_HASH = HashingUtils::HashString("START_IN_PROGRESS");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STOP_FAILED_HASH = HashingUtils::HashString("STOP_FAILED");
        static const int START_FAILED_HASH = HashingUtils::HashString("START_FAILED");


        StreamingSessionState GetStreamingSessionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StreamingSessionState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StreamingSessionState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return StreamingSessionState::READY;
          }
          else if (hashCode == DELETED_HASH)
          {
            return StreamingSessionState::DELETED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StreamingSessionState::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StreamingSessionState::DELETE_FAILED;
          }
          else if (hashCode == STOP_IN_PROGRESS_HASH)
          {
            return StreamingSessionState::STOP_IN_PROGRESS;
          }
          else if (hashCode == START_IN_PROGRESS_HASH)
          {
            return StreamingSessionState::START_IN_PROGRESS;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return StreamingSessionState::STOPPED;
          }
          else if (hashCode == STOP_FAILED_HASH)
          {
            return StreamingSessionState::STOP_FAILED;
          }
          else if (hashCode == START_FAILED_HASH)
          {
            return StreamingSessionState::START_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingSessionState>(hashCode);
          }

          return StreamingSessionState::NOT_SET;
        }

        Aws::String GetNameForStreamingSessionState(StreamingSessionState enumValue)
        {
          switch(enumValue)
          {
          case StreamingSessionState::NOT_SET:
            return {};
          case StreamingSessionState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StreamingSessionState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StreamingSessionState::READY:
            return "READY";
          case StreamingSessionState::DELETED:
            return "DELETED";
          case StreamingSessionState::CREATE_FAILED:
            return "CREATE_FAILED";
          case StreamingSessionState::DELETE_FAILED:
            return "DELETE_FAILED";
          case StreamingSessionState::STOP_IN_PROGRESS:
            return "STOP_IN_PROGRESS";
          case StreamingSessionState::START_IN_PROGRESS:
            return "START_IN_PROGRESS";
          case StreamingSessionState::STOPPED:
            return "STOPPED";
          case StreamingSessionState::STOP_FAILED:
            return "STOP_FAILED";
          case StreamingSessionState::START_FAILED:
            return "START_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingSessionStateMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
