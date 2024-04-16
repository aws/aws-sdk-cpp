/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AccountJiraIssueManagementStatus.h>
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
      namespace AccountJiraIssueManagementStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AccountJiraIssueManagementStatus GetAccountJiraIssueManagementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AccountJiraIssueManagementStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AccountJiraIssueManagementStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountJiraIssueManagementStatus>(hashCode);
          }

          return AccountJiraIssueManagementStatus::NOT_SET;
        }

        Aws::String GetNameForAccountJiraIssueManagementStatus(AccountJiraIssueManagementStatus enumValue)
        {
          switch(enumValue)
          {
          case AccountJiraIssueManagementStatus::NOT_SET:
            return {};
          case AccountJiraIssueManagementStatus::ENABLED:
            return "ENABLED";
          case AccountJiraIssueManagementStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountJiraIssueManagementStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
