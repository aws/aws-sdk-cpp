/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OfferStateString.h>
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
      namespace OfferStateStringMapper
      {

        static const int Draft_HASH = HashingUtils::HashString("Draft");
        static const int Released_HASH = HashingUtils::HashString("Released");


        OfferStateString GetOfferStateStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Draft_HASH)
          {
            return OfferStateString::Draft;
          }
          else if (hashCode == Released_HASH)
          {
            return OfferStateString::Released;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferStateString>(hashCode);
          }

          return OfferStateString::NOT_SET;
        }

        Aws::String GetNameForOfferStateString(OfferStateString enumValue)
        {
          switch(enumValue)
          {
          case OfferStateString::NOT_SET:
            return {};
          case OfferStateString::Draft:
            return "Draft";
          case OfferStateString::Released:
            return "Released";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferStateStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
