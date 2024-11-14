/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Visibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace VisibilityMapper
      {

        static const int Full_HASH = HashingUtils::HashString("Full");
        static const int Limited_HASH = HashingUtils::HashString("Limited");


        Visibility GetVisibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Full_HASH)
          {
            return Visibility::Full;
          }
          else if (hashCode == Limited_HASH)
          {
            return Visibility::Limited;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Visibility>(hashCode);
          }

          return Visibility::NOT_SET;
        }

        Aws::String GetNameForVisibility(Visibility enumValue)
        {
          switch(enumValue)
          {
          case Visibility::NOT_SET:
            return {};
          case Visibility::Full:
            return "Full";
          case Visibility::Limited:
            return "Limited";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisibilityMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
