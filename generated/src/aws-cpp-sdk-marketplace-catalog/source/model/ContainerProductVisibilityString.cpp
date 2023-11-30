/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ContainerProductVisibilityString.h>
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
      namespace ContainerProductVisibilityStringMapper
      {

        static const int Limited_HASH = HashingUtils::HashString("Limited");
        static const int Public_HASH = HashingUtils::HashString("Public");
        static const int Restricted_HASH = HashingUtils::HashString("Restricted");
        static const int Draft_HASH = HashingUtils::HashString("Draft");


        ContainerProductVisibilityString GetContainerProductVisibilityStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Limited_HASH)
          {
            return ContainerProductVisibilityString::Limited;
          }
          else if (hashCode == Public_HASH)
          {
            return ContainerProductVisibilityString::Public;
          }
          else if (hashCode == Restricted_HASH)
          {
            return ContainerProductVisibilityString::Restricted;
          }
          else if (hashCode == Draft_HASH)
          {
            return ContainerProductVisibilityString::Draft;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerProductVisibilityString>(hashCode);
          }

          return ContainerProductVisibilityString::NOT_SET;
        }

        Aws::String GetNameForContainerProductVisibilityString(ContainerProductVisibilityString enumValue)
        {
          switch(enumValue)
          {
          case ContainerProductVisibilityString::NOT_SET:
            return {};
          case ContainerProductVisibilityString::Limited:
            return "Limited";
          case ContainerProductVisibilityString::Public:
            return "Public";
          case ContainerProductVisibilityString::Restricted:
            return "Restricted";
          case ContainerProductVisibilityString::Draft:
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

      } // namespace ContainerProductVisibilityStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
