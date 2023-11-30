/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/AmiProductSortBy.h>
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
      namespace AmiProductSortByMapper
      {

        static const int EntityId_HASH = HashingUtils::HashString("EntityId");
        static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");
        static const int ProductTitle_HASH = HashingUtils::HashString("ProductTitle");
        static const int Visibility_HASH = HashingUtils::HashString("Visibility");


        AmiProductSortBy GetAmiProductSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EntityId_HASH)
          {
            return AmiProductSortBy::EntityId;
          }
          else if (hashCode == LastModifiedDate_HASH)
          {
            return AmiProductSortBy::LastModifiedDate;
          }
          else if (hashCode == ProductTitle_HASH)
          {
            return AmiProductSortBy::ProductTitle;
          }
          else if (hashCode == Visibility_HASH)
          {
            return AmiProductSortBy::Visibility;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmiProductSortBy>(hashCode);
          }

          return AmiProductSortBy::NOT_SET;
        }

        Aws::String GetNameForAmiProductSortBy(AmiProductSortBy enumValue)
        {
          switch(enumValue)
          {
          case AmiProductSortBy::NOT_SET:
            return {};
          case AmiProductSortBy::EntityId:
            return "EntityId";
          case AmiProductSortBy::LastModifiedDate:
            return "LastModifiedDate";
          case AmiProductSortBy::ProductTitle:
            return "ProductTitle";
          case AmiProductSortBy::Visibility:
            return "Visibility";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AmiProductSortByMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
