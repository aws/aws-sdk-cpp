/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioStatusCode.h>
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
      namespace StudioStatusCodeMapper
      {

        static constexpr uint32_t STUDIO_CREATED_HASH = ConstExprHashingUtils::HashString("STUDIO_CREATED");
        static constexpr uint32_t STUDIO_DELETED_HASH = ConstExprHashingUtils::HashString("STUDIO_DELETED");
        static constexpr uint32_t STUDIO_UPDATED_HASH = ConstExprHashingUtils::HashString("STUDIO_UPDATED");
        static constexpr uint32_t STUDIO_CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STUDIO_CREATE_IN_PROGRESS");
        static constexpr uint32_t STUDIO_UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STUDIO_UPDATE_IN_PROGRESS");
        static constexpr uint32_t STUDIO_DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("STUDIO_DELETE_IN_PROGRESS");
        static constexpr uint32_t STUDIO_WITH_LAUNCH_PROFILES_NOT_DELETED_HASH = ConstExprHashingUtils::HashString("STUDIO_WITH_LAUNCH_PROFILES_NOT_DELETED");
        static constexpr uint32_t STUDIO_WITH_STUDIO_COMPONENTS_NOT_DELETED_HASH = ConstExprHashingUtils::HashString("STUDIO_WITH_STUDIO_COMPONENTS_NOT_DELETED");
        static constexpr uint32_t STUDIO_WITH_STREAMING_IMAGES_NOT_DELETED_HASH = ConstExprHashingUtils::HashString("STUDIO_WITH_STREAMING_IMAGES_NOT_DELETED");
        static constexpr uint32_t AWS_SSO_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("AWS_SSO_NOT_ENABLED");
        static constexpr uint32_t AWS_SSO_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("AWS_SSO_ACCESS_DENIED");
        static constexpr uint32_t ROLE_NOT_OWNED_BY_STUDIO_OWNER_HASH = ConstExprHashingUtils::HashString("ROLE_NOT_OWNED_BY_STUDIO_OWNER");
        static constexpr uint32_t ROLE_COULD_NOT_BE_ASSUMED_HASH = ConstExprHashingUtils::HashString("ROLE_COULD_NOT_BE_ASSUMED");
        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t ENCRYPTION_KEY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ENCRYPTION_KEY_NOT_FOUND");
        static constexpr uint32_t ENCRYPTION_KEY_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ENCRYPTION_KEY_ACCESS_DENIED");
        static constexpr uint32_t AWS_SSO_CONFIGURATION_REPAIRED_HASH = ConstExprHashingUtils::HashString("AWS_SSO_CONFIGURATION_REPAIRED");
        static constexpr uint32_t AWS_SSO_CONFIGURATION_REPAIR_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("AWS_SSO_CONFIGURATION_REPAIR_IN_PROGRESS");
        static constexpr uint32_t AWS_STS_REGION_DISABLED_HASH = ConstExprHashingUtils::HashString("AWS_STS_REGION_DISABLED");


        StudioStatusCode GetStudioStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STUDIO_CREATED_HASH)
          {
            return StudioStatusCode::STUDIO_CREATED;
          }
          else if (hashCode == STUDIO_DELETED_HASH)
          {
            return StudioStatusCode::STUDIO_DELETED;
          }
          else if (hashCode == STUDIO_UPDATED_HASH)
          {
            return StudioStatusCode::STUDIO_UPDATED;
          }
          else if (hashCode == STUDIO_CREATE_IN_PROGRESS_HASH)
          {
            return StudioStatusCode::STUDIO_CREATE_IN_PROGRESS;
          }
          else if (hashCode == STUDIO_UPDATE_IN_PROGRESS_HASH)
          {
            return StudioStatusCode::STUDIO_UPDATE_IN_PROGRESS;
          }
          else if (hashCode == STUDIO_DELETE_IN_PROGRESS_HASH)
          {
            return StudioStatusCode::STUDIO_DELETE_IN_PROGRESS;
          }
          else if (hashCode == STUDIO_WITH_LAUNCH_PROFILES_NOT_DELETED_HASH)
          {
            return StudioStatusCode::STUDIO_WITH_LAUNCH_PROFILES_NOT_DELETED;
          }
          else if (hashCode == STUDIO_WITH_STUDIO_COMPONENTS_NOT_DELETED_HASH)
          {
            return StudioStatusCode::STUDIO_WITH_STUDIO_COMPONENTS_NOT_DELETED;
          }
          else if (hashCode == STUDIO_WITH_STREAMING_IMAGES_NOT_DELETED_HASH)
          {
            return StudioStatusCode::STUDIO_WITH_STREAMING_IMAGES_NOT_DELETED;
          }
          else if (hashCode == AWS_SSO_NOT_ENABLED_HASH)
          {
            return StudioStatusCode::AWS_SSO_NOT_ENABLED;
          }
          else if (hashCode == AWS_SSO_ACCESS_DENIED_HASH)
          {
            return StudioStatusCode::AWS_SSO_ACCESS_DENIED;
          }
          else if (hashCode == ROLE_NOT_OWNED_BY_STUDIO_OWNER_HASH)
          {
            return StudioStatusCode::ROLE_NOT_OWNED_BY_STUDIO_OWNER;
          }
          else if (hashCode == ROLE_COULD_NOT_BE_ASSUMED_HASH)
          {
            return StudioStatusCode::ROLE_COULD_NOT_BE_ASSUMED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return StudioStatusCode::INTERNAL_ERROR;
          }
          else if (hashCode == ENCRYPTION_KEY_NOT_FOUND_HASH)
          {
            return StudioStatusCode::ENCRYPTION_KEY_NOT_FOUND;
          }
          else if (hashCode == ENCRYPTION_KEY_ACCESS_DENIED_HASH)
          {
            return StudioStatusCode::ENCRYPTION_KEY_ACCESS_DENIED;
          }
          else if (hashCode == AWS_SSO_CONFIGURATION_REPAIRED_HASH)
          {
            return StudioStatusCode::AWS_SSO_CONFIGURATION_REPAIRED;
          }
          else if (hashCode == AWS_SSO_CONFIGURATION_REPAIR_IN_PROGRESS_HASH)
          {
            return StudioStatusCode::AWS_SSO_CONFIGURATION_REPAIR_IN_PROGRESS;
          }
          else if (hashCode == AWS_STS_REGION_DISABLED_HASH)
          {
            return StudioStatusCode::AWS_STS_REGION_DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioStatusCode>(hashCode);
          }

          return StudioStatusCode::NOT_SET;
        }

        Aws::String GetNameForStudioStatusCode(StudioStatusCode enumValue)
        {
          switch(enumValue)
          {
          case StudioStatusCode::NOT_SET:
            return {};
          case StudioStatusCode::STUDIO_CREATED:
            return "STUDIO_CREATED";
          case StudioStatusCode::STUDIO_DELETED:
            return "STUDIO_DELETED";
          case StudioStatusCode::STUDIO_UPDATED:
            return "STUDIO_UPDATED";
          case StudioStatusCode::STUDIO_CREATE_IN_PROGRESS:
            return "STUDIO_CREATE_IN_PROGRESS";
          case StudioStatusCode::STUDIO_UPDATE_IN_PROGRESS:
            return "STUDIO_UPDATE_IN_PROGRESS";
          case StudioStatusCode::STUDIO_DELETE_IN_PROGRESS:
            return "STUDIO_DELETE_IN_PROGRESS";
          case StudioStatusCode::STUDIO_WITH_LAUNCH_PROFILES_NOT_DELETED:
            return "STUDIO_WITH_LAUNCH_PROFILES_NOT_DELETED";
          case StudioStatusCode::STUDIO_WITH_STUDIO_COMPONENTS_NOT_DELETED:
            return "STUDIO_WITH_STUDIO_COMPONENTS_NOT_DELETED";
          case StudioStatusCode::STUDIO_WITH_STREAMING_IMAGES_NOT_DELETED:
            return "STUDIO_WITH_STREAMING_IMAGES_NOT_DELETED";
          case StudioStatusCode::AWS_SSO_NOT_ENABLED:
            return "AWS_SSO_NOT_ENABLED";
          case StudioStatusCode::AWS_SSO_ACCESS_DENIED:
            return "AWS_SSO_ACCESS_DENIED";
          case StudioStatusCode::ROLE_NOT_OWNED_BY_STUDIO_OWNER:
            return "ROLE_NOT_OWNED_BY_STUDIO_OWNER";
          case StudioStatusCode::ROLE_COULD_NOT_BE_ASSUMED:
            return "ROLE_COULD_NOT_BE_ASSUMED";
          case StudioStatusCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case StudioStatusCode::ENCRYPTION_KEY_NOT_FOUND:
            return "ENCRYPTION_KEY_NOT_FOUND";
          case StudioStatusCode::ENCRYPTION_KEY_ACCESS_DENIED:
            return "ENCRYPTION_KEY_ACCESS_DENIED";
          case StudioStatusCode::AWS_SSO_CONFIGURATION_REPAIRED:
            return "AWS_SSO_CONFIGURATION_REPAIRED";
          case StudioStatusCode::AWS_SSO_CONFIGURATION_REPAIR_IN_PROGRESS:
            return "AWS_SSO_CONFIGURATION_REPAIR_IN_PROGRESS";
          case StudioStatusCode::AWS_STS_REGION_DISABLED:
            return "AWS_STS_REGION_DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioStatusCodeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
