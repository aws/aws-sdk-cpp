/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AuthorizationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace AuthorizationStatusMapper
      {

        static const int Authorized_HASH = HashingUtils::HashString("Authorized");
        static const int Revoking_HASH = HashingUtils::HashString("Revoking");


        AuthorizationStatus GetAuthorizationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Authorized_HASH)
          {
            return AuthorizationStatus::Authorized;
          }
          else if (hashCode == Revoking_HASH)
          {
            return AuthorizationStatus::Revoking;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizationStatus>(hashCode);
          }

          return AuthorizationStatus::NOT_SET;
        }

        Aws::String GetNameForAuthorizationStatus(AuthorizationStatus enumValue)
        {
          switch(enumValue)
          {
          case AuthorizationStatus::NOT_SET:
            return {};
          case AuthorizationStatus::Authorized:
            return "Authorized";
          case AuthorizationStatus::Revoking:
            return "Revoking";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorizationStatusMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
