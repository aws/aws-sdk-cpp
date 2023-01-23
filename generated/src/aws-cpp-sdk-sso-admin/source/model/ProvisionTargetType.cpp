/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ProvisionTargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace ProvisionTargetTypeMapper
      {

        static const int AWS_ACCOUNT_HASH = HashingUtils::HashString("AWS_ACCOUNT");
        static const int ALL_PROVISIONED_ACCOUNTS_HASH = HashingUtils::HashString("ALL_PROVISIONED_ACCOUNTS");


        ProvisionTargetType GetProvisionTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_ACCOUNT_HASH)
          {
            return ProvisionTargetType::AWS_ACCOUNT;
          }
          else if (hashCode == ALL_PROVISIONED_ACCOUNTS_HASH)
          {
            return ProvisionTargetType::ALL_PROVISIONED_ACCOUNTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionTargetType>(hashCode);
          }

          return ProvisionTargetType::NOT_SET;
        }

        Aws::String GetNameForProvisionTargetType(ProvisionTargetType enumValue)
        {
          switch(enumValue)
          {
          case ProvisionTargetType::AWS_ACCOUNT:
            return "AWS_ACCOUNT";
          case ProvisionTargetType::ALL_PROVISIONED_ACCOUNTS:
            return "ALL_PROVISIONED_ACCOUNTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionTargetTypeMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
