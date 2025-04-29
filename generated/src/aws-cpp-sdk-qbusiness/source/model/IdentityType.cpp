/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/IdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace IdentityTypeMapper
      {

        static const int AWS_IAM_IDP_SAML_HASH = HashingUtils::HashString("AWS_IAM_IDP_SAML");
        static const int AWS_IAM_IDP_OIDC_HASH = HashingUtils::HashString("AWS_IAM_IDP_OIDC");
        static const int AWS_IAM_IDC_HASH = HashingUtils::HashString("AWS_IAM_IDC");
        static const int AWS_QUICKSIGHT_IDP_HASH = HashingUtils::HashString("AWS_QUICKSIGHT_IDP");
        static const int ANONYMOUS_HASH = HashingUtils::HashString("ANONYMOUS");


        IdentityType GetIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_IAM_IDP_SAML_HASH)
          {
            return IdentityType::AWS_IAM_IDP_SAML;
          }
          else if (hashCode == AWS_IAM_IDP_OIDC_HASH)
          {
            return IdentityType::AWS_IAM_IDP_OIDC;
          }
          else if (hashCode == AWS_IAM_IDC_HASH)
          {
            return IdentityType::AWS_IAM_IDC;
          }
          else if (hashCode == AWS_QUICKSIGHT_IDP_HASH)
          {
            return IdentityType::AWS_QUICKSIGHT_IDP;
          }
          else if (hashCode == ANONYMOUS_HASH)
          {
            return IdentityType::ANONYMOUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityType>(hashCode);
          }

          return IdentityType::NOT_SET;
        }

        Aws::String GetNameForIdentityType(IdentityType enumValue)
        {
          switch(enumValue)
          {
          case IdentityType::NOT_SET:
            return {};
          case IdentityType::AWS_IAM_IDP_SAML:
            return "AWS_IAM_IDP_SAML";
          case IdentityType::AWS_IAM_IDP_OIDC:
            return "AWS_IAM_IDP_OIDC";
          case IdentityType::AWS_IAM_IDC:
            return "AWS_IAM_IDC";
          case IdentityType::AWS_QUICKSIGHT_IDP:
            return "AWS_QUICKSIGHT_IDP";
          case IdentityType::ANONYMOUS:
            return "ANONYMOUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
