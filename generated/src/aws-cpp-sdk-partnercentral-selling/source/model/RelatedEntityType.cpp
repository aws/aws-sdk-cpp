/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/RelatedEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace RelatedEntityTypeMapper
      {

        static const int Solutions_HASH = HashingUtils::HashString("Solutions");
        static const int AwsProducts_HASH = HashingUtils::HashString("AwsProducts");
        static const int AwsMarketplaceOffers_HASH = HashingUtils::HashString("AwsMarketplaceOffers");


        RelatedEntityType GetRelatedEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Solutions_HASH)
          {
            return RelatedEntityType::Solutions;
          }
          else if (hashCode == AwsProducts_HASH)
          {
            return RelatedEntityType::AwsProducts;
          }
          else if (hashCode == AwsMarketplaceOffers_HASH)
          {
            return RelatedEntityType::AwsMarketplaceOffers;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelatedEntityType>(hashCode);
          }

          return RelatedEntityType::NOT_SET;
        }

        Aws::String GetNameForRelatedEntityType(RelatedEntityType enumValue)
        {
          switch(enumValue)
          {
          case RelatedEntityType::NOT_SET:
            return {};
          case RelatedEntityType::Solutions:
            return "Solutions";
          case RelatedEntityType::AwsProducts:
            return "AwsProducts";
          case RelatedEntityType::AwsMarketplaceOffers:
            return "AwsMarketplaceOffers";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelatedEntityTypeMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
