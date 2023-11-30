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
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSummary();
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>The product name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithProductName(const char* value) { SetProductName(value); return *this;}


    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetManufacturerAccountId() const{ return m_manufacturerAccountId; }

    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline bool ManufacturerAccountIdHasBeenSet() const { return m_manufacturerAccountIdHasBeenSet; }

    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline void SetManufacturerAccountId(const Aws::String& value) { m_manufacturerAccountIdHasBeenSet = true; m_manufacturerAccountId = value; }

    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline void SetManufacturerAccountId(Aws::String&& value) { m_manufacturerAccountIdHasBeenSet = true; m_manufacturerAccountId = std::move(value); }

    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline void SetManufacturerAccountId(const char* value) { m_manufacturerAccountIdHasBeenSet = true; m_manufacturerAccountId.assign(value); }

    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithManufacturerAccountId(const Aws::String& value) { SetManufacturerAccountId(value); return *this;}

    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithManufacturerAccountId(Aws::String&& value) { SetManufacturerAccountId(std::move(value)); return *this;}

    /**
     * <p>The manufacturer account ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithManufacturerAccountId(const char* value) { SetManufacturerAccountId(value); return *this;}


    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetManufacturerLegalName() const{ return m_manufacturerLegalName; }

    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline bool ManufacturerLegalNameHasBeenSet() const { return m_manufacturerLegalNameHasBeenSet; }

    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline void SetManufacturerLegalName(const Aws::String& value) { m_manufacturerLegalNameHasBeenSet = true; m_manufacturerLegalName = value; }

    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline void SetManufacturerLegalName(Aws::String&& value) { m_manufacturerLegalNameHasBeenSet = true; m_manufacturerLegalName = std::move(value); }

    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline void SetManufacturerLegalName(const char* value) { m_manufacturerLegalNameHasBeenSet = true; m_manufacturerLegalName.assign(value); }

    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithManufacturerLegalName(const Aws::String& value) { SetManufacturerLegalName(value); return *this;}

    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithManufacturerLegalName(Aws::String&& value) { SetManufacturerLegalName(std::move(value)); return *this;}

    /**
     * <p>The manufacturer legal name of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithManufacturerLegalName(const char* value) { SetManufacturerLegalName(value); return *this;}


    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetResellerAccountID() const{ return m_resellerAccountID; }

    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline bool ResellerAccountIDHasBeenSet() const { return m_resellerAccountIDHasBeenSet; }

    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline void SetResellerAccountID(const Aws::String& value) { m_resellerAccountIDHasBeenSet = true; m_resellerAccountID = value; }

    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline void SetResellerAccountID(Aws::String&& value) { m_resellerAccountIDHasBeenSet = true; m_resellerAccountID = std::move(value); }

    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline void SetResellerAccountID(const char* value) { m_resellerAccountIDHasBeenSet = true; m_resellerAccountID.assign(value); }

    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithResellerAccountID(const Aws::String& value) { SetResellerAccountID(value); return *this;}

    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithResellerAccountID(Aws::String&& value) { SetResellerAccountID(std::move(value)); return *this;}

    /**
     * <p>The reseller account ID of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithResellerAccountID(const char* value) { SetResellerAccountID(value); return *this;}


    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline const Aws::String& GetResellerLegalName() const{ return m_resellerLegalName; }

    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline bool ResellerLegalNameHasBeenSet() const { return m_resellerLegalNameHasBeenSet; }

    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline void SetResellerLegalName(const Aws::String& value) { m_resellerLegalNameHasBeenSet = true; m_resellerLegalName = value; }

    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline void SetResellerLegalName(Aws::String&& value) { m_resellerLegalNameHasBeenSet = true; m_resellerLegalName = std::move(value); }

    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline void SetResellerLegalName(const char* value) { m_resellerLegalNameHasBeenSet = true; m_resellerLegalName.assign(value); }

    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline ResaleAuthorizationSummary& WithResellerLegalName(const Aws::String& value) { SetResellerLegalName(value); return *this;}

    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline ResaleAuthorizationSummary& WithResellerLegalName(Aws::String&& value) { SetResellerLegalName(std::move(value)); return *this;}

    /**
     * <p>The reseller legal name of the ResaleAuthorization</p>
     */
    inline ResaleAuthorizationSummary& WithResellerLegalName(const char* value) { SetResellerLegalName(value); return *this;}


    /**
     * <p>The status of the ResaleAuthorization.</p>
     */
    inline const ResaleAuthorizationStatusString& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ResaleAuthorization.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the ResaleAuthorization.</p>
     */
    inline void SetStatus(const ResaleAuthorizationStatusString& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ResaleAuthorization.</p>
     */
    inline void SetStatus(ResaleAuthorizationStatusString&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithStatus(const ResaleAuthorizationStatusString& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithStatus(ResaleAuthorizationStatusString&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline const Aws::String& GetOfferExtendedStatus() const{ return m_offerExtendedStatus; }

    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline bool OfferExtendedStatusHasBeenSet() const { return m_offerExtendedStatusHasBeenSet; }

    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline void SetOfferExtendedStatus(const Aws::String& value) { m_offerExtendedStatusHasBeenSet = true; m_offerExtendedStatus = value; }

    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline void SetOfferExtendedStatus(Aws::String&& value) { m_offerExtendedStatusHasBeenSet = true; m_offerExtendedStatus = std::move(value); }

    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline void SetOfferExtendedStatus(const char* value) { m_offerExtendedStatusHasBeenSet = true; m_offerExtendedStatus.assign(value); }

    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline ResaleAuthorizationSummary& WithOfferExtendedStatus(const Aws::String& value) { SetOfferExtendedStatus(value); return *this;}

    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline ResaleAuthorizationSummary& WithOfferExtendedStatus(Aws::String&& value) { SetOfferExtendedStatus(std::move(value)); return *this;}

    /**
     * <p>The offer extended status of the ResaleAuthorization</p>
     */
    inline ResaleAuthorizationSummary& WithOfferExtendedStatus(const char* value) { SetOfferExtendedStatus(value); return *this;}


    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }

    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>The created date of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline const Aws::String& GetAvailabilityEndDate() const{ return m_availabilityEndDate; }

    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline bool AvailabilityEndDateHasBeenSet() const { return m_availabilityEndDateHasBeenSet; }

    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline void SetAvailabilityEndDate(const Aws::String& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = value; }

    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline void SetAvailabilityEndDate(Aws::String&& value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate = std::move(value); }

    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline void SetAvailabilityEndDate(const char* value) { m_availabilityEndDateHasBeenSet = true; m_availabilityEndDate.assign(value); }

    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithAvailabilityEndDate(const Aws::String& value) { SetAvailabilityEndDate(value); return *this;}

    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithAvailabilityEndDate(Aws::String&& value) { SetAvailabilityEndDate(std::move(value)); return *this;}

    /**
     * <p>The availability end date of the ResaleAuthorization.</p>
     */
    inline ResaleAuthorizationSummary& WithAvailabilityEndDate(const char* value) { SetAvailabilityEndDate(value); return *this;}

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

    ResaleAuthorizationStatusString m_status;
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
