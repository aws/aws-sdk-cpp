/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadIssueManagementStatus.h>
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
      namespace WorkloadIssueManagementStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int INHERIT_HASH = HashingUtils::HashString("INHERIT");


        WorkloadIssueManagementStatus GetWorkloadIssueManagementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return WorkloadIssueManagementStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return WorkloadIssueManagementStatus::DISABLED;
          }
          else if (hashCode == INHERIT_HASH)
          {
            return WorkloadIssueManagementStatus::INHERIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadIssueManagementStatus>(hashCode);
          }

          return WorkloadIssueManagementStatus::NOT_SET;
        }

        Aws::String GetNameForWorkloadIssueManagementStatus(WorkloadIssueManagementStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkloadIssueManagementStatus::NOT_SET:
            return {};
          case WorkloadIssueManagementStatus::ENABLED:
            return "ENABLED";
          case WorkloadIssueManagementStatus::DISABLED:
            return "DISABLED";
          case WorkloadIssueManagementStatus::INHERIT:
            return "INHERIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkloadIssueManagementStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
