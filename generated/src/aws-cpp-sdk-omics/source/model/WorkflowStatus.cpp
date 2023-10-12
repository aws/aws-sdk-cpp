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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        WorkflowStatus GetWorkflowStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == INACTIVE_HASH)
          {
            return WorkflowStatus::INACTIVE;
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
          case WorkflowStatus::NOT_SET:
            return {};
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
          case WorkflowStatus::INACTIVE:
            return "INACTIVE";
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
