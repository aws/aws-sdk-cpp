/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionStreamState.h>
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
      namespace StreamingSessionStreamStateMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        StreamingSessionStreamState GetStreamingSessionStreamStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return StreamingSessionStreamState::READY;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StreamingSessionStreamState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StreamingSessionStreamState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETED_HASH)
          {
            return StreamingSessionStreamState::DELETED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StreamingSessionStreamState::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StreamingSessionStreamState::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingSessionStreamState>(hashCode);
          }

          return StreamingSessionStreamState::NOT_SET;
        }

        Aws::String GetNameForStreamingSessionStreamState(StreamingSessionStreamState enumValue)
        {
          switch(enumValue)
          {
          case StreamingSessionStreamState::NOT_SET:
            return {};
          case StreamingSessionStreamState::READY:
            return "READY";
          case StreamingSessionStreamState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StreamingSessionStreamState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StreamingSessionStreamState::DELETED:
            return "DELETED";
          case StreamingSessionStreamState::CREATE_FAILED:
            return "CREATE_FAILED";
          case StreamingSessionStreamState::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingSessionStreamStateMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
