/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace ApplicationStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        ApplicationStatus GetApplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ApplicationStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ApplicationStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ApplicationStatus::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ApplicationStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationStatus>(hashCode);
          }

          return ApplicationStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationStatus(ApplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationStatus::NOT_SET:
            return {};
          case ApplicationStatus::CREATING:
            return "CREATING";
          case ApplicationStatus::ACTIVE:
            return "ACTIVE";
          case ApplicationStatus::DELETING:
            return "DELETING";
          case ApplicationStatus::FAILED:
            return "FAILED";
          case ApplicationStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
