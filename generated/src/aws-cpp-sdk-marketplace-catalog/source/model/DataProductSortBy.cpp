/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/DataProductSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCatalog
  {
    namespace Model
    {
      namespace DataProductSortByMapper
      {

        static const int EntityId_HASH = HashingUtils::HashString("EntityId");
        static const int ProductTitle_HASH = HashingUtils::HashString("ProductTitle");
        static const int Visibility_HASH = HashingUtils::HashString("Visibility");
        static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");


        DataProductSortBy GetDataProductSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EntityId_HASH)
          {
            return DataProductSortBy::EntityId;
          }
          else if (hashCode == ProductTitle_HASH)
          {
            return DataProductSortBy::ProductTitle;
          }
          else if (hashCode == Visibility_HASH)
          {
            return DataProductSortBy::Visibility;
          }
          else if (hashCode == LastModifiedDate_HASH)
          {
            return DataProductSortBy::LastModifiedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataProductSortBy>(hashCode);
          }

          return DataProductSortBy::NOT_SET;
        }

        Aws::String GetNameForDataProductSortBy(DataProductSortBy enumValue)
        {
          switch(enumValue)
          {
          case DataProductSortBy::NOT_SET:
            return {};
          case DataProductSortBy::EntityId:
            return "EntityId";
          case DataProductSortBy::ProductTitle:
            return "ProductTitle";
          case DataProductSortBy::Visibility:
            return "Visibility";
          case DataProductSortBy::LastModifiedDate:
            return "LastModifiedDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataProductSortByMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
