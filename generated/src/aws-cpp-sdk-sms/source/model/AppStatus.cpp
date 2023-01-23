/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace AppStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        AppStatus GetAppStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AppStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AppStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AppStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AppStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return AppStatus::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return AppStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppStatus>(hashCode);
          }

          return AppStatus::NOT_SET;
        }

        Aws::String GetNameForAppStatus(AppStatus enumValue)
        {
          switch(enumValue)
          {
          case AppStatus::CREATING:
            return "CREATING";
          case AppStatus::ACTIVE:
            return "ACTIVE";
          case AppStatus::UPDATING:
            return "UPDATING";
          case AppStatus::DELETING:
            return "DELETING";
          case AppStatus::DELETED:
            return "DELETED";
          case AppStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
