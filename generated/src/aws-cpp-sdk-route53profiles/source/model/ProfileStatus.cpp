/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/ProfileStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Profiles
  {
    namespace Model
    {
      namespace ProfileStatusMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ProfileStatus GetProfileStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return ProfileStatus::COMPLETE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ProfileStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ProfileStatus::UPDATING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ProfileStatus::CREATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ProfileStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ProfileStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfileStatus>(hashCode);
          }

          return ProfileStatus::NOT_SET;
        }

        Aws::String GetNameForProfileStatus(ProfileStatus enumValue)
        {
          switch(enumValue)
          {
          case ProfileStatus::NOT_SET:
            return {};
          case ProfileStatus::COMPLETE:
            return "COMPLETE";
          case ProfileStatus::DELETING:
            return "DELETING";
          case ProfileStatus::UPDATING:
            return "UPDATING";
          case ProfileStatus::CREATING:
            return "CREATING";
          case ProfileStatus::DELETED:
            return "DELETED";
          case ProfileStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileStatusMapper
    } // namespace Model
  } // namespace Route53Profiles
} // namespace Aws
