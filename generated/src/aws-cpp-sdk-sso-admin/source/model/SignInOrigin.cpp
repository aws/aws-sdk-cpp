/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/SignInOrigin.h>
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
      namespace SignInOriginMapper
      {

        static const int IDENTITY_CENTER_HASH = HashingUtils::HashString("IDENTITY_CENTER");
        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");


        SignInOrigin GetSignInOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDENTITY_CENTER_HASH)
          {
            return SignInOrigin::IDENTITY_CENTER;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return SignInOrigin::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignInOrigin>(hashCode);
          }

          return SignInOrigin::NOT_SET;
        }

        Aws::String GetNameForSignInOrigin(SignInOrigin enumValue)
        {
          switch(enumValue)
          {
          case SignInOrigin::NOT_SET:
            return {};
          case SignInOrigin::IDENTITY_CENTER:
            return "IDENTITY_CENTER";
          case SignInOrigin::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignInOriginMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
