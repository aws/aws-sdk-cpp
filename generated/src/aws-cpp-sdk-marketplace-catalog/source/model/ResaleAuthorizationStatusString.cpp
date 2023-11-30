/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ResaleAuthorizationStatusString.h>
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
      namespace ResaleAuthorizationStatusStringMapper
      {

        static const int Draft_HASH = HashingUtils::HashString("Draft");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Restricted_HASH = HashingUtils::HashString("Restricted");


        ResaleAuthorizationStatusString GetResaleAuthorizationStatusStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Draft_HASH)
          {
            return ResaleAuthorizationStatusString::Draft;
          }
          else if (hashCode == Active_HASH)
          {
            return ResaleAuthorizationStatusString::Active;
          }
          else if (hashCode == Restricted_HASH)
          {
            return ResaleAuthorizationStatusString::Restricted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResaleAuthorizationStatusString>(hashCode);
          }

          return ResaleAuthorizationStatusString::NOT_SET;
        }

        Aws::String GetNameForResaleAuthorizationStatusString(ResaleAuthorizationStatusString enumValue)
        {
          switch(enumValue)
          {
          case ResaleAuthorizationStatusString::NOT_SET:
            return {};
          case ResaleAuthorizationStatusString::Draft:
            return "Draft";
          case ResaleAuthorizationStatusString::Active:
            return "Active";
          case ResaleAuthorizationStatusString::Restricted:
            return "Restricted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResaleAuthorizationStatusStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
