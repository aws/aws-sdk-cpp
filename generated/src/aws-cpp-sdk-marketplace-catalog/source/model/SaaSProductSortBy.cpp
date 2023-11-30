/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/SaaSProductSortBy.h>
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
      namespace SaaSProductSortByMapper
      {

        static const int EntityId_HASH = HashingUtils::HashString("EntityId");
        static const int ProductTitle_HASH = HashingUtils::HashString("ProductTitle");
        static const int Visibility_HASH = HashingUtils::HashString("Visibility");
        static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");


        SaaSProductSortBy GetSaaSProductSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EntityId_HASH)
          {
            return SaaSProductSortBy::EntityId;
          }
          else if (hashCode == ProductTitle_HASH)
          {
            return SaaSProductSortBy::ProductTitle;
          }
          else if (hashCode == Visibility_HASH)
          {
            return SaaSProductSortBy::Visibility;
          }
          else if (hashCode == LastModifiedDate_HASH)
          {
            return SaaSProductSortBy::LastModifiedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SaaSProductSortBy>(hashCode);
          }

          return SaaSProductSortBy::NOT_SET;
        }

        Aws::String GetNameForSaaSProductSortBy(SaaSProductSortBy enumValue)
        {
          switch(enumValue)
          {
          case SaaSProductSortBy::NOT_SET:
            return {};
          case SaaSProductSortBy::EntityId:
            return "EntityId";
          case SaaSProductSortBy::ProductTitle:
            return "ProductTitle";
          case SaaSProductSortBy::Visibility:
            return "Visibility";
          case SaaSProductSortBy::LastModifiedDate:
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

      } // namespace SaaSProductSortByMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
