/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisionedProductViewFilterBy.h>
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
      namespace ProvisionedProductViewFilterByMapper
      {

        static const int SearchQuery_HASH = HashingUtils::HashString("SearchQuery");


        ProvisionedProductViewFilterBy GetProvisionedProductViewFilterByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SearchQuery_HASH)
          {
            return ProvisionedProductViewFilterBy::SearchQuery;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedProductViewFilterBy>(hashCode);
          }

          return ProvisionedProductViewFilterBy::NOT_SET;
        }

        Aws::String GetNameForProvisionedProductViewFilterBy(ProvisionedProductViewFilterBy enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedProductViewFilterBy::SearchQuery:
            return "SearchQuery";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionedProductViewFilterByMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
