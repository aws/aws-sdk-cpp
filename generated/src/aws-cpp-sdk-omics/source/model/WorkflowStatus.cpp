/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/WorkflowStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace WorkflowStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        WorkflowStatus GetWorkflowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WorkflowStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return WorkflowStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return WorkflowStatus::UPDATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return WorkflowStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WorkflowStatus::FAILED;
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
          case WorkflowStatus::CREATING:
            return "CREATING";
          case WorkflowStatus::ACTIVE:
            return "ACTIVE";
          case WorkflowStatus::UPDATING:
            return "UPDATING";
          case WorkflowStatus::DELETED:
            return "DELETED";
          case WorkflowStatus::FAILED:
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

      } // namespace WorkflowStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
