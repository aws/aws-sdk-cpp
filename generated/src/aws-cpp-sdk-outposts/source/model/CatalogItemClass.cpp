/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CatalogItemClass.h>
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
      namespace CatalogItemClassMapper
      {

        static const int RACK_HASH = HashingUtils::HashString("RACK");
        static const int SERVER_HASH = HashingUtils::HashString("SERVER");


        CatalogItemClass GetCatalogItemClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RACK_HASH)
          {
            return CatalogItemClass::RACK;
          }
          else if (hashCode == SERVER_HASH)
          {
            return CatalogItemClass::SERVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CatalogItemClass>(hashCode);
          }

          return CatalogItemClass::NOT_SET;
        }

        Aws::String GetNameForCatalogItemClass(CatalogItemClass enumValue)
        {
          switch(enumValue)
          {
          case CatalogItemClass::NOT_SET:
            return {};
          case CatalogItemClass::RACK:
            return "RACK";
          case CatalogItemClass::SERVER:
            return "SERVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CatalogItemClassMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
