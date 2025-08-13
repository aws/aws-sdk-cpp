/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/MembershipAccountRelationshipType.h>
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
      namespace MembershipAccountRelationshipTypeMapper
      {

        static const int Organization_HASH = HashingUtils::HashString("Organization");
        static const int Unrelated_HASH = HashingUtils::HashString("Unrelated");


        MembershipAccountRelationshipType GetMembershipAccountRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Organization_HASH)
          {
            return MembershipAccountRelationshipType::Organization;
          }
          else if (hashCode == Unrelated_HASH)
          {
            return MembershipAccountRelationshipType::Unrelated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipAccountRelationshipType>(hashCode);
          }

          return MembershipAccountRelationshipType::NOT_SET;
        }

        Aws::String GetNameForMembershipAccountRelationshipType(MembershipAccountRelationshipType enumValue)
        {
          switch(enumValue)
          {
          case MembershipAccountRelationshipType::NOT_SET:
            return {};
          case MembershipAccountRelationshipType::Organization:
            return "Organization";
          case MembershipAccountRelationshipType::Unrelated:
            return "Unrelated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipAccountRelationshipTypeMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
