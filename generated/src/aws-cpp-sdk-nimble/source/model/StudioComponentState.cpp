/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentState.h>
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
      namespace StudioComponentStateMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        StudioComponentState GetStudioComponentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StudioComponentState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return StudioComponentState::READY;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return StudioComponentState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StudioComponentState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETED_HASH)
          {
            return StudioComponentState::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StudioComponentState::DELETE_FAILED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StudioComponentState::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return StudioComponentState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioComponentState>(hashCode);
          }

          return StudioComponentState::NOT_SET;
        }

        Aws::String GetNameForStudioComponentState(StudioComponentState enumValue)
        {
          switch(enumValue)
          {
          case StudioComponentState::NOT_SET:
            return {};
          case StudioComponentState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StudioComponentState::READY:
            return "READY";
          case StudioComponentState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case StudioComponentState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StudioComponentState::DELETED:
            return "DELETED";
          case StudioComponentState::DELETE_FAILED:
            return "DELETE_FAILED";
          case StudioComponentState::CREATE_FAILED:
            return "CREATE_FAILED";
          case StudioComponentState::UPDATE_FAILED:
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

      } // namespace StudioComponentStateMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
