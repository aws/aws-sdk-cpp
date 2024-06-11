/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationEntityIdFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationNameFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationProductIdFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationCreatedDateFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationAvailabilityEndDateFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationManufacturerAccountIdFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationProductNameFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationManufacturerLegalNameFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationResellerAccountIDFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationResellerLegalNameFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationStatusFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationOfferExtendedStatusFilter.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationLastModifiedDateFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Object containing all the filter fields for resale authorization entity.
   * Client can add only one wildcard filter and a maximum of 8 filters in a single
   * <code>ListEntities</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationFilters">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationFilters();
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the <code>EntityId</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationEntityIdFilter& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const ResaleAuthorizationEntityIdFilter& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(ResaleAuthorizationEntityIdFilter&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline ResaleAuthorizationFilters& WithEntityId(const ResaleAuthorizationEntityIdFilter& value) { SetEntityId(value); return *this;}
    inline ResaleAuthorizationFilters& WithEntityId(ResaleAuthorizationEntityIdFilter&& value) { SetEntityId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>Name</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationNameFilter& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const ResaleAuthorizationNameFilter& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(ResaleAuthorizationNameFilter&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ResaleAuthorizationFilters& WithName(const ResaleAuthorizationNameFilter& value) { SetName(value); return *this;}
    inline ResaleAuthorizationFilters& WithName(ResaleAuthorizationNameFilter&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ProductId</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationProductIdFilter& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const ResaleAuthorizationProductIdFilter& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(ResaleAuthorizationProductIdFilter&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline ResaleAuthorizationFilters& WithProductId(const ResaleAuthorizationProductIdFilter& value) { SetProductId(value); return *this;}
    inline ResaleAuthorizationFilters& WithProductId(ResaleAuthorizationProductIdFilter&& value) { SetProductId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>CreatedDate</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationCreatedDateFilter& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const ResaleAuthorizationCreatedDateFilter& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(ResaleAuthorizationCreatedDateFilter&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline ResaleAuthorizationFilters& WithCreatedDate(const ResaleAuthorizationCreatedDateFilter& value) { SetCreatedDate(value); return *this;}
    inline ResaleAuthorizationFilters& WithCreatedDate(ResaleAuthorizationCreatedDateFilter&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationAvailabilityEndDateFilter& GetAvailabilityEndDate() const{ return m_availabilityEndDate; }
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }
    inline void SetAvailabilityEndDate(const ResaleAuthorizationAvailabilityEndDateFilter& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = value; }
    inline void SetAvailabilityEndDate(ResaleAuthorizationAvailabilityEndDateFilter&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::move(value); }
    inline ResaleAuthorizationFilters& WithAvailabilityEndDate(const ResaleAuthorizationAvailabilityEndDateFilter& value) { SetAvailabilityEndDate(value); return *this;}
    inline ResaleAuthorizationFilters& WithAvailabilityEndDate(ResaleAuthorizationAvailabilityEndDateFilter&& value) { SetAvailabilityEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ManufacturerAccountId</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationManufacturerAccountIdFilter& GetManufacturerAccountId() const{ return m_manufacturerAccountId; }
    inline bool ManufacturerAccountIdHasBeenSet() const { return m_manufacturerAccountIdHasBeenSet; }
    inline void SetManufacturerAccountId(const ResaleAuthorizationManufacturerAccountIdFilter& value) { m_manufacturerAccountIdHasBeenSet = true; m_manufacturerAccountId = value; }
    inline void SetManufacturerAccountId(ResaleAuthorizationManufacturerAccountIdFilter&& value) { m_manufacturerAccountIdHasBeenSet = true; m_manufacturerAccountId = std::move(value); }
    inline ResaleAuthorizationFilters& WithManufacturerAccountId(const ResaleAuthorizationManufacturerAccountIdFilter& value) { SetManufacturerAccountId(value); return *this;}
    inline ResaleAuthorizationFilters& WithManufacturerAccountId(ResaleAuthorizationManufacturerAccountIdFilter&& value) { SetManufacturerAccountId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ProductName</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationProductNameFilter& GetProductName() const{ return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    inline void SetProductName(const ResaleAuthorizationProductNameFilter& value) { m_productNameHasBeenSet = true; m_productName = value; }
    inline void SetProductName(ResaleAuthorizationProductNameFilter&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }
    inline ResaleAuthorizationFilters& WithProductName(const ResaleAuthorizationProductNameFilter& value) { SetProductName(value); return *this;}
    inline ResaleAuthorizationFilters& WithProductName(ResaleAuthorizationProductNameFilter&& value) { SetProductName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ManufacturerLegalName</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationManufacturerLegalNameFilter& GetManufacturerLegalName() const{ return m_manufacturerLegalName; }
    inline bool ManufacturerLegalNameHasBeenSet() const { return m_manufacturerLegalNameHasBeenSet; }
    inline void SetManufacturerLegalName(const ResaleAuthorizationManufacturerLegalNameFilter& value) { m_manufacturerLegalNameHasBeenSet = true; m_manufacturerLegalName = value; }
    inline void SetManufacturerLegalName(ResaleAuthorizationManufacturerLegalNameFilter&& value) { m_manufacturerLegalNameHasBeenSet = true; m_manufacturerLegalName = std::move(value); }
    inline ResaleAuthorizationFilters& WithManufacturerLegalName(const ResaleAuthorizationManufacturerLegalNameFilter& value) { SetManufacturerLegalName(value); return *this;}
    inline ResaleAuthorizationFilters& WithManufacturerLegalName(ResaleAuthorizationManufacturerLegalNameFilter&& value) { SetManufacturerLegalName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ResellerAccountID</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationResellerAccountIDFilter& GetResellerAccountID() const{ return m_resellerAccountID; }
    inline bool ResellerAccountIDHasBeenSet() const { return m_resellerAccountIDHasBeenSet; }
    inline void SetResellerAccountID(const ResaleAuthorizationResellerAccountIDFilter& value) { m_resellerAccountIDHasBeenSet = true; m_resellerAccountID = value; }
    inline void SetResellerAccountID(ResaleAuthorizationResellerAccountIDFilter&& value) { m_resellerAccountIDHasBeenSet = true; m_resellerAccountID = std::move(value); }
    inline ResaleAuthorizationFilters& WithResellerAccountID(const ResaleAuthorizationResellerAccountIDFilter& value) { SetResellerAccountID(value); return *this;}
    inline ResaleAuthorizationFilters& WithResellerAccountID(ResaleAuthorizationResellerAccountIDFilter&& value) { SetResellerAccountID(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ResellerLegalName</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationResellerLegalNameFilter& GetResellerLegalName() const{ return m_resellerLegalName; }
    inline bool ResellerLegalNameHasBeenSet() const { return m_resellerLegalNameHasBeenSet; }
    inline void SetResellerLegalName(const ResaleAuthorizationResellerLegalNameFilter& value) { m_resellerLegalNameHasBeenSet = true; m_resellerLegalName = value; }
    inline void SetResellerLegalName(ResaleAuthorizationResellerLegalNameFilter&& value) { m_resellerLegalNameHasBeenSet = true; m_resellerLegalName = std::move(value); }
    inline ResaleAuthorizationFilters& WithResellerLegalName(const ResaleAuthorizationResellerLegalNameFilter& value) { SetResellerLegalName(value); return *this;}
    inline ResaleAuthorizationFilters& WithResellerLegalName(ResaleAuthorizationResellerLegalNameFilter&& value) { SetResellerLegalName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>Status</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationStatusFilter& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResaleAuthorizationStatusFilter& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResaleAuthorizationStatusFilter&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResaleAuthorizationFilters& WithStatus(const ResaleAuthorizationStatusFilter& value) { SetStatus(value); return *this;}
    inline ResaleAuthorizationFilters& WithStatus(ResaleAuthorizationStatusFilter&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationOfferExtendedStatusFilter& GetOfferExtendedStatus() const{ return m_offerExtendedStatus; }
    inline bool OfferExtendedStatusHasBeenSet() const { return m_offerExtendedStatusHasBeenSet; }
    inline void SetOfferExtendedStatus(const ResaleAuthorizationOfferExtendedStatusFilter& value) { m_offerExtendedStatusHasBeenSet = true; m_offerExtendedStatus = value; }
    inline void SetOfferExtendedStatus(ResaleAuthorizationOfferExtendedStatusFilter&& value) { m_offerExtendedStatusHasBeenSet = true; m_offerExtendedStatus = std::move(value); }
    inline ResaleAuthorizationFilters& WithOfferExtendedStatus(const ResaleAuthorizationOfferExtendedStatusFilter& value) { SetOfferExtendedStatus(value); return *this;}
    inline ResaleAuthorizationFilters& WithOfferExtendedStatus(ResaleAuthorizationOfferExtendedStatusFilter&& value) { SetOfferExtendedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationLastModifiedDateFilter& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const ResaleAuthorizationLastModifiedDateFilter& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(ResaleAuthorizationLastModifiedDateFilter&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline ResaleAuthorizationFilters& WithLastModifiedDate(const ResaleAuthorizationLastModifiedDateFilter& value) { SetLastModifiedDate(value); return *this;}
    inline ResaleAuthorizationFilters& WithLastModifiedDate(ResaleAuthorizationLastModifiedDateFilter&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}
  private:

    ResaleAuthorizationEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    ResaleAuthorizationNameFilter m_name;
    bool m_nameHasBeenSet = false;

    ResaleAuthorizationProductIdFilter m_productId;
    bool m_productIdHasBeenSet = false;

    ResaleAuthorizationCreatedDateFilter m_createdDate;
    bool m_createdDateHasBeenSet = false;

    ResaleAuthorizationAvailabilityEndDateFilter m_availabilityEndDate;
    bool m_availabilityEndDateHasBeenSet = false;

    ResaleAuthorizationManufacturerAccountIdFilter m_manufacturerAccountId;
    bool m_manufacturerAccountIdHasBeenSet = false;

    ResaleAuthorizationProductNameFilter m_productName;
    bool m_productNameHasBeenSet = false;

    ResaleAuthorizationManufacturerLegalNameFilter m_manufacturerLegalName;
    bool m_manufacturerLegalNameHasBeenSet = false;

    ResaleAuthorizationResellerAccountIDFilter m_resellerAccountID;
    bool m_resellerAccountIDHasBeenSet = false;

    ResaleAuthorizationResellerLegalNameFilter m_resellerLegalName;
    bool m_resellerLegalNameHasBeenSet = false;

    ResaleAuthorizationStatusFilter m_status;
    bool m_statusHasBeenSet = false;

    ResaleAuthorizationOfferExtendedStatusFilter m_offerExtendedStatus;
    bool m_offerExtendedStatusHasBeenSet = false;

    ResaleAuthorizationLastModifiedDateFilter m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
