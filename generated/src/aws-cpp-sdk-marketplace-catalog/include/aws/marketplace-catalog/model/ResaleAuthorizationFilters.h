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
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationFilters() = default;
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the <code>EntityId</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationEntityIdFilter& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = ResaleAuthorizationEntityIdFilter>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = ResaleAuthorizationEntityIdFilter>
    ResaleAuthorizationFilters& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>Name</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationNameFilter& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = ResaleAuthorizationNameFilter>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = ResaleAuthorizationNameFilter>
    ResaleAuthorizationFilters& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ProductId</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationProductIdFilter& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = ResaleAuthorizationProductIdFilter>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = ResaleAuthorizationProductIdFilter>
    ResaleAuthorizationFilters& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>CreatedDate</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationCreatedDateFilter& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = ResaleAuthorizationCreatedDateFilter>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = ResaleAuthorizationCreatedDateFilter>
    ResaleAuthorizationFilters& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>AvailabilityEndDate</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationAvailabilityEndDateFilter& GetAvailabilityEndDate() const { return m_availabilityEndDate; }
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }
    template<typename AvailabilityEndDateT = ResaleAuthorizationAvailabilityEndDateFilter>
    void SetAvailabilityEndDate(AvailabilityEndDateT&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::forward<AvailabilityEndDateT>(value); }
    template<typename AvailabilityEndDateT = ResaleAuthorizationAvailabilityEndDateFilter>
    ResaleAuthorizationFilters& WithAvailabilityEndDate(AvailabilityEndDateT&& value) { SetAvailabilityEndDate(std::forward<AvailabilityEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ManufacturerAccountId</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationManufacturerAccountIdFilter& GetManufacturerAccountId() const { return m_manufacturerAccountId; }
    inline bool ManufacturerAccountIdHasBeenSet() const { return m_manufacturerAccountIdHasBeenSet; }
    template<typename ManufacturerAccountIdT = ResaleAuthorizationManufacturerAccountIdFilter>
    void SetManufacturerAccountId(ManufacturerAccountIdT&& value) { m_manufacturerAccountIdHasBeenSet = true; m_manufacturerAccountId = std::forward<ManufacturerAccountIdT>(value); }
    template<typename ManufacturerAccountIdT = ResaleAuthorizationManufacturerAccountIdFilter>
    ResaleAuthorizationFilters& WithManufacturerAccountId(ManufacturerAccountIdT&& value) { SetManufacturerAccountId(std::forward<ManufacturerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ProductName</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationProductNameFilter& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = ResaleAuthorizationProductNameFilter>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = ResaleAuthorizationProductNameFilter>
    ResaleAuthorizationFilters& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ManufacturerLegalName</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationManufacturerLegalNameFilter& GetManufacturerLegalName() const { return m_manufacturerLegalName; }
    inline bool ManufacturerLegalNameHasBeenSet() const { return m_manufacturerLegalNameHasBeenSet; }
    template<typename ManufacturerLegalNameT = ResaleAuthorizationManufacturerLegalNameFilter>
    void SetManufacturerLegalName(ManufacturerLegalNameT&& value) { m_manufacturerLegalNameHasBeenSet = true; m_manufacturerLegalName = std::forward<ManufacturerLegalNameT>(value); }
    template<typename ManufacturerLegalNameT = ResaleAuthorizationManufacturerLegalNameFilter>
    ResaleAuthorizationFilters& WithManufacturerLegalName(ManufacturerLegalNameT&& value) { SetManufacturerLegalName(std::forward<ManufacturerLegalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ResellerAccountID</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationResellerAccountIDFilter& GetResellerAccountID() const { return m_resellerAccountID; }
    inline bool ResellerAccountIDHasBeenSet() const { return m_resellerAccountIDHasBeenSet; }
    template<typename ResellerAccountIDT = ResaleAuthorizationResellerAccountIDFilter>
    void SetResellerAccountID(ResellerAccountIDT&& value) { m_resellerAccountIDHasBeenSet = true; m_resellerAccountID = std::forward<ResellerAccountIDT>(value); }
    template<typename ResellerAccountIDT = ResaleAuthorizationResellerAccountIDFilter>
    ResaleAuthorizationFilters& WithResellerAccountID(ResellerAccountIDT&& value) { SetResellerAccountID(std::forward<ResellerAccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>ResellerLegalName</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationResellerLegalNameFilter& GetResellerLegalName() const { return m_resellerLegalName; }
    inline bool ResellerLegalNameHasBeenSet() const { return m_resellerLegalNameHasBeenSet; }
    template<typename ResellerLegalNameT = ResaleAuthorizationResellerLegalNameFilter>
    void SetResellerLegalName(ResellerLegalNameT&& value) { m_resellerLegalNameHasBeenSet = true; m_resellerLegalName = std::forward<ResellerLegalNameT>(value); }
    template<typename ResellerLegalNameT = ResaleAuthorizationResellerLegalNameFilter>
    ResaleAuthorizationFilters& WithResellerLegalName(ResellerLegalNameT&& value) { SetResellerLegalName(std::forward<ResellerLegalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>Status</code> of a ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationStatusFilter& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ResaleAuthorizationStatusFilter>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ResaleAuthorizationStatusFilter>
    ResaleAuthorizationFilters& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>OfferExtendedStatus</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationOfferExtendedStatusFilter& GetOfferExtendedStatus() const { return m_offerExtendedStatus; }
    inline bool OfferExtendedStatusHasBeenSet() const { return m_offerExtendedStatusHasBeenSet; }
    template<typename OfferExtendedStatusT = ResaleAuthorizationOfferExtendedStatusFilter>
    void SetOfferExtendedStatus(OfferExtendedStatusT&& value) { m_offerExtendedStatusHasBeenSet = true; m_offerExtendedStatus = std::forward<OfferExtendedStatusT>(value); }
    template<typename OfferExtendedStatusT = ResaleAuthorizationOfferExtendedStatusFilter>
    ResaleAuthorizationFilters& WithOfferExtendedStatus(OfferExtendedStatusT&& value) { SetOfferExtendedStatus(std::forward<OfferExtendedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the <code>LastModifiedDate</code> of a
     * ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = ResaleAuthorizationLastModifiedDateFilter>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = ResaleAuthorizationLastModifiedDateFilter>
    ResaleAuthorizationFilters& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
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
