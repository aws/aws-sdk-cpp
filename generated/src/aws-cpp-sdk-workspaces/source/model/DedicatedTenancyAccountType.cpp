/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DedicatedTenancyAccountType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace DedicatedTenancyAccountTypeMapper
      {

        static const int SOURCE_ACCOUNT_HASH = HashingUtils::HashString("SOURCE_ACCOUNT");
        static const int TARGET_ACCOUNT_HASH = HashingUtils::HashString("TARGET_ACCOUNT");


        DedicatedTenancyAccountType GetDedicatedTenancyAccountTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_ACCOUNT_HASH)
          {
            return DedicatedTenancyAccountType::SOURCE_ACCOUNT;
          }
          else if (hashCode == TARGET_ACCOUNT_HASH)
          {
            return DedicatedTenancyAccountType::TARGET_ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DedicatedTenancyAccountType>(hashCode);
          }

          return DedicatedTenancyAccountType::NOT_SET;
        }

        Aws::String GetNameForDedicatedTenancyAccountType(DedicatedTenancyAccountType enumValue)
        {
          switch(enumValue)
          {
          case DedicatedTenancyAccountType::NOT_SET:
            return {};
          case DedicatedTenancyAccountType::SOURCE_ACCOUNT:
            return "SOURCE_ACCOUNT";
          case DedicatedTenancyAccountType::TARGET_ACCOUNT:
            return "TARGET_ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DedicatedTenancyAccountTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
