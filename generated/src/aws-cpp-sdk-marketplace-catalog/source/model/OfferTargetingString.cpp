/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OfferTargetingString.h>
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
      namespace OfferTargetingStringMapper
      {

        static const int BuyerAccounts_HASH = HashingUtils::HashString("BuyerAccounts");
        static const int ParticipatingPrograms_HASH = HashingUtils::HashString("ParticipatingPrograms");
        static const int CountryCodes_HASH = HashingUtils::HashString("CountryCodes");
        static const int None_HASH = HashingUtils::HashString("None");


        OfferTargetingString GetOfferTargetingStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BuyerAccounts_HASH)
          {
            return OfferTargetingString::BuyerAccounts;
          }
          else if (hashCode == ParticipatingPrograms_HASH)
          {
            return OfferTargetingString::ParticipatingPrograms;
          }
          else if (hashCode == CountryCodes_HASH)
          {
            return OfferTargetingString::CountryCodes;
          }
          else if (hashCode == None_HASH)
          {
            return OfferTargetingString::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferTargetingString>(hashCode);
          }

          return OfferTargetingString::NOT_SET;
        }

        Aws::String GetNameForOfferTargetingString(OfferTargetingString enumValue)
        {
          switch(enumValue)
          {
          case OfferTargetingString::NOT_SET:
            return {};
          case OfferTargetingString::BuyerAccounts:
            return "BuyerAccounts";
          case OfferTargetingString::ParticipatingPrograms:
            return "ParticipatingPrograms";
          case OfferTargetingString::CountryCodes:
            return "CountryCodes";
          case OfferTargetingString::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferTargetingStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
