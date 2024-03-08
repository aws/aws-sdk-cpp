/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/SaaSProductVisibilityString.h>
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
      namespace SaaSProductVisibilityStringMapper
      {

        static const int Limited_HASH = HashingUtils::HashString("Limited");
        static const int Public_HASH = HashingUtils::HashString("Public");
        static const int Restricted_HASH = HashingUtils::HashString("Restricted");
        static const int Draft_HASH = HashingUtils::HashString("Draft");


        SaaSProductVisibilityString GetSaaSProductVisibilityStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Limited_HASH)
          {
            return SaaSProductVisibilityString::Limited;
          }
          else if (hashCode == Public_HASH)
          {
            return SaaSProductVisibilityString::Public;
          }
          else if (hashCode == Restricted_HASH)
          {
            return SaaSProductVisibilityString::Restricted;
          }
          else if (hashCode == Draft_HASH)
          {
            return SaaSProductVisibilityString::Draft;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SaaSProductVisibilityString>(hashCode);
          }

          return SaaSProductVisibilityString::NOT_SET;
        }

        Aws::String GetNameForSaaSProductVisibilityString(SaaSProductVisibilityString enumValue)
        {
          switch(enumValue)
          {
          case SaaSProductVisibilityString::NOT_SET:
            return {};
          case SaaSProductVisibilityString::Limited:
            return "Limited";
          case SaaSProductVisibilityString::Public:
            return "Public";
          case SaaSProductVisibilityString::Restricted:
            return "Restricted";
          case SaaSProductVisibilityString::Draft:
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

      } // namespace SaaSProductVisibilityStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
