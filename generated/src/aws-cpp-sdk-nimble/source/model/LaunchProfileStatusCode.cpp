/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileStatusCode.h>
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
      namespace LaunchProfileStatusCodeMapper
      {

        static const int LAUNCH_PROFILE_CREATED_HASH = HashingUtils::HashString("LAUNCH_PROFILE_CREATED");
        static const int LAUNCH_PROFILE_UPDATED_HASH = HashingUtils::HashString("LAUNCH_PROFILE_UPDATED");
        static const int LAUNCH_PROFILE_DELETED_HASH = HashingUtils::HashString("LAUNCH_PROFILE_DELETED");
        static const int LAUNCH_PROFILE_CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("LAUNCH_PROFILE_CREATE_IN_PROGRESS");
        static const int LAUNCH_PROFILE_UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("LAUNCH_PROFILE_UPDATE_IN_PROGRESS");
        static const int LAUNCH_PROFILE_DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("LAUNCH_PROFILE_DELETE_IN_PROGRESS");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int STREAMING_IMAGE_NOT_FOUND_HASH = HashingUtils::HashString("STREAMING_IMAGE_NOT_FOUND");
        static const int STREAMING_IMAGE_NOT_READY_HASH = HashingUtils::HashString("STREAMING_IMAGE_NOT_READY");
        static const int LAUNCH_PROFILE_WITH_STREAM_SESSIONS_NOT_DELETED_HASH = HashingUtils::HashString("LAUNCH_PROFILE_WITH_STREAM_SESSIONS_NOT_DELETED");
        static const int ENCRYPTION_KEY_ACCESS_DENIED_HASH = HashingUtils::HashString("ENCRYPTION_KEY_ACCESS_DENIED");
        static const int ENCRYPTION_KEY_NOT_FOUND_HASH = HashingUtils::HashString("ENCRYPTION_KEY_NOT_FOUND");
        static const int INVALID_SUBNETS_PROVIDED_HASH = HashingUtils::HashString("INVALID_SUBNETS_PROVIDED");
        static const int INVALID_INSTANCE_TYPES_PROVIDED_HASH = HashingUtils::HashString("INVALID_INSTANCE_TYPES_PROVIDED");
        static const int INVALID_SUBNETS_COMBINATION_HASH = HashingUtils::HashString("INVALID_SUBNETS_COMBINATION");


        LaunchProfileStatusCode GetLaunchProfileStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAUNCH_PROFILE_CREATED_HASH)
          {
            return LaunchProfileStatusCode::LAUNCH_PROFILE_CREATED;
          }
          else if (hashCode == LAUNCH_PROFILE_UPDATED_HASH)
          {
            return LaunchProfileStatusCode::LAUNCH_PROFILE_UPDATED;
          }
          else if (hashCode == LAUNCH_PROFILE_DELETED_HASH)
          {
            return LaunchProfileStatusCode::LAUNCH_PROFILE_DELETED;
          }
          else if (hashCode == LAUNCH_PROFILE_CREATE_IN_PROGRESS_HASH)
          {
            return LaunchProfileStatusCode::LAUNCH_PROFILE_CREATE_IN_PROGRESS;
          }
          else if (hashCode == LAUNCH_PROFILE_UPDATE_IN_PROGRESS_HASH)
          {
            return LaunchProfileStatusCode::LAUNCH_PROFILE_UPDATE_IN_PROGRESS;
          }
          else if (hashCode == LAUNCH_PROFILE_DELETE_IN_PROGRESS_HASH)
          {
            return LaunchProfileStatusCode::LAUNCH_PROFILE_DELETE_IN_PROGRESS;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return LaunchProfileStatusCode::INTERNAL_ERROR;
          }
          else if (hashCode == STREAMING_IMAGE_NOT_FOUND_HASH)
          {
            return LaunchProfileStatusCode::STREAMING_IMAGE_NOT_FOUND;
          }
          else if (hashCode == STREAMING_IMAGE_NOT_READY_HASH)
          {
            return LaunchProfileStatusCode::STREAMING_IMAGE_NOT_READY;
          }
          else if (hashCode == LAUNCH_PROFILE_WITH_STREAM_SESSIONS_NOT_DELETED_HASH)
          {
            return LaunchProfileStatusCode::LAUNCH_PROFILE_WITH_STREAM_SESSIONS_NOT_DELETED;
          }
          else if (hashCode == ENCRYPTION_KEY_ACCESS_DENIED_HASH)
          {
            return LaunchProfileStatusCode::ENCRYPTION_KEY_ACCESS_DENIED;
          }
          else if (hashCode == ENCRYPTION_KEY_NOT_FOUND_HASH)
          {
            return LaunchProfileStatusCode::ENCRYPTION_KEY_NOT_FOUND;
          }
          else if (hashCode == INVALID_SUBNETS_PROVIDED_HASH)
          {
            return LaunchProfileStatusCode::INVALID_SUBNETS_PROVIDED;
          }
          else if (hashCode == INVALID_INSTANCE_TYPES_PROVIDED_HASH)
          {
            return LaunchProfileStatusCode::INVALID_INSTANCE_TYPES_PROVIDED;
          }
          else if (hashCode == INVALID_SUBNETS_COMBINATION_HASH)
          {
            return LaunchProfileStatusCode::INVALID_SUBNETS_COMBINATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchProfileStatusCode>(hashCode);
          }

          return LaunchProfileStatusCode::NOT_SET;
        }

        Aws::String GetNameForLaunchProfileStatusCode(LaunchProfileStatusCode enumValue)
        {
          switch(enumValue)
          {
          case LaunchProfileStatusCode::LAUNCH_PROFILE_CREATED:
            return "LAUNCH_PROFILE_CREATED";
          case LaunchProfileStatusCode::LAUNCH_PROFILE_UPDATED:
            return "LAUNCH_PROFILE_UPDATED";
          case LaunchProfileStatusCode::LAUNCH_PROFILE_DELETED:
            return "LAUNCH_PROFILE_DELETED";
          case LaunchProfileStatusCode::LAUNCH_PROFILE_CREATE_IN_PROGRESS:
            return "LAUNCH_PROFILE_CREATE_IN_PROGRESS";
          case LaunchProfileStatusCode::LAUNCH_PROFILE_UPDATE_IN_PROGRESS:
            return "LAUNCH_PROFILE_UPDATE_IN_PROGRESS";
          case LaunchProfileStatusCode::LAUNCH_PROFILE_DELETE_IN_PROGRESS:
            return "LAUNCH_PROFILE_DELETE_IN_PROGRESS";
          case LaunchProfileStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case LaunchProfileStatusCode::STREAMING_IMAGE_NOT_FOUND:
            return "STREAMING_IMAGE_NOT_FOUND";
          case LaunchProfileStatusCode::STREAMING_IMAGE_NOT_READY:
            return "STREAMING_IMAGE_NOT_READY";
          case LaunchProfileStatusCode::LAUNCH_PROFILE_WITH_STREAM_SESSIONS_NOT_DELETED:
            return "LAUNCH_PROFILE_WITH_STREAM_SESSIONS_NOT_DELETED";
          case LaunchProfileStatusCode::ENCRYPTION_KEY_ACCESS_DENIED:
            return "ENCRYPTION_KEY_ACCESS_DENIED";
          case LaunchProfileStatusCode::ENCRYPTION_KEY_NOT_FOUND:
            return "ENCRYPTION_KEY_NOT_FOUND";
          case LaunchProfileStatusCode::INVALID_SUBNETS_PROVIDED:
            return "INVALID_SUBNETS_PROVIDED";
          case LaunchProfileStatusCode::INVALID_INSTANCE_TYPES_PROVIDED:
            return "INVALID_INSTANCE_TYPES_PROVIDED";
          case LaunchProfileStatusCode::INVALID_SUBNETS_COMBINATION:
            return "INVALID_SUBNETS_COMBINATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchProfileStatusCodeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
