/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MemberRelation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace MemberRelationMapper
      {

        static const int AND_HASH = HashingUtils::HashString("AND");
        static const int OR_HASH = HashingUtils::HashString("OR");


        MemberRelation GetMemberRelationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AND_HASH)
          {
            return MemberRelation::AND;
          }
          else if (hashCode == OR_HASH)
          {
            return MemberRelation::OR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberRelation>(hashCode);
          }

          return MemberRelation::NOT_SET;
        }

        Aws::String GetNameForMemberRelation(MemberRelation enumValue)
        {
          switch(enumValue)
          {
          case MemberRelation::NOT_SET:
            return {};
          case MemberRelation::AND:
            return "AND";
          case MemberRelation::OR:
            return "OR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberRelationMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
