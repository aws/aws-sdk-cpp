/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/MachineLearningProductSortBy.h>
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
      namespace MachineLearningProductSortByMapper
      {

        static const int EntityId_HASH = HashingUtils::HashString("EntityId");
        static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");
        static const int ProductTitle_HASH = HashingUtils::HashString("ProductTitle");
        static const int Visibility_HASH = HashingUtils::HashString("Visibility");


        MachineLearningProductSortBy GetMachineLearningProductSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EntityId_HASH)
          {
            return MachineLearningProductSortBy::EntityId;
          }
          else if (hashCode == LastModifiedDate_HASH)
          {
            return MachineLearningProductSortBy::LastModifiedDate;
          }
          else if (hashCode == ProductTitle_HASH)
          {
            return MachineLearningProductSortBy::ProductTitle;
          }
          else if (hashCode == Visibility_HASH)
          {
            return MachineLearningProductSortBy::Visibility;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MachineLearningProductSortBy>(hashCode);
          }

          return MachineLearningProductSortBy::NOT_SET;
        }

        Aws::String GetNameForMachineLearningProductSortBy(MachineLearningProductSortBy enumValue)
        {
          switch(enumValue)
          {
          case MachineLearningProductSortBy::NOT_SET:
            return {};
          case MachineLearningProductSortBy::EntityId:
            return "EntityId";
          case MachineLearningProductSortBy::LastModifiedDate:
            return "LastModifiedDate";
          case MachineLearningProductSortBy::ProductTitle:
            return "ProductTitle";
          case MachineLearningProductSortBy::Visibility:
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

      } // namespace MachineLearningProductSortByMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
