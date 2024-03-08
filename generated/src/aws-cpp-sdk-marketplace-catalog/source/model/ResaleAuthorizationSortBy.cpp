/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ResaleAuthorizationSortBy.h>
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
      namespace ResaleAuthorizationSortByMapper
      {

        static const int EntityId_HASH = HashingUtils::HashString("EntityId");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int ProductId_HASH = HashingUtils::HashString("ProductId");
        static const int ProductName_HASH = HashingUtils::HashString("ProductName");
        static const int ManufacturerAccountId_HASH = HashingUtils::HashString("ManufacturerAccountId");
        static const int ManufacturerLegalName_HASH = HashingUtils::HashString("ManufacturerLegalName");
        static const int ResellerAccountID_HASH = HashingUtils::HashString("ResellerAccountID");
        static const int ResellerLegalName_HASH = HashingUtils::HashString("ResellerLegalName");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int OfferExtendedStatus_HASH = HashingUtils::HashString("OfferExtendedStatus");
        static const int CreatedDate_HASH = HashingUtils::HashString("CreatedDate");
        static const int AvailabilityEndDate_HASH = HashingUtils::HashString("AvailabilityEndDate");
        static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");


        ResaleAuthorizationSortBy GetResaleAuthorizationSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EntityId_HASH)
          {
            return ResaleAuthorizationSortBy::EntityId;
          }
          else if (hashCode == Name_HASH)
          {
            return ResaleAuthorizationSortBy::Name;
          }
          else if (hashCode == ProductId_HASH)
          {
            return ResaleAuthorizationSortBy::ProductId;
          }
          else if (hashCode == ProductName_HASH)
          {
            return ResaleAuthorizationSortBy::ProductName;
          }
          else if (hashCode == ManufacturerAccountId_HASH)
          {
            return ResaleAuthorizationSortBy::ManufacturerAccountId;
          }
          else if (hashCode == ManufacturerLegalName_HASH)
          {
            return ResaleAuthorizationSortBy::ManufacturerLegalName;
          }
          else if (hashCode == ResellerAccountID_HASH)
          {
            return ResaleAuthorizationSortBy::ResellerAccountID;
          }
          else if (hashCode == ResellerLegalName_HASH)
          {
            return ResaleAuthorizationSortBy::ResellerLegalName;
          }
          else if (hashCode == Status_HASH)
          {
            return ResaleAuthorizationSortBy::Status;
          }
          else if (hashCode == OfferExtendedStatus_HASH)
          {
            return ResaleAuthorizationSortBy::OfferExtendedStatus;
          }
          else if (hashCode == CreatedDate_HASH)
          {
            return ResaleAuthorizationSortBy::CreatedDate;
          }
          else if (hashCode == AvailabilityEndDate_HASH)
          {
            return ResaleAuthorizationSortBy::AvailabilityEndDate;
          }
          else if (hashCode == LastModifiedDate_HASH)
          {
            return ResaleAuthorizationSortBy::LastModifiedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResaleAuthorizationSortBy>(hashCode);
          }

          return ResaleAuthorizationSortBy::NOT_SET;
        }

        Aws::String GetNameForResaleAuthorizationSortBy(ResaleAuthorizationSortBy enumValue)
        {
          switch(enumValue)
          {
          case ResaleAuthorizationSortBy::NOT_SET:
            return {};
          case ResaleAuthorizationSortBy::EntityId:
            return "EntityId";
          case ResaleAuthorizationSortBy::Name:
            return "Name";
          case ResaleAuthorizationSortBy::ProductId:
            return "ProductId";
          case ResaleAuthorizationSortBy::ProductName:
            return "ProductName";
          case ResaleAuthorizationSortBy::ManufacturerAccountId:
            return "ManufacturerAccountId";
          case ResaleAuthorizationSortBy::ManufacturerLegalName:
            return "ManufacturerLegalName";
          case ResaleAuthorizationSortBy::ResellerAccountID:
            return "ResellerAccountID";
          case ResaleAuthorizationSortBy::ResellerLegalName:
            return "ResellerLegalName";
          case ResaleAuthorizationSortBy::Status:
            return "Status";
          case ResaleAuthorizationSortBy::OfferExtendedStatus:
            return "OfferExtendedStatus";
          case ResaleAuthorizationSortBy::CreatedDate:
            return "CreatedDate";
          case ResaleAuthorizationSortBy::AvailabilityEndDate:
            return "AvailabilityEndDate";
          case ResaleAuthorizationSortBy::LastModifiedDate:
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

      } // namespace ResaleAuthorizationSortByMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
