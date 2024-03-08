/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/EnvironmentAccountConnectionRequesterAccountType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace EnvironmentAccountConnectionRequesterAccountTypeMapper
      {

        static const int MANAGEMENT_ACCOUNT_HASH = HashingUtils::HashString("MANAGEMENT_ACCOUNT");
        static const int ENVIRONMENT_ACCOUNT_HASH = HashingUtils::HashString("ENVIRONMENT_ACCOUNT");


        EnvironmentAccountConnectionRequesterAccountType GetEnvironmentAccountConnectionRequesterAccountTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANAGEMENT_ACCOUNT_HASH)
          {
            return EnvironmentAccountConnectionRequesterAccountType::MANAGEMENT_ACCOUNT;
          }
          else if (hashCode == ENVIRONMENT_ACCOUNT_HASH)
          {
            return EnvironmentAccountConnectionRequesterAccountType::ENVIRONMENT_ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentAccountConnectionRequesterAccountType>(hashCode);
          }

          return EnvironmentAccountConnectionRequesterAccountType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentAccountConnectionRequesterAccountType(EnvironmentAccountConnectionRequesterAccountType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentAccountConnectionRequesterAccountType::NOT_SET:
            return {};
          case EnvironmentAccountConnectionRequesterAccountType::MANAGEMENT_ACCOUNT:
            return "MANAGEMENT_ACCOUNT";
          case EnvironmentAccountConnectionRequesterAccountType::ENVIRONMENT_ACCOUNT:
            return "ENVIRONMENT_ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentAccountConnectionRequesterAccountTypeMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
