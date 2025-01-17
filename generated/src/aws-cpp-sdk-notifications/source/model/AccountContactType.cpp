/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/AccountContactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace AccountContactTypeMapper
      {

        static const int ACCOUNT_PRIMARY_HASH = HashingUtils::HashString("ACCOUNT_PRIMARY");
        static const int ACCOUNT_ALTERNATE_BILLING_HASH = HashingUtils::HashString("ACCOUNT_ALTERNATE_BILLING");
        static const int ACCOUNT_ALTERNATE_OPERATIONS_HASH = HashingUtils::HashString("ACCOUNT_ALTERNATE_OPERATIONS");
        static const int ACCOUNT_ALTERNATE_SECURITY_HASH = HashingUtils::HashString("ACCOUNT_ALTERNATE_SECURITY");


        AccountContactType GetAccountContactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_PRIMARY_HASH)
          {
            return AccountContactType::ACCOUNT_PRIMARY;
          }
          else if (hashCode == ACCOUNT_ALTERNATE_BILLING_HASH)
          {
            return AccountContactType::ACCOUNT_ALTERNATE_BILLING;
          }
          else if (hashCode == ACCOUNT_ALTERNATE_OPERATIONS_HASH)
          {
            return AccountContactType::ACCOUNT_ALTERNATE_OPERATIONS;
          }
          else if (hashCode == ACCOUNT_ALTERNATE_SECURITY_HASH)
          {
            return AccountContactType::ACCOUNT_ALTERNATE_SECURITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountContactType>(hashCode);
          }

          return AccountContactType::NOT_SET;
        }

        Aws::String GetNameForAccountContactType(AccountContactType enumValue)
        {
          switch(enumValue)
          {
          case AccountContactType::NOT_SET:
            return {};
          case AccountContactType::ACCOUNT_PRIMARY:
            return "ACCOUNT_PRIMARY";
          case AccountContactType::ACCOUNT_ALTERNATE_BILLING:
            return "ACCOUNT_ALTERNATE_BILLING";
          case AccountContactType::ACCOUNT_ALTERNATE_OPERATIONS:
            return "ACCOUNT_ALTERNATE_OPERATIONS";
          case AccountContactType::ACCOUNT_ALTERNATE_SECURITY:
            return "ACCOUNT_ALTERNATE_SECURITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountContactTypeMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
