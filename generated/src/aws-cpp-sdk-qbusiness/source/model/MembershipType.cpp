/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MembershipType.h>
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
      namespace MembershipTypeMapper
      {

        static const int INDEX_HASH = HashingUtils::HashString("INDEX");
        static const int DATASOURCE_HASH = HashingUtils::HashString("DATASOURCE");


        MembershipType GetMembershipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEX_HASH)
          {
            return MembershipType::INDEX;
          }
          else if (hashCode == DATASOURCE_HASH)
          {
            return MembershipType::DATASOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipType>(hashCode);
          }

          return MembershipType::NOT_SET;
        }

        Aws::String GetNameForMembershipType(MembershipType enumValue)
        {
          switch(enumValue)
          {
          case MembershipType::NOT_SET:
            return {};
          case MembershipType::INDEX:
            return "INDEX";
          case MembershipType::DATASOURCE:
            return "DATASOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
