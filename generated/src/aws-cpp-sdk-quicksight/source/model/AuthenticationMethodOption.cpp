/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AuthenticationMethodOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AuthenticationMethodOptionMapper
      {

        static constexpr uint32_t IAM_AND_QUICKSIGHT_HASH = ConstExprHashingUtils::HashString("IAM_AND_QUICKSIGHT");
        static constexpr uint32_t IAM_ONLY_HASH = ConstExprHashingUtils::HashString("IAM_ONLY");
        static constexpr uint32_t ACTIVE_DIRECTORY_HASH = ConstExprHashingUtils::HashString("ACTIVE_DIRECTORY");
        static constexpr uint32_t IAM_IDENTITY_CENTER_HASH = ConstExprHashingUtils::HashString("IAM_IDENTITY_CENTER");


        AuthenticationMethodOption GetAuthenticationMethodOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_AND_QUICKSIGHT_HASH)
          {
            return AuthenticationMethodOption::IAM_AND_QUICKSIGHT;
          }
          else if (hashCode == IAM_ONLY_HASH)
          {
            return AuthenticationMethodOption::IAM_ONLY;
          }
          else if (hashCode == ACTIVE_DIRECTORY_HASH)
          {
            return AuthenticationMethodOption::ACTIVE_DIRECTORY;
          }
          else if (hashCode == IAM_IDENTITY_CENTER_HASH)
          {
            return AuthenticationMethodOption::IAM_IDENTITY_CENTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationMethodOption>(hashCode);
          }

          return AuthenticationMethodOption::NOT_SET;
        }

        Aws::String GetNameForAuthenticationMethodOption(AuthenticationMethodOption enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationMethodOption::NOT_SET:
            return {};
          case AuthenticationMethodOption::IAM_AND_QUICKSIGHT:
            return "IAM_AND_QUICKSIGHT";
          case AuthenticationMethodOption::IAM_ONLY:
            return "IAM_ONLY";
          case AuthenticationMethodOption::ACTIVE_DIRECTORY:
            return "ACTIVE_DIRECTORY";
          case AuthenticationMethodOption::IAM_IDENTITY_CENTER:
            return "IAM_IDENTITY_CENTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationMethodOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
