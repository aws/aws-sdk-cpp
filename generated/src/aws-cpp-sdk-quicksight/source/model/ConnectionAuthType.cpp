/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConnectionAuthType.h>
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
      namespace ConnectionAuthTypeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int API_KEY_HASH = HashingUtils::HashString("API_KEY");
        static const int OAUTH2_CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("OAUTH2_CLIENT_CREDENTIALS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int OAUTH2_AUTHORIZATION_CODE_HASH = HashingUtils::HashString("OAUTH2_AUTHORIZATION_CODE");


        ConnectionAuthType GetConnectionAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return ConnectionAuthType::BASIC;
          }
          else if (hashCode == API_KEY_HASH)
          {
            return ConnectionAuthType::API_KEY;
          }
          else if (hashCode == OAUTH2_CLIENT_CREDENTIALS_HASH)
          {
            return ConnectionAuthType::OAUTH2_CLIENT_CREDENTIALS;
          }
          else if (hashCode == NONE_HASH)
          {
            return ConnectionAuthType::NONE;
          }
          else if (hashCode == IAM_HASH)
          {
            return ConnectionAuthType::IAM;
          }
          else if (hashCode == OAUTH2_AUTHORIZATION_CODE_HASH)
          {
            return ConnectionAuthType::OAUTH2_AUTHORIZATION_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionAuthType>(hashCode);
          }

          return ConnectionAuthType::NOT_SET;
        }

        Aws::String GetNameForConnectionAuthType(ConnectionAuthType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionAuthType::NOT_SET:
            return {};
          case ConnectionAuthType::BASIC:
            return "BASIC";
          case ConnectionAuthType::API_KEY:
            return "API_KEY";
          case ConnectionAuthType::OAUTH2_CLIENT_CREDENTIALS:
            return "OAUTH2_CLIENT_CREDENTIALS";
          case ConnectionAuthType::NONE:
            return "NONE";
          case ConnectionAuthType::IAM:
            return "IAM";
          case ConnectionAuthType::OAUTH2_AUTHORIZATION_CODE:
            return "OAUTH2_AUTHORIZATION_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionAuthTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
