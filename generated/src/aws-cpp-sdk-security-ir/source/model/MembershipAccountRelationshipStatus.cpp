/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/MembershipAccountRelationshipStatus.h>
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
      namespace MembershipAccountRelationshipStatusMapper
      {

        static const int Associated_HASH = HashingUtils::HashString("Associated");
        static const int Disassociated_HASH = HashingUtils::HashString("Disassociated");
        static const int Unassociated_HASH = HashingUtils::HashString("Unassociated");


        MembershipAccountRelationshipStatus GetMembershipAccountRelationshipStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Associated_HASH)
          {
            return MembershipAccountRelationshipStatus::Associated;
          }
          else if (hashCode == Disassociated_HASH)
          {
            return MembershipAccountRelationshipStatus::Disassociated;
          }
          else if (hashCode == Unassociated_HASH)
          {
            return MembershipAccountRelationshipStatus::Unassociated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipAccountRelationshipStatus>(hashCode);
          }

          return MembershipAccountRelationshipStatus::NOT_SET;
        }

        Aws::String GetNameForMembershipAccountRelationshipStatus(MembershipAccountRelationshipStatus enumValue)
        {
          switch(enumValue)
          {
          case MembershipAccountRelationshipStatus::NOT_SET:
            return {};
          case MembershipAccountRelationshipStatus::Associated:
            return "Associated";
          case MembershipAccountRelationshipStatus::Disassociated:
            return "Disassociated";
          case MembershipAccountRelationshipStatus::Unassociated:
            return "Unassociated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipAccountRelationshipStatusMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
