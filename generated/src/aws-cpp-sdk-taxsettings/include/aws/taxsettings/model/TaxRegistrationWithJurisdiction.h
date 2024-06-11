/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/AdditionalInfoResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/Jurisdiction.h>
#include <aws/taxsettings/model/TaxRegistrationType.h>
#include <aws/taxsettings/model/Sector.h>
#include <aws/taxsettings/model/TaxRegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/TaxDocumentMetadata.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>Your TRN information with jurisdiction details. This doesn't contain the full
   * legal address associated with the TRN information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxRegistrationWithJurisdiction">AWS
   * API Reference</a></p>
   */
  class TaxRegistrationWithJurisdiction
  {
  public:
    AWS_TAXSETTINGS_API TaxRegistrationWithJurisdiction();
    AWS_TAXSETTINGS_API TaxRegistrationWithJurisdiction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxRegistrationWithJurisdiction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional tax information associated with your TRN. </p>
     */
    inline const AdditionalInfoResponse& GetAdditionalTaxInformation() const{ return m_additionalTaxInformation; }
    inline bool AdditionalTaxInformationHasBeenSet() const { return m_additionalTaxInformationHasBeenSet; }
    inline void SetAdditionalTaxInformation(const AdditionalInfoResponse& value) { m_additionalTaxInformationHasBeenSet = true; m_additionalTaxInformation = value; }
    inline void SetAdditionalTaxInformation(AdditionalInfoResponse&& value) { m_additionalTaxInformationHasBeenSet = true; m_additionalTaxInformation = std::move(value); }
    inline TaxRegistrationWithJurisdiction& WithAdditionalTaxInformation(const AdditionalInfoResponse& value) { SetAdditionalTaxInformation(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithAdditionalTaxInformation(AdditionalInfoResponse&& value) { SetAdditionalTaxInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address to receive VAT invoices.</p>
     */
    inline const Aws::String& GetCertifiedEmailId() const{ return m_certifiedEmailId; }
    inline bool CertifiedEmailIdHasBeenSet() const { return m_certifiedEmailIdHasBeenSet; }
    inline void SetCertifiedEmailId(const Aws::String& value) { m_certifiedEmailIdHasBeenSet = true; m_certifiedEmailId = value; }
    inline void SetCertifiedEmailId(Aws::String&& value) { m_certifiedEmailIdHasBeenSet = true; m_certifiedEmailId = std::move(value); }
    inline void SetCertifiedEmailId(const char* value) { m_certifiedEmailIdHasBeenSet = true; m_certifiedEmailId.assign(value); }
    inline TaxRegistrationWithJurisdiction& WithCertifiedEmailId(const Aws::String& value) { SetCertifiedEmailId(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithCertifiedEmailId(Aws::String&& value) { SetCertifiedEmailId(std::move(value)); return *this;}
    inline TaxRegistrationWithJurisdiction& WithCertifiedEmailId(const char* value) { SetCertifiedEmailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The jurisdiction associated with your TRN information. </p>
     */
    inline const Jurisdiction& GetJurisdiction() const{ return m_jurisdiction; }
    inline bool JurisdictionHasBeenSet() const { return m_jurisdictionHasBeenSet; }
    inline void SetJurisdiction(const Jurisdiction& value) { m_jurisdictionHasBeenSet = true; m_jurisdiction = value; }
    inline void SetJurisdiction(Jurisdiction&& value) { m_jurisdictionHasBeenSet = true; m_jurisdiction = std::move(value); }
    inline TaxRegistrationWithJurisdiction& WithJurisdiction(const Jurisdiction& value) { SetJurisdiction(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithJurisdiction(Jurisdiction&& value) { SetJurisdiction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legal name associated with your TRN information. </p>
     */
    inline const Aws::String& GetLegalName() const{ return m_legalName; }
    inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
    inline void SetLegalName(const Aws::String& value) { m_legalNameHasBeenSet = true; m_legalName = value; }
    inline void SetLegalName(Aws::String&& value) { m_legalNameHasBeenSet = true; m_legalName = std::move(value); }
    inline void SetLegalName(const char* value) { m_legalNameHasBeenSet = true; m_legalName.assign(value); }
    inline TaxRegistrationWithJurisdiction& WithLegalName(const Aws::String& value) { SetLegalName(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithLegalName(Aws::String&& value) { SetLegalName(std::move(value)); return *this;}
    inline TaxRegistrationWithJurisdiction& WithLegalName(const char* value) { SetLegalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your tax registration unique identifier. </p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }
    inline TaxRegistrationWithJurisdiction& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline TaxRegistrationWithJurisdiction& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of your tax registration. This can be either <code>VAT</code> or
     * <code>GST</code>. </p>
     */
    inline const TaxRegistrationType& GetRegistrationType() const{ return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(const TaxRegistrationType& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline void SetRegistrationType(TaxRegistrationType&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }
    inline TaxRegistrationWithJurisdiction& WithRegistrationType(const TaxRegistrationType& value) { SetRegistrationType(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithRegistrationType(TaxRegistrationType&& value) { SetRegistrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The industry that describes your business. For business-to-business (B2B)
     * customers, specify Business. For business-to-consumer (B2C) customers, specify
     * Individual. For business-to-government (B2G), specify Government.Note that
     * certain values may not applicable for the request country. Please refer to
     * country specific information in API document. </p>
     */
    inline const Sector& GetSector() const{ return m_sector; }
    inline bool SectorHasBeenSet() const { return m_sectorHasBeenSet; }
    inline void SetSector(const Sector& value) { m_sectorHasBeenSet = true; m_sector = value; }
    inline void SetSector(Sector&& value) { m_sectorHasBeenSet = true; m_sector = std::move(value); }
    inline TaxRegistrationWithJurisdiction& WithSector(const Sector& value) { SetSector(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithSector(Sector&& value) { SetSector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your TRN. This can be either <code>Verified</code>,
     * <code>Pending</code>, <code>Deleted</code>, or <code>Rejected</code>. </p>
     */
    inline const TaxRegistrationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaxRegistrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaxRegistrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TaxRegistrationWithJurisdiction& WithStatus(const TaxRegistrationStatus& value) { SetStatus(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithStatus(TaxRegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for your tax document.</p>
     */
    inline const Aws::Vector<TaxDocumentMetadata>& GetTaxDocumentMetadatas() const{ return m_taxDocumentMetadatas; }
    inline bool TaxDocumentMetadatasHasBeenSet() const { return m_taxDocumentMetadatasHasBeenSet; }
    inline void SetTaxDocumentMetadatas(const Aws::Vector<TaxDocumentMetadata>& value) { m_taxDocumentMetadatasHasBeenSet = true; m_taxDocumentMetadatas = value; }
    inline void SetTaxDocumentMetadatas(Aws::Vector<TaxDocumentMetadata>&& value) { m_taxDocumentMetadatasHasBeenSet = true; m_taxDocumentMetadatas = std::move(value); }
    inline TaxRegistrationWithJurisdiction& WithTaxDocumentMetadatas(const Aws::Vector<TaxDocumentMetadata>& value) { SetTaxDocumentMetadatas(value); return *this;}
    inline TaxRegistrationWithJurisdiction& WithTaxDocumentMetadatas(Aws::Vector<TaxDocumentMetadata>&& value) { SetTaxDocumentMetadatas(std::move(value)); return *this;}
    inline TaxRegistrationWithJurisdiction& AddTaxDocumentMetadatas(const TaxDocumentMetadata& value) { m_taxDocumentMetadatasHasBeenSet = true; m_taxDocumentMetadatas.push_back(value); return *this; }
    inline TaxRegistrationWithJurisdiction& AddTaxDocumentMetadatas(TaxDocumentMetadata&& value) { m_taxDocumentMetadatasHasBeenSet = true; m_taxDocumentMetadatas.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AdditionalInfoResponse m_additionalTaxInformation;
    bool m_additionalTaxInformationHasBeenSet = false;

    Aws::String m_certifiedEmailId;
    bool m_certifiedEmailIdHasBeenSet = false;

    Jurisdiction m_jurisdiction;
    bool m_jurisdictionHasBeenSet = false;

    Aws::String m_legalName;
    bool m_legalNameHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    TaxRegistrationType m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Sector m_sector;
    bool m_sectorHasBeenSet = false;

    TaxRegistrationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<TaxDocumentMetadata> m_taxDocumentMetadatas;
    bool m_taxDocumentMetadatasHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
