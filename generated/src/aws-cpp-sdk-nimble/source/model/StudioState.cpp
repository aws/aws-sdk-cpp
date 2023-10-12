/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioState.h>
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
      namespace StudioStateMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        StudioState GetStudioStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StudioState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return StudioState::READY;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return StudioState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StudioState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETED_HASH)
          {
            return StudioState::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StudioState::DELETE_FAILED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StudioState::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return StudioState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioState>(hashCode);
          }

          return StudioState::NOT_SET;
        }

        Aws::String GetNameForStudioState(StudioState enumValue)
        {
          switch(enumValue)
          {
          case StudioState::NOT_SET:
            return {};
          case StudioState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StudioState::READY:
            return "READY";
          case StudioState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case StudioState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StudioState::DELETED:
            return "DELETED";
          case StudioState::DELETE_FAILED:
            return "DELETE_FAILED";
          case StudioState::CREATE_FAILED:
            return "CREATE_FAILED";
          case StudioState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioStateMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
