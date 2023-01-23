/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProductType.h>
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
      namespace ProductTypeMapper
      {

        static const int CLOUD_FORMATION_TEMPLATE_HASH = HashingUtils::HashString("CLOUD_FORMATION_TEMPLATE");
        static const int MARKETPLACE_HASH = HashingUtils::HashString("MARKETPLACE");


        ProductType GetProductTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUD_FORMATION_TEMPLATE_HASH)
          {
            return ProductType::CLOUD_FORMATION_TEMPLATE;
          }
          else if (hashCode == MARKETPLACE_HASH)
          {
            return ProductType::MARKETPLACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductType>(hashCode);
          }

          return ProductType::NOT_SET;
        }

        Aws::String GetNameForProductType(ProductType enumValue)
        {
          switch(enumValue)
          {
          case ProductType::CLOUD_FORMATION_TEMPLATE:
            return "CLOUD_FORMATION_TEMPLATE";
          case ProductType::MARKETPLACE:
            return "MARKETPLACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProductTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
