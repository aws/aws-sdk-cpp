/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/MembershipStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace MembershipStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Terminated_HASH = HashingUtils::HashString("Terminated");


        MembershipStatus GetMembershipStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return MembershipStatus::Active;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return MembershipStatus::Cancelled;
          }
          else if (hashCode == Terminated_HASH)
          {
            return MembershipStatus::Terminated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipStatus>(hashCode);
          }

          return MembershipStatus::NOT_SET;
        }

        Aws::String GetNameForMembershipStatus(MembershipStatus enumValue)
        {
          switch(enumValue)
          {
          case MembershipStatus::NOT_SET:
            return {};
          case MembershipStatus::Active:
            return "Active";
          case MembershipStatus::Cancelled:
            return "Cancelled";
          case MembershipStatus::Terminated:
            return "Terminated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipStatusMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
