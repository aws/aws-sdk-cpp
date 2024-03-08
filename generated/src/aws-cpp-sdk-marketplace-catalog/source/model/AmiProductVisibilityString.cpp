/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/AmiProductVisibilityString.h>
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
      namespace AmiProductVisibilityStringMapper
      {

        static const int Limited_HASH = HashingUtils::HashString("Limited");
        static const int Public_HASH = HashingUtils::HashString("Public");
        static const int Restricted_HASH = HashingUtils::HashString("Restricted");
        static const int Draft_HASH = HashingUtils::HashString("Draft");


        AmiProductVisibilityString GetAmiProductVisibilityStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Limited_HASH)
          {
            return AmiProductVisibilityString::Limited;
          }
          else if (hashCode == Public_HASH)
          {
            return AmiProductVisibilityString::Public;
          }
          else if (hashCode == Restricted_HASH)
          {
            return AmiProductVisibilityString::Restricted;
          }
          else if (hashCode == Draft_HASH)
          {
            return AmiProductVisibilityString::Draft;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmiProductVisibilityString>(hashCode);
          }

          return AmiProductVisibilityString::NOT_SET;
        }

        Aws::String GetNameForAmiProductVisibilityString(AmiProductVisibilityString enumValue)
        {
          switch(enumValue)
          {
          case AmiProductVisibilityString::NOT_SET:
            return {};
          case AmiProductVisibilityString::Limited:
            return "Limited";
          case AmiProductVisibilityString::Public:
            return "Public";
          case AmiProductVisibilityString::Restricted:
            return "Restricted";
          case AmiProductVisibilityString::Draft:
            return "Draft";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AmiProductVisibilityStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
