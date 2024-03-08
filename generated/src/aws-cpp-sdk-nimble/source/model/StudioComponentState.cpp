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

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        StudioComponentState GetStudioComponentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
