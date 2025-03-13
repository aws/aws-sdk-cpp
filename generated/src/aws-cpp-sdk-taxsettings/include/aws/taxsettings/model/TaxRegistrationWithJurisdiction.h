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
    AWS_TAXSETTINGS_API TaxRegistrationWithJurisdiction() = default;
    AWS_TAXSETTINGS_API TaxRegistrationWithJurisdiction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxRegistrationWithJurisdiction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional tax information associated with your TRN. </p>
     */
    inline const AdditionalInfoResponse& GetAdditionalTaxInformation() const { return m_additionalTaxInformation; }
    inline bool AdditionalTaxInformationHasBeenSet() const { return m_additionalTaxInformationHasBeenSet; }
    template<typename AdditionalTaxInformationT = AdditionalInfoResponse>
    void SetAdditionalTaxInformation(AdditionalTaxInformationT&& value) { m_additionalTaxInformationHasBeenSet = true; m_additionalTaxInformation = std::forward<AdditionalTaxInformationT>(value); }
    template<typename AdditionalTaxInformationT = AdditionalInfoResponse>
    TaxRegistrationWithJurisdiction& WithAdditionalTaxInformation(AdditionalTaxInformationT&& value) { SetAdditionalTaxInformation(std::forward<AdditionalTaxInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address to receive VAT invoices.</p>
     */
    inline const Aws::String& GetCertifiedEmailId() const { return m_certifiedEmailId; }
    inline bool CertifiedEmailIdHasBeenSet() const { return m_certifiedEmailIdHasBeenSet; }
    template<typename CertifiedEmailIdT = Aws::String>
    void SetCertifiedEmailId(CertifiedEmailIdT&& value) { m_certifiedEmailIdHasBeenSet = true; m_certifiedEmailId = std::forward<CertifiedEmailIdT>(value); }
    template<typename CertifiedEmailIdT = Aws::String>
    TaxRegistrationWithJurisdiction& WithCertifiedEmailId(CertifiedEmailIdT&& value) { SetCertifiedEmailId(std::forward<CertifiedEmailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The jurisdiction associated with your TRN information. </p>
     */
    inline const Jurisdiction& GetJurisdiction() const { return m_jurisdiction; }
    inline bool JurisdictionHasBeenSet() const { return m_jurisdictionHasBeenSet; }
    template<typename JurisdictionT = Jurisdiction>
    void SetJurisdiction(JurisdictionT&& value) { m_jurisdictionHasBeenSet = true; m_jurisdiction = std::forward<JurisdictionT>(value); }
    template<typename JurisdictionT = Jurisdiction>
    TaxRegistrationWithJurisdiction& WithJurisdiction(JurisdictionT&& value) { SetJurisdiction(std::forward<JurisdictionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legal name associated with your TRN information. </p>
     */
    inline const Aws::String& GetLegalName() const { return m_legalName; }
    inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
    template<typename LegalNameT = Aws::String>
    void SetLegalName(LegalNameT&& value) { m_legalNameHasBeenSet = true; m_legalName = std::forward<LegalNameT>(value); }
    template<typename LegalNameT = Aws::String>
    TaxRegistrationWithJurisdiction& WithLegalName(LegalNameT&& value) { SetLegalName(std::forward<LegalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your tax registration unique identifier. </p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    TaxRegistrationWithJurisdiction& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of your tax registration. This can be either <code>VAT</code> or
     * <code>GST</code>. </p>
     */
    inline TaxRegistrationType GetRegistrationType() const { return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(TaxRegistrationType value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline TaxRegistrationWithJurisdiction& WithRegistrationType(TaxRegistrationType value) { SetRegistrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The industry that describes your business. For business-to-business (B2B)
     * customers, specify Business. For business-to-consumer (B2C) customers, specify
     * Individual. For business-to-government (B2G), specify Government.Note that
     * certain values may not applicable for the request country. Please refer to
     * country specific information in API document. </p>
     */
    inline Sector GetSector() const { return m_sector; }
    inline bool SectorHasBeenSet() const { return m_sectorHasBeenSet; }
    inline void SetSector(Sector value) { m_sectorHasBeenSet = true; m_sector = value; }
    inline TaxRegistrationWithJurisdiction& WithSector(Sector value) { SetSector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your TRN. This can be either <code>Verified</code>,
     * <code>Pending</code>, <code>Deleted</code>, or <code>Rejected</code>. </p>
     */
    inline TaxRegistrationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaxRegistrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaxRegistrationWithJurisdiction& WithStatus(TaxRegistrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for your tax document.</p>
     */
    inline const Aws::Vector<TaxDocumentMetadata>& GetTaxDocumentMetadatas() const { return m_taxDocumentMetadatas; }
    inline bool TaxDocumentMetadatasHasBeenSet() const { return m_taxDocumentMetadatasHasBeenSet; }
    template<typename TaxDocumentMetadatasT = Aws::Vector<TaxDocumentMetadata>>
    void SetTaxDocumentMetadatas(TaxDocumentMetadatasT&& value) { m_taxDocumentMetadatasHasBeenSet = true; m_taxDocumentMetadatas = std::forward<TaxDocumentMetadatasT>(value); }
    template<typename TaxDocumentMetadatasT = Aws::Vector<TaxDocumentMetadata>>
    TaxRegistrationWithJurisdiction& WithTaxDocumentMetadatas(TaxDocumentMetadatasT&& value) { SetTaxDocumentMetadatas(std::forward<TaxDocumentMetadatasT>(value)); return *this;}
    template<typename TaxDocumentMetadatasT = TaxDocumentMetadata>
    TaxRegistrationWithJurisdiction& AddTaxDocumentMetadatas(TaxDocumentMetadatasT&& value) { m_taxDocumentMetadatasHasBeenSet = true; m_taxDocumentMetadatas.emplace_back(std::forward<TaxDocumentMetadatasT>(value)); return *this; }
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

    TaxRegistrationType m_registrationType{TaxRegistrationType::NOT_SET};
    bool m_registrationTypeHasBeenSet = false;

    Sector m_sector{Sector::NOT_SET};
    bool m_sectorHasBeenSet = false;

    TaxRegistrationStatus m_status{TaxRegistrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<TaxDocumentMetadata> m_taxDocumentMetadatas;
    bool m_taxDocumentMetadatasHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
