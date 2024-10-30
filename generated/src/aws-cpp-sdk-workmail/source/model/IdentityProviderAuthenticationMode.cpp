/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/IdentityProviderAuthenticationMode.h>
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
      namespace IdentityProviderAuthenticationModeMapper
      {

        static const int IDENTITY_PROVIDER_ONLY_HASH = HashingUtils::HashString("IDENTITY_PROVIDER_ONLY");
        static const int IDENTITY_PROVIDER_AND_DIRECTORY_HASH = HashingUtils::HashString("IDENTITY_PROVIDER_AND_DIRECTORY");


        IdentityProviderAuthenticationMode GetIdentityProviderAuthenticationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDENTITY_PROVIDER_ONLY_HASH)
          {
            return IdentityProviderAuthenticationMode::IDENTITY_PROVIDER_ONLY;
          }
          else if (hashCode == IDENTITY_PROVIDER_AND_DIRECTORY_HASH)
          {
            return IdentityProviderAuthenticationMode::IDENTITY_PROVIDER_AND_DIRECTORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityProviderAuthenticationMode>(hashCode);
          }

          return IdentityProviderAuthenticationMode::NOT_SET;
        }

        Aws::String GetNameForIdentityProviderAuthenticationMode(IdentityProviderAuthenticationMode enumValue)
        {
          switch(enumValue)
          {
          case IdentityProviderAuthenticationMode::NOT_SET:
            return {};
          case IdentityProviderAuthenticationMode::IDENTITY_PROVIDER_ONLY:
            return "IDENTITY_PROVIDER_ONLY";
          case IdentityProviderAuthenticationMode::IDENTITY_PROVIDER_AND_DIRECTORY:
            return "IDENTITY_PROVIDER_AND_DIRECTORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityProviderAuthenticationModeMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
