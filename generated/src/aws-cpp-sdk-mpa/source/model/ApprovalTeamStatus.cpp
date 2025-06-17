/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ApprovalTeamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace ApprovalTeamStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        ApprovalTeamStatus GetApprovalTeamStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ApprovalTeamStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ApprovalTeamStatus::INACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApprovalTeamStatus::DELETING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ApprovalTeamStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApprovalTeamStatus>(hashCode);
          }

          return ApprovalTeamStatus::NOT_SET;
        }

        Aws::String GetNameForApprovalTeamStatus(ApprovalTeamStatus enumValue)
        {
          switch(enumValue)
          {
          case ApprovalTeamStatus::NOT_SET:
            return {};
          case ApprovalTeamStatus::ACTIVE:
            return "ACTIVE";
          case ApprovalTeamStatus::INACTIVE:
            return "INACTIVE";
          case ApprovalTeamStatus::DELETING:
            return "DELETING";
          case ApprovalTeamStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApprovalTeamStatusMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
