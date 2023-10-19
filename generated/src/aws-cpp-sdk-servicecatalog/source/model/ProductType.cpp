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
        static const int TERRAFORM_OPEN_SOURCE_HASH = HashingUtils::HashString("TERRAFORM_OPEN_SOURCE");
        static const int TERRAFORM_CLOUD_HASH = HashingUtils::HashString("TERRAFORM_CLOUD");
        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");


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
          else if (hashCode == TERRAFORM_OPEN_SOURCE_HASH)
          {
            return ProductType::TERRAFORM_OPEN_SOURCE;
          }
          else if (hashCode == TERRAFORM_CLOUD_HASH)
          {
            return ProductType::TERRAFORM_CLOUD;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return ProductType::EXTERNAL;
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
          case ProductType::NOT_SET:
            return {};
          case ProductType::CLOUD_FORMATION_TEMPLATE:
            return "CLOUD_FORMATION_TEMPLATE";
          case ProductType::MARKETPLACE:
            return "MARKETPLACE";
          case ProductType::TERRAFORM_OPEN_SOURCE:
            return "TERRAFORM_OPEN_SOURCE";
          case ProductType::TERRAFORM_CLOUD:
            return "TERRAFORM_CLOUD";
          case ProductType::EXTERNAL:
            return "EXTERNAL";
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
