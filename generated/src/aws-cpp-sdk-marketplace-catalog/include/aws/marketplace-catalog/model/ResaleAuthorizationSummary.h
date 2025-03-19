/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationStatusString.h>
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
   * <p>Summarized information about a Resale Authorization.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationSummary">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationSummary
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSummary() = default;
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResaleAuthorizationSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ResaleAuthorizationSummary& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    ResaleAuthorizationSummary& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetManufacturerAccountId() const { return m_manufacturerAccountId; }
    inline bool ManufacturerAccountIdHasBeenSet() const { return m_manufacturerAccountIdHasBeenSet; }
    template<typename ManufacturerAccountIdT = Aws::String>
    void SetManufacturerAccountId(ManufacturerAccountIdT&& value) { m_manufacturerAccountIdHasBeenSet = true; m_manufacturerAccountId = std::forward<ManufacturerAccountIdT>(value); }
    template<typename ManufacturerAccountIdT = Aws::String>
    ResaleAuthorizationSummary& WithManufacturerAccountId(ManufacturerAccountIdT&& value) { SetManufacturerAccountId(std::forward<ManufacturerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetManufacturerLegalName() const { return m_manufacturerLegalName; }
    inline bool ManufacturerLegalNameHasBeenSet() const { return m_manufacturerLegalNameHasBeenSet; }
    template<typename ManufacturerLegalNameT = Aws::String>
    void SetManufacturerLegalName(ManufacturerLegalNameT&& value) { m_manufacturerLegalNameHasBeenSet = true; m_manufacturerLegalName = std::forward<ManufacturerLegalNameT>(value); }
    template<typename ManufacturerLegalNameT = Aws::String>
    ResaleAuthorizationSummary& WithManufacturerLegalName(ManufacturerLegalNameT&& value) { SetManufacturerLegalName(std::forward<ManufacturerLegalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetResellerAccountID() const { return m_resellerAccountID; }
    inline bool ResellerAccountIDHasBeenSet() const { return m_resellerAccountIDHasBeenSet; }
    template<typename ResellerAccountIDT = Aws::String>
    void SetResellerAccountID(ResellerAccountIDT&& value) { m_resellerAccountIDHasBeenSet = true; m_resellerAccountID = std::forward<ResellerAccountIDT>(value); }
    template<typename ResellerAccountIDT = Aws::String>
    ResaleAuthorizationSummary& WithResellerAccountID(ResellerAccountIDT&& value) { SetResellerAccountID(std::forward<ResellerAccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline const Aws::String& GetResellerLegalName() const { return m_resellerLegalName; }
    inline bool ResellerLegalNameHasBeenSet() const { return m_resellerLegalNameHasBeenSet; }
    template<typename ResellerLegalNameT = Aws::String>
    void SetResellerLegalName(ResellerLegalNameT&& value) { m_resellerLegalNameHasBeenSet = true; m_resellerLegalName = std::forward<ResellerLegalNameT>(value); }
    template<typename ResellerLegalNameT = Aws::String>
    ResaleAuthorizationSummary& WithResellerLegalName(ResellerLegalNameT&& value) { SetResellerLegalName(std::forward<ResellerLegalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationStatusString GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResaleAuthorizationStatusString value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResaleAuthorizationSummary& WithStatus(ResaleAuthorizationStatusString value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline const Aws::String& GetOfferExtendedStatus() const { return m_offerExtendedStatus; }
    inline bool OfferExtendedStatusHasBeenSet() const { return m_offerExtendedStatusHasBeenSet; }
    template<typename OfferExtendedStatusT = Aws::String>
    void SetOfferExtendedStatus(OfferExtendedStatusT&& value) { m_offerExtendedStatusHasBeenSet = true; m_offerExtendedStatus = std::forward<OfferExtendedStatusT>(value); }
    template<typename OfferExtendedStatusT = Aws::String>
    ResaleAuthorizationSummary& WithOfferExtendedStatus(OfferExtendedStatusT&& value) { SetOfferExtendedStatus(std::forward<OfferExtendedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    ResaleAuthorizationSummary& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetAvailabilityEndDate() const { return m_availabilityEndDate; }
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }
    template<typename AvailabilityEndDateT = Aws::String>
    void SetAvailabilityEndDate(AvailabilityEndDateT&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::forward<AvailabilityEndDateT>(value); }
    template<typename AvailabilityEndDateT = Aws::String>
    ResaleAuthorizationSummary& WithAvailabilityEndDate(AvailabilityEndDateT&& value) { SetAvailabilityEndDate(std::forward<AvailabilityEndDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_manufacturerAccountId;
    bool m_manufacturerAccountIdHasBeenSet = false;

    Aws::String m_manufacturerLegalName;
    bool m_manufacturerLegalNameHasBeenSet = false;

    Aws::String m_resellerAccountID;
    bool m_resellerAccountIDHasBeenSet = false;

    Aws::String m_resellerLegalName;
    bool m_resellerLegalNameHasBeenSet = false;

    ResaleAuthorizationStatusString m_status{ResaleAuthorizationStatusString::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_offerExtendedStatus;
    bool m_offerExtendedStatusHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_availabilityEndDate;
    bool m_availabilityEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
