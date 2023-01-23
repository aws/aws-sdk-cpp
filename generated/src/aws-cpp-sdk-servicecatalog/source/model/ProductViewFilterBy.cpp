/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProductViewFilterBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ProductViewFilterByMapper
      {

        static const int FullTextSearch_HASH = HashingUtils::HashString("FullTextSearch");
        static const int Owner_HASH = HashingUtils::HashString("Owner");
        static const int ProductType_HASH = HashingUtils::HashString("ProductType");
        static const int SourceProductId_HASH = HashingUtils::HashString("SourceProductId");


        ProductViewFilterBy GetProductViewFilterByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullTextSearch_HASH)
          {
            return ProductViewFilterBy::FullTextSearch;
          }
          else if (hashCode == Owner_HASH)
          {
            return ProductViewFilterBy::Owner;
          }
          else if (hashCode == ProductType_HASH)
          {
            return ProductViewFilterBy::ProductType;
          }
          else if (hashCode == SourceProductId_HASH)
          {
            return ProductViewFilterBy::SourceProductId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductViewFilterBy>(hashCode);
          }

          return ProductViewFilterBy::NOT_SET;
        }

        Aws::String GetNameForProductViewFilterBy(ProductViewFilterBy enumValue)
        {
          switch(enumValue)
          {
          case ProductViewFilterBy::FullTextSearch:
            return "FullTextSearch";
          case ProductViewFilterBy::Owner:
            return "Owner";
          case ProductViewFilterBy::ProductType:
            return "ProductType";
          case ProductViewFilterBy::SourceProductId:
            return "SourceProductId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProductViewFilterByMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
