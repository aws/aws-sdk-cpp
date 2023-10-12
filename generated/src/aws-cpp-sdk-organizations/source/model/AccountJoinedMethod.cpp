/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/AccountJoinedMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace AccountJoinedMethodMapper
      {

        static constexpr uint32_t INVITED_HASH = ConstExprHashingUtils::HashString("INVITED");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");


        AccountJoinedMethod GetAccountJoinedMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITED_HASH)
          {
            return AccountJoinedMethod::INVITED;
          }
          else if (hashCode == CREATED_HASH)
          {
            return AccountJoinedMethod::CREATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountJoinedMethod>(hashCode);
          }

          return AccountJoinedMethod::NOT_SET;
        }

        Aws::String GetNameForAccountJoinedMethod(AccountJoinedMethod enumValue)
        {
          switch(enumValue)
          {
          case AccountJoinedMethod::NOT_SET:
            return {};
          case AccountJoinedMethod::INVITED:
            return "INVITED";
          case AccountJoinedMethod::CREATED:
            return "CREATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountJoinedMethodMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
