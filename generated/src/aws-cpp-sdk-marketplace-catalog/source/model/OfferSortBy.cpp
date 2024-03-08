/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OfferSortBy.h>
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
      namespace OfferSortByMapper
      {

        static const int EntityId_HASH = HashingUtils::HashString("EntityId");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int ProductId_HASH = HashingUtils::HashString("ProductId");
        static const int ReleaseDate_HASH = HashingUtils::HashString("ReleaseDate");
        static const int AvailabilityEndDate_HASH = HashingUtils::HashString("AvailabilityEndDate");
        static const int BuyerAccounts_HASH = HashingUtils::HashString("BuyerAccounts");
        static const int State_HASH = HashingUtils::HashString("State");
        static const int Targeting_HASH = HashingUtils::HashString("Targeting");
        static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");


        OfferSortBy GetOfferSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EntityId_HASH)
          {
            return OfferSortBy::EntityId;
          }
          else if (hashCode == Name_HASH)
          {
            return OfferSortBy::Name;
          }
          else if (hashCode == ProductId_HASH)
          {
            return OfferSortBy::ProductId;
          }
          else if (hashCode == ReleaseDate_HASH)
          {
            return OfferSortBy::ReleaseDate;
          }
          else if (hashCode == AvailabilityEndDate_HASH)
          {
            return OfferSortBy::AvailabilityEndDate;
          }
          else if (hashCode == BuyerAccounts_HASH)
          {
            return OfferSortBy::BuyerAccounts;
          }
          else if (hashCode == State_HASH)
          {
            return OfferSortBy::State;
          }
          else if (hashCode == Targeting_HASH)
          {
            return OfferSortBy::Targeting;
          }
          else if (hashCode == LastModifiedDate_HASH)
          {
            return OfferSortBy::LastModifiedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferSortBy>(hashCode);
          }

          return OfferSortBy::NOT_SET;
        }

        Aws::String GetNameForOfferSortBy(OfferSortBy enumValue)
        {
          switch(enumValue)
          {
          case OfferSortBy::NOT_SET:
            return {};
          case OfferSortBy::EntityId:
            return "EntityId";
          case OfferSortBy::Name:
            return "Name";
          case OfferSortBy::ProductId:
            return "ProductId";
          case OfferSortBy::ReleaseDate:
            return "ReleaseDate";
          case OfferSortBy::AvailabilityEndDate:
            return "AvailabilityEndDate";
          case OfferSortBy::BuyerAccounts:
            return "BuyerAccounts";
          case OfferSortBy::State:
            return "State";
          case OfferSortBy::Targeting:
            return "Targeting";
          case OfferSortBy::LastModifiedDate:
            return "LastModifiedDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferSortByMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
