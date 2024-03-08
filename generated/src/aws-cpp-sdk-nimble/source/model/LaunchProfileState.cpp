/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileState.h>
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
      namespace LaunchProfileStateMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        LaunchProfileState GetLaunchProfileStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return LaunchProfileState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return LaunchProfileState::READY;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return LaunchProfileState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return LaunchProfileState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETED_HASH)
          {
            return LaunchProfileState::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return LaunchProfileState::DELETE_FAILED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return LaunchProfileState::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return LaunchProfileState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchProfileState>(hashCode);
          }

          return LaunchProfileState::NOT_SET;
        }

        Aws::String GetNameForLaunchProfileState(LaunchProfileState enumValue)
        {
          switch(enumValue)
          {
          case LaunchProfileState::NOT_SET:
            return {};
          case LaunchProfileState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case LaunchProfileState::READY:
            return "READY";
          case LaunchProfileState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case LaunchProfileState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case LaunchProfileState::DELETED:
            return "DELETED";
          case LaunchProfileState::DELETE_FAILED:
            return "DELETE_FAILED";
          case LaunchProfileState::CREATE_FAILED:
            return "CREATE_FAILED";
          case LaunchProfileState::UPDATE_FAILED:
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

      } // namespace LaunchProfileStateMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
