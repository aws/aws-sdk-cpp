/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/AdditionalInfoResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/Address.h>
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
   * <p>Your TRN information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxRegistration">AWS
   * API Reference</a></p>
   */
  class TaxRegistration
  {
  public:
    AWS_TAXSETTINGS_API TaxRegistration() = default;
    AWS_TAXSETTINGS_API TaxRegistration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxRegistration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Additional tax information associated with your TRN. </p>
     */
    inline const AdditionalInfoResponse& GetAdditionalTaxInformation() const { return m_additionalTaxInformation; }
    inline bool AdditionalTaxInformationHasBeenSet() const { return m_additionalTaxInformationHasBeenSet; }
    template<typename AdditionalTaxInformationT = AdditionalInfoResponse>
    void SetAdditionalTaxInformation(AdditionalTaxInformationT&& value) { m_additionalTaxInformationHasBeenSet = true; m_additionalTaxInformation = std::forward<AdditionalTaxInformationT>(value); }
    template<typename AdditionalTaxInformationT = AdditionalInfoResponse>
    TaxRegistration& WithAdditionalTaxInformation(AdditionalTaxInformationT&& value) { SetAdditionalTaxInformation(std::forward<AdditionalTaxInformationT>(value)); return *this;}
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
    TaxRegistration& WithCertifiedEmailId(CertifiedEmailIdT&& value) { SetCertifiedEmailId(std::forward<CertifiedEmailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The legal address associated with your TRN registration. </p>
     */
    inline const Address& GetLegalAddress() const { return m_legalAddress; }
    inline bool LegalAddressHasBeenSet() const { return m_legalAddressHasBeenSet; }
    template<typename LegalAddressT = Address>
    void SetLegalAddress(LegalAddressT&& value) { m_legalAddressHasBeenSet = true; m_legalAddress = std::forward<LegalAddressT>(value); }
    template<typename LegalAddressT = Address>
    TaxRegistration& WithLegalAddress(LegalAddressT&& value) { SetLegalAddress(std::forward<LegalAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The legal name associated with your TRN registration. </p>
     */
    inline const Aws::String& GetLegalName() const { return m_legalName; }
    inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
    template<typename LegalNameT = Aws::String>
    void SetLegalName(LegalNameT&& value) { m_legalNameHasBeenSet = true; m_legalName = std::forward<LegalNameT>(value); }
    template<typename LegalNameT = Aws::String>
    TaxRegistration& WithLegalName(LegalNameT&& value) { SetLegalName(std::forward<LegalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Your tax registration unique identifier. </p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    TaxRegistration& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of your tax registration. </p>
     */
    inline TaxRegistrationType GetRegistrationType() const { return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(TaxRegistrationType value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline TaxRegistration& WithRegistrationType(TaxRegistrationType value) { SetRegistrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The industry that describes your business. For business-to-business (B2B)
     * customers, specify Business. For business-to-consumer (B2C) customers, specify
     * Individual. For business-to-government (B2G), specify Government. Note that
     * certain values may not applicable for the request country. Please refer to
     * country specific information in API document. </p>
     */
    inline Sector GetSector() const { return m_sector; }
    inline bool SectorHasBeenSet() const { return m_sectorHasBeenSet; }
    inline void SetSector(Sector value) { m_sectorHasBeenSet = true; m_sector = value; }
    inline TaxRegistration& WithSector(Sector value) { SetSector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of your TRN. This can be either <code>Verified</code>,
     * <code>Pending</code>, <code>Deleted</code>, or <code>Rejected</code>. </p>
     */
    inline TaxRegistrationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaxRegistrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaxRegistration& WithStatus(TaxRegistrationStatus value) { SetStatus(value); return *this;}
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
    TaxRegistration& WithTaxDocumentMetadatas(TaxDocumentMetadatasT&& value) { SetTaxDocumentMetadatas(std::forward<TaxDocumentMetadatasT>(value)); return *this;}
    template<typename TaxDocumentMetadatasT = TaxDocumentMetadata>
    TaxRegistration& AddTaxDocumentMetadatas(TaxDocumentMetadatasT&& value) { m_taxDocumentMetadatasHasBeenSet = true; m_taxDocumentMetadatas.emplace_back(std::forward<TaxDocumentMetadatasT>(value)); return *this; }
    ///@}
  private:

    AdditionalInfoResponse m_additionalTaxInformation;
    bool m_additionalTaxInformationHasBeenSet = false;

    Aws::String m_certifiedEmailId;
    bool m_certifiedEmailIdHasBeenSet = false;

    Address m_legalAddress;
    bool m_legalAddressHasBeenSet = false;

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
