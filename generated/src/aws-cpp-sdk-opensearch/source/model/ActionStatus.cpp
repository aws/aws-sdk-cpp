/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ActionStatus.h>
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
      namespace ActionStatusMapper
      {

        static constexpr uint32_t PENDING_UPDATE_HASH = ConstExprHashingUtils::HashString("PENDING_UPDATE");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t NOT_ELIGIBLE_HASH = ConstExprHashingUtils::HashString("NOT_ELIGIBLE");
        static constexpr uint32_t ELIGIBLE_HASH = ConstExprHashingUtils::HashString("ELIGIBLE");


        ActionStatus GetActionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_UPDATE_HASH)
          {
            return ActionStatus::PENDING_UPDATE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ActionStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ActionStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ActionStatus::COMPLETED;
          }
          else if (hashCode == NOT_ELIGIBLE_HASH)
          {
            return ActionStatus::NOT_ELIGIBLE;
          }
          else if (hashCode == ELIGIBLE_HASH)
          {
            return ActionStatus::ELIGIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionStatus>(hashCode);
          }

          return ActionStatus::NOT_SET;
        }

        Aws::String GetNameForActionStatus(ActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ActionStatus::NOT_SET:
            return {};
          case ActionStatus::PENDING_UPDATE:
            return "PENDING_UPDATE";
          case ActionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ActionStatus::FAILED:
            return "FAILED";
          case ActionStatus::COMPLETED:
            return "COMPLETED";
          case ActionStatus::NOT_ELIGIBLE:
            return "NOT_ELIGIBLE";
          case ActionStatus::ELIGIBLE:
            return "ELIGIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
