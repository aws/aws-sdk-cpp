/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/AssignmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace AssignmentStatusMapper
      {

        static constexpr uint32_t Submitted_HASH = ConstExprHashingUtils::HashString("Submitted");
        static constexpr uint32_t Approved_HASH = ConstExprHashingUtils::HashString("Approved");
        static constexpr uint32_t Rejected_HASH = ConstExprHashingUtils::HashString("Rejected");


        AssignmentStatus GetAssignmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Submitted_HASH)
          {
            return AssignmentStatus::Submitted;
          }
          else if (hashCode == Approved_HASH)
          {
            return AssignmentStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return AssignmentStatus::Rejected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssignmentStatus>(hashCode);
          }

          return AssignmentStatus::NOT_SET;
        }

        Aws::String GetNameForAssignmentStatus(AssignmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AssignmentStatus::NOT_SET:
            return {};
          case AssignmentStatus::Submitted:
            return "Submitted";
          case AssignmentStatus::Approved:
            return "Approved";
          case AssignmentStatus::Rejected:
            return "Rejected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssignmentStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
