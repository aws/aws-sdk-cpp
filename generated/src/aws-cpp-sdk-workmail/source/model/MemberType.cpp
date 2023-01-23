/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MemberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace MemberTypeMapper
      {

        static const int GROUP_HASH = HashingUtils::HashString("GROUP");
        static const int USER_HASH = HashingUtils::HashString("USER");


        MemberType GetMemberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUP_HASH)
          {
            return MemberType::GROUP;
          }
          else if (hashCode == USER_HASH)
          {
            return MemberType::USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberType>(hashCode);
          }

          return MemberType::NOT_SET;
        }

        Aws::String GetNameForMemberType(MemberType enumValue)
        {
          switch(enumValue)
          {
          case MemberType::GROUP:
            return "GROUP";
          case MemberType::USER:
            return "USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberTypeMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
