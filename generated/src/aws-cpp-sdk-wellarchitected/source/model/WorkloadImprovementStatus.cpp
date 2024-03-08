/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadImprovementStatus.h>
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
      namespace WorkloadImprovementStatusMapper
      {

        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int RISK_ACKNOWLEDGED_HASH = HashingUtils::HashString("RISK_ACKNOWLEDGED");


        WorkloadImprovementStatus GetWorkloadImprovementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_APPLICABLE_HASH)
          {
            return WorkloadImprovementStatus::NOT_APPLICABLE;
          }
          else if (hashCode == NOT_STARTED_HASH)
          {
            return WorkloadImprovementStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return WorkloadImprovementStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return WorkloadImprovementStatus::COMPLETE;
          }
          else if (hashCode == RISK_ACKNOWLEDGED_HASH)
          {
            return WorkloadImprovementStatus::RISK_ACKNOWLEDGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadImprovementStatus>(hashCode);
          }

          return WorkloadImprovementStatus::NOT_SET;
        }

        Aws::String GetNameForWorkloadImprovementStatus(WorkloadImprovementStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkloadImprovementStatus::NOT_SET:
            return {};
          case WorkloadImprovementStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case WorkloadImprovementStatus::NOT_STARTED:
            return "NOT_STARTED";
          case WorkloadImprovementStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case WorkloadImprovementStatus::COMPLETE:
            return "COMPLETE";
          case WorkloadImprovementStatus::RISK_ACKNOWLEDGED:
            return "RISK_ACKNOWLEDGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkloadImprovementStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
