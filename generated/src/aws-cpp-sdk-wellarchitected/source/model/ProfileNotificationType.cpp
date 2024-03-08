/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileNotificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ProfileNotificationTypeMapper
      {

        static const int PROFILE_ANSWERS_UPDATED_HASH = HashingUtils::HashString("PROFILE_ANSWERS_UPDATED");
        static const int PROFILE_DELETED_HASH = HashingUtils::HashString("PROFILE_DELETED");


        ProfileNotificationType GetProfileNotificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFILE_ANSWERS_UPDATED_HASH)
          {
            return ProfileNotificationType::PROFILE_ANSWERS_UPDATED;
          }
          else if (hashCode == PROFILE_DELETED_HASH)
          {
            return ProfileNotificationType::PROFILE_DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfileNotificationType>(hashCode);
          }

          return ProfileNotificationType::NOT_SET;
        }

        Aws::String GetNameForProfileNotificationType(ProfileNotificationType enumValue)
        {
          switch(enumValue)
          {
          case ProfileNotificationType::NOT_SET:
            return {};
          case ProfileNotificationType::PROFILE_ANSWERS_UPDATED:
            return "PROFILE_ANSWERS_UPDATED";
          case ProfileNotificationType::PROFILE_DELETED:
            return "PROFILE_DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileNotificationTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
