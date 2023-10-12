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

        static constexpr uint32_t FullTextSearch_HASH = ConstExprHashingUtils::HashString("FullTextSearch");
        static constexpr uint32_t Owner_HASH = ConstExprHashingUtils::HashString("Owner");
        static constexpr uint32_t ProductType_HASH = ConstExprHashingUtils::HashString("ProductType");
        static constexpr uint32_t SourceProductId_HASH = ConstExprHashingUtils::HashString("SourceProductId");


        ProductViewFilterBy GetProductViewFilterByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ProductViewFilterBy::NOT_SET:
            return {};
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
