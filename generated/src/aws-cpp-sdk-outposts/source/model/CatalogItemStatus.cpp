/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CatalogItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace CatalogItemStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DISCONTINUED_HASH = HashingUtils::HashString("DISCONTINUED");


        CatalogItemStatus GetCatalogItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return CatalogItemStatus::AVAILABLE;
          }
          else if (hashCode == DISCONTINUED_HASH)
          {
            return CatalogItemStatus::DISCONTINUED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CatalogItemStatus>(hashCode);
          }

          return CatalogItemStatus::NOT_SET;
        }

        Aws::String GetNameForCatalogItemStatus(CatalogItemStatus enumValue)
        {
          switch(enumValue)
          {
          case CatalogItemStatus::NOT_SET:
            return {};
          case CatalogItemStatus::AVAILABLE:
            return "AVAILABLE";
          case CatalogItemStatus::DISCONTINUED:
            return "DISCONTINUED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CatalogItemStatusMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
