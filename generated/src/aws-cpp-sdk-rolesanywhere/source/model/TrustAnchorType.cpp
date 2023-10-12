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

        static constexpr uint32_t AWS_ACM_PCA_HASH = ConstExprHashingUtils::HashString("AWS_ACM_PCA");
        static constexpr uint32_t CERTIFICATE_BUNDLE_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_BUNDLE");
        static constexpr uint32_t SELF_SIGNED_REPOSITORY_HASH = ConstExprHashingUtils::HashString("SELF_SIGNED_REPOSITORY");


        TrustAnchorType GetTrustAnchorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
