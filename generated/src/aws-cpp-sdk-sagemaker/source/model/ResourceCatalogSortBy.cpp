/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceCatalogSortBy.h>
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
      namespace ResourceCatalogSortByMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        ResourceCatalogSortBy GetResourceCatalogSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return ResourceCatalogSortBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceCatalogSortBy>(hashCode);
          }

          return ResourceCatalogSortBy::NOT_SET;
        }

        Aws::String GetNameForResourceCatalogSortBy(ResourceCatalogSortBy enumValue)
        {
          switch(enumValue)
          {
          case ResourceCatalogSortBy::NOT_SET:
            return {};
          case ResourceCatalogSortBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceCatalogSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
