/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/WorkflowStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace WorkflowStatusMapper
      {

        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int NOTIFIED_HASH = HashingUtils::HashString("NOTIFIED");
        static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");
        static const int SUPPRESSED_HASH = HashingUtils::HashString("SUPPRESSED");


        WorkflowStatus GetWorkflowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return WorkflowStatus::NEW_;
          }
          else if (hashCode == NOTIFIED_HASH)
          {
            return WorkflowStatus::NOTIFIED;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return WorkflowStatus::RESOLVED;
          }
          else if (hashCode == SUPPRESSED_HASH)
          {
            return WorkflowStatus::SUPPRESSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowStatus>(hashCode);
          }

          return WorkflowStatus::NOT_SET;
        }

        Aws::String GetNameForWorkflowStatus(WorkflowStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkflowStatus::NEW_:
            return "NEW";
          case WorkflowStatus::NOTIFIED:
            return "NOTIFIED";
          case WorkflowStatus::RESOLVED:
            return "RESOLVED";
          case WorkflowStatus::SUPPRESSED:
            return "SUPPRESSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
