/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/SecurityConfigType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace SecurityConfigTypeMapper
      {

        static const int saml_HASH = HashingUtils::HashString("saml");


        SecurityConfigType GetSecurityConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == saml_HASH)
          {
            return SecurityConfigType::saml;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityConfigType>(hashCode);
          }

          return SecurityConfigType::NOT_SET;
        }

        Aws::String GetNameForSecurityConfigType(SecurityConfigType enumValue)
        {
          switch(enumValue)
          {
          case SecurityConfigType::saml:
            return "saml";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityConfigTypeMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
