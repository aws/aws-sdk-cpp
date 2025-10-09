/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ClientCredentialsSource.h>
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
      namespace ClientCredentialsSourceMapper
      {

        static const int PLAIN_CREDENTIALS_HASH = HashingUtils::HashString("PLAIN_CREDENTIALS");


        ClientCredentialsSource GetClientCredentialsSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_CREDENTIALS_HASH)
          {
            return ClientCredentialsSource::PLAIN_CREDENTIALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientCredentialsSource>(hashCode);
          }

          return ClientCredentialsSource::NOT_SET;
        }

        Aws::String GetNameForClientCredentialsSource(ClientCredentialsSource enumValue)
        {
          switch(enumValue)
          {
          case ClientCredentialsSource::NOT_SET:
            return {};
          case ClientCredentialsSource::PLAIN_CREDENTIALS:
            return "PLAIN_CREDENTIALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientCredentialsSourceMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
