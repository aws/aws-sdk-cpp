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
        static const int iamidentitycenter_HASH = HashingUtils::HashString("iamidentitycenter");
        static const int iamfederation_HASH = HashingUtils::HashString("iamfederation");


        SecurityConfigType GetSecurityConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == saml_HASH)
          {
            return SecurityConfigType::saml;
          }
          else if (hashCode == iamidentitycenter_HASH)
          {
            return SecurityConfigType::iamidentitycenter;
          }
          else if (hashCode == iamfederation_HASH)
          {
            return SecurityConfigType::iamfederation;
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
          case SecurityConfigType::NOT_SET:
            return {};
          case SecurityConfigType::saml:
            return "saml";
          case SecurityConfigType::iamidentitycenter:
            return "iamidentitycenter";
          case SecurityConfigType::iamfederation:
            return "iamfederation";
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
