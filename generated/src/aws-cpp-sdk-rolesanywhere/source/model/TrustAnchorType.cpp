/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/TrustAnchorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RolesAnywhere
  {
    namespace Model
    {
      namespace TrustAnchorTypeMapper
      {

        static const int AWS_ACM_PCA_HASH = HashingUtils::HashString("AWS_ACM_PCA");
        static const int CERTIFICATE_BUNDLE_HASH = HashingUtils::HashString("CERTIFICATE_BUNDLE");
        static const int SELF_SIGNED_REPOSITORY_HASH = HashingUtils::HashString("SELF_SIGNED_REPOSITORY");


        TrustAnchorType GetTrustAnchorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_ACM_PCA_HASH)
          {
            return TrustAnchorType::AWS_ACM_PCA;
          }
          else if (hashCode == CERTIFICATE_BUNDLE_HASH)
          {
            return TrustAnchorType::CERTIFICATE_BUNDLE;
          }
          else if (hashCode == SELF_SIGNED_REPOSITORY_HASH)
          {
            return TrustAnchorType::SELF_SIGNED_REPOSITORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustAnchorType>(hashCode);
          }

          return TrustAnchorType::NOT_SET;
        }

        Aws::String GetNameForTrustAnchorType(TrustAnchorType enumValue)
        {
          switch(enumValue)
          {
          case TrustAnchorType::NOT_SET:
            return {};
          case TrustAnchorType::AWS_ACM_PCA:
            return "AWS_ACM_PCA";
          case TrustAnchorType::CERTIFICATE_BUNDLE:
            return "CERTIFICATE_BUNDLE";
          case TrustAnchorType::SELF_SIGNED_REPOSITORY:
            return "SELF_SIGNED_REPOSITORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrustAnchorTypeMapper
    } // namespace Model
  } // namespace RolesAnywhere
} // namespace Aws
