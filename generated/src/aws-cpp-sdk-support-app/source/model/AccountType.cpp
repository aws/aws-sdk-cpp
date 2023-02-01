/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/AccountType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupportApp
  {
    namespace Model
    {
      namespace AccountTypeMapper
      {

        static const int management_HASH = HashingUtils::HashString("management");
        static const int member_HASH = HashingUtils::HashString("member");


        AccountType GetAccountTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == management_HASH)
          {
            return AccountType::management;
          }
          else if (hashCode == member_HASH)
          {
            return AccountType::member;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountType>(hashCode);
          }

          return AccountType::NOT_SET;
        }

        Aws::String GetNameForAccountType(AccountType enumValue)
        {
          switch(enumValue)
          {
          case AccountType::management:
            return "management";
          case AccountType::member:
            return "member";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountTypeMapper
    } // namespace Model
  } // namespace SupportApp
} // namespace Aws
