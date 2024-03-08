/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UserStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace UserStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");


        UserStatus GetUserStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return UserStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return UserStatus::UPDATING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return UserStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return UserStatus::CREATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserStatus>(hashCode);
          }

          return UserStatus::NOT_SET;
        }

        Aws::String GetNameForUserStatus(UserStatus enumValue)
        {
          switch(enumValue)
          {
          case UserStatus::NOT_SET:
            return {};
          case UserStatus::ACTIVE:
            return "ACTIVE";
          case UserStatus::UPDATING:
            return "UPDATING";
          case UserStatus::CREATING:
            return "CREATING";
          case UserStatus::CREATED:
            return "CREATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
