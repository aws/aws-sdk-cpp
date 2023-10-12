/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceCatalogSortOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ResourceCatalogSortOrderMapper
      {

        static constexpr uint32_t Ascending_HASH = ConstExprHashingUtils::HashString("Ascending");
        static constexpr uint32_t Descending_HASH = ConstExprHashingUtils::HashString("Descending");


        ResourceCatalogSortOrder GetResourceCatalogSortOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return ResourceCatalogSortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return ResourceCatalogSortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceCatalogSortOrder>(hashCode);
          }

          return ResourceCatalogSortOrder::NOT_SET;
        }

        Aws::String GetNameForResourceCatalogSortOrder(ResourceCatalogSortOrder enumValue)
        {
          switch(enumValue)
          {
          case ResourceCatalogSortOrder::NOT_SET:
            return {};
          case ResourceCatalogSortOrder::Ascending:
            return "Ascending";
          case ResourceCatalogSortOrder::Descending:
            return "Descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceCatalogSortOrderMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
