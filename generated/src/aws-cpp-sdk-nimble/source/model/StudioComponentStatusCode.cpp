/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentStatusCode.h>
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
      namespace StudioComponentStatusCodeMapper
      {

        static const int ACTIVE_DIRECTORY_ALREADY_EXISTS_HASH = HashingUtils::HashString("ACTIVE_DIRECTORY_ALREADY_EXISTS");
        static const int STUDIO_COMPONENT_CREATED_HASH = HashingUtils::HashString("STUDIO_COMPONENT_CREATED");
        static const int STUDIO_COMPONENT_UPDATED_HASH = HashingUtils::HashString("STUDIO_COMPONENT_UPDATED");
        static const int STUDIO_COMPONENT_DELETED_HASH = HashingUtils::HashString("STUDIO_COMPONENT_DELETED");
        static const int ENCRYPTION_KEY_ACCESS_DENIED_HASH = HashingUtils::HashString("ENCRYPTION_KEY_ACCESS_DENIED");
        static const int ENCRYPTION_KEY_NOT_FOUND_HASH = HashingUtils::HashString("ENCRYPTION_KEY_NOT_FOUND");
        static const int STUDIO_COMPONENT_CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("STUDIO_COMPONENT_CREATE_IN_PROGRESS");
        static const int STUDIO_COMPONENT_UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("STUDIO_COMPONENT_UPDATE_IN_PROGRESS");
        static const int STUDIO_COMPONENT_DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("STUDIO_COMPONENT_DELETE_IN_PROGRESS");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        StudioComponentStatusCode GetStudioComponentStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_DIRECTORY_ALREADY_EXISTS_HASH)
          {
            return StudioComponentStatusCode::ACTIVE_DIRECTORY_ALREADY_EXISTS;
          }
          else if (hashCode == STUDIO_COMPONENT_CREATED_HASH)
          {
            return StudioComponentStatusCode::STUDIO_COMPONENT_CREATED;
          }
          else if (hashCode == STUDIO_COMPONENT_UPDATED_HASH)
          {
            return StudioComponentStatusCode::STUDIO_COMPONENT_UPDATED;
          }
          else if (hashCode == STUDIO_COMPONENT_DELETED_HASH)
          {
            return StudioComponentStatusCode::STUDIO_COMPONENT_DELETED;
          }
          else if (hashCode == ENCRYPTION_KEY_ACCESS_DENIED_HASH)
          {
            return StudioComponentStatusCode::ENCRYPTION_KEY_ACCESS_DENIED;
          }
          else if (hashCode == ENCRYPTION_KEY_NOT_FOUND_HASH)
          {
            return StudioComponentStatusCode::ENCRYPTION_KEY_NOT_FOUND;
          }
          else if (hashCode == STUDIO_COMPONENT_CREATE_IN_PROGRESS_HASH)
          {
            return StudioComponentStatusCode::STUDIO_COMPONENT_CREATE_IN_PROGRESS;
          }
          else if (hashCode == STUDIO_COMPONENT_UPDATE_IN_PROGRESS_HASH)
          {
            return StudioComponentStatusCode::STUDIO_COMPONENT_UPDATE_IN_PROGRESS;
          }
          else if (hashCode == STUDIO_COMPONENT_DELETE_IN_PROGRESS_HASH)
          {
            return StudioComponentStatusCode::STUDIO_COMPONENT_DELETE_IN_PROGRESS;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return StudioComponentStatusCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioComponentStatusCode>(hashCode);
          }

          return StudioComponentStatusCode::NOT_SET;
        }

        Aws::String GetNameForStudioComponentStatusCode(StudioComponentStatusCode enumValue)
        {
          switch(enumValue)
          {
          case StudioComponentStatusCode::NOT_SET:
            return {};
          case StudioComponentStatusCode::ACTIVE_DIRECTORY_ALREADY_EXISTS:
            return "ACTIVE_DIRECTORY_ALREADY_EXISTS";
          case StudioComponentStatusCode::STUDIO_COMPONENT_CREATED:
            return "STUDIO_COMPONENT_CREATED";
          case StudioComponentStatusCode::STUDIO_COMPONENT_UPDATED:
            return "STUDIO_COMPONENT_UPDATED";
          case StudioComponentStatusCode::STUDIO_COMPONENT_DELETED:
            return "STUDIO_COMPONENT_DELETED";
          case StudioComponentStatusCode::ENCRYPTION_KEY_ACCESS_DENIED:
            return "ENCRYPTION_KEY_ACCESS_DENIED";
          case StudioComponentStatusCode::ENCRYPTION_KEY_NOT_FOUND:
            return "ENCRYPTION_KEY_NOT_FOUND";
          case StudioComponentStatusCode::STUDIO_COMPONENT_CREATE_IN_PROGRESS:
            return "STUDIO_COMPONENT_CREATE_IN_PROGRESS";
          case StudioComponentStatusCode::STUDIO_COMPONENT_UPDATE_IN_PROGRESS:
            return "STUDIO_COMPONENT_UPDATE_IN_PROGRESS";
          case StudioComponentStatusCode::STUDIO_COMPONENT_DELETE_IN_PROGRESS:
            return "STUDIO_COMPONENT_DELETE_IN_PROGRESS";
          case StudioComponentStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioComponentStatusCodeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
