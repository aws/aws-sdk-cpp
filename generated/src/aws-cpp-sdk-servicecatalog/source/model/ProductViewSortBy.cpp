/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProductViewSortBy.h>
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
      namespace ProductViewSortByMapper
      {

        static const int Title_HASH = HashingUtils::HashString("Title");
        static const int VersionCount_HASH = HashingUtils::HashString("VersionCount");
        static const int CreationDate_HASH = HashingUtils::HashString("CreationDate");


        ProductViewSortBy GetProductViewSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Title_HASH)
          {
            return ProductViewSortBy::Title;
          }
          else if (hashCode == VersionCount_HASH)
          {
            return ProductViewSortBy::VersionCount;
          }
          else if (hashCode == CreationDate_HASH)
          {
            return ProductViewSortBy::CreationDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductViewSortBy>(hashCode);
          }

          return ProductViewSortBy::NOT_SET;
        }

        Aws::String GetNameForProductViewSortBy(ProductViewSortBy enumValue)
        {
          switch(enumValue)
          {
          case ProductViewSortBy::Title:
            return "Title";
          case ProductViewSortBy::VersionCount:
            return "VersionCount";
          case ProductViewSortBy::CreationDate:
            return "CreationDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProductViewSortByMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
