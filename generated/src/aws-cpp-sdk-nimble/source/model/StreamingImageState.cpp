/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingImageState.h>
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
      namespace StreamingImageStateMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        StreamingImageState GetStreamingImageStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StreamingImageState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return StreamingImageState::READY;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StreamingImageState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETED_HASH)
          {
            return StreamingImageState::DELETED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return StreamingImageState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return StreamingImageState::UPDATE_FAILED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StreamingImageState::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StreamingImageState::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingImageState>(hashCode);
          }

          return StreamingImageState::NOT_SET;
        }

        Aws::String GetNameForStreamingImageState(StreamingImageState enumValue)
        {
          switch(enumValue)
          {
          case StreamingImageState::NOT_SET:
            return {};
          case StreamingImageState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StreamingImageState::READY:
            return "READY";
          case StreamingImageState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StreamingImageState::DELETED:
            return "DELETED";
          case StreamingImageState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case StreamingImageState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case StreamingImageState::CREATE_FAILED:
            return "CREATE_FAILED";
          case StreamingImageState::DELETE_FAILED:
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

      } // namespace StreamingImageStateMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
