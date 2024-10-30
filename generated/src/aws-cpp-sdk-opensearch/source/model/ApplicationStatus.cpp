/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace ApplicationStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ApplicationStatus GetApplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ApplicationStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ApplicationStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ApplicationStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ApplicationStatus::FAILED;
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
          case ApplicationStatus::UPDATING:
            return "UPDATING";
          case ApplicationStatus::DELETING:
            return "DELETING";
          case ApplicationStatus::ACTIVE:
            return "ACTIVE";
          case ApplicationStatus::FAILED:
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

      } // namespace ApplicationStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
