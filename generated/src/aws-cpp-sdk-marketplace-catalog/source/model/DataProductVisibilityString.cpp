/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/DataProductVisibilityString.h>
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
      namespace DataProductVisibilityStringMapper
      {

        static const int Limited_HASH = HashingUtils::HashString("Limited");
        static const int Public_HASH = HashingUtils::HashString("Public");
        static const int Restricted_HASH = HashingUtils::HashString("Restricted");
        static const int Unavailable_HASH = HashingUtils::HashString("Unavailable");
        static const int Draft_HASH = HashingUtils::HashString("Draft");


        DataProductVisibilityString GetDataProductVisibilityStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Limited_HASH)
          {
            return DataProductVisibilityString::Limited;
          }
          else if (hashCode == Public_HASH)
          {
            return DataProductVisibilityString::Public;
          }
          else if (hashCode == Restricted_HASH)
          {
            return DataProductVisibilityString::Restricted;
          }
          else if (hashCode == Unavailable_HASH)
          {
            return DataProductVisibilityString::Unavailable;
          }
          else if (hashCode == Draft_HASH)
          {
            return DataProductVisibilityString::Draft;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataProductVisibilityString>(hashCode);
          }

          return DataProductVisibilityString::NOT_SET;
        }

        Aws::String GetNameForDataProductVisibilityString(DataProductVisibilityString enumValue)
        {
          switch(enumValue)
          {
          case DataProductVisibilityString::NOT_SET:
            return {};
          case DataProductVisibilityString::Limited:
            return "Limited";
          case DataProductVisibilityString::Public:
            return "Public";
          case DataProductVisibilityString::Restricted:
            return "Restricted";
          case DataProductVisibilityString::Unavailable:
            return "Unavailable";
          case DataProductVisibilityString::Draft:
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

      } // namespace DataProductVisibilityStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
