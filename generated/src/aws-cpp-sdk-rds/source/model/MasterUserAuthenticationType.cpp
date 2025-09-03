/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/MasterUserAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace MasterUserAuthenticationTypeMapper
      {

        static const int password_HASH = HashingUtils::HashString("password");
        static const int iam_db_auth_HASH = HashingUtils::HashString("iam-db-auth");


        MasterUserAuthenticationType GetMasterUserAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == password_HASH)
          {
            return MasterUserAuthenticationType::password;
          }
          else if (hashCode == iam_db_auth_HASH)
          {
            return MasterUserAuthenticationType::iam_db_auth;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MasterUserAuthenticationType>(hashCode);
          }

          return MasterUserAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForMasterUserAuthenticationType(MasterUserAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case MasterUserAuthenticationType::NOT_SET:
            return {};
          case MasterUserAuthenticationType::password:
            return "password";
          case MasterUserAuthenticationType::iam_db_auth:
            return "iam-db-auth";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MasterUserAuthenticationTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
