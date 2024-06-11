/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/AdditionalInfoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/Address.h>
#include <aws/taxsettings/model/TaxRegistrationType.h>
#include <aws/taxsettings/model/Sector.h>
#include <aws/taxsettings/model/VerificationDetails.h>
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
   * <p>The TRN information you provide when you add a new TRN, or update.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxRegistrationEntry">AWS
   * API Reference</a></p>
   */
  class TaxRegistrationEntry
  {
  public:
    AWS_TAXSETTINGS_API TaxRegistrationEntry();
    AWS_TAXSETTINGS_API TaxRegistrationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxRegistrationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Additional tax information associated with your TRN. You only need to
     * specify this parameter if Amazon Web Services collects any additional
     * information for your country within <a>AdditionalInfoRequest</a>.</p>
     */
    inline const AdditionalInfoRequest& GetAdditionalTaxInformation() const{ return m_additionalTaxInformation; }
    inline bool AdditionalTaxInformationHasBeenSet() const { return m_additionalTaxInformationHasBeenSet; }
    inline void SetAdditionalTaxInformation(const AdditionalInfoRequest& value) { m_additionalTaxInformationHasBeenSet = true; m_additionalTaxInformation = value; }
    inline void SetAdditionalTaxInformation(AdditionalInfoRequest&& value) { m_additionalTaxInformationHasBeenSet = true; m_additionalTaxInformation = std::move(value); }
    inline TaxRegistrationEntry& WithAdditionalTaxInformation(const AdditionalInfoRequest& value) { SetAdditionalTaxInformation(value); return *this;}
    inline TaxRegistrationEntry& WithAdditionalTaxInformation(AdditionalInfoRequest&& value) { SetAdditionalTaxInformation(std::move(value)); return *this;}
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
    inline TaxRegistrationEntry& WithCertifiedEmailId(const Aws::String& value) { SetCertifiedEmailId(value); return *this;}
    inline TaxRegistrationEntry& WithCertifiedEmailId(Aws::String&& value) { SetCertifiedEmailId(std::move(value)); return *this;}
    inline TaxRegistrationEntry& WithCertifiedEmailId(const char* value) { SetCertifiedEmailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legal address associated with your TRN.</p>  <p>If you're setting a
     * TRN in Brazil for the CNPJ tax type, you don't need to specify the legal
     * address. </p> <p>For TRNs in other countries and for CPF tax types Brazil, you
     * must specify the legal address.</p> 
     */
    inline const Address& GetLegalAddress() const{ return m_legalAddress; }
    inline bool LegalAddressHasBeenSet() const { return m_legalAddressHasBeenSet; }
    inline void SetLegalAddress(const Address& value) { m_legalAddressHasBeenSet = true; m_legalAddress = value; }
    inline void SetLegalAddress(Address&& value) { m_legalAddressHasBeenSet = true; m_legalAddress = std::move(value); }
    inline TaxRegistrationEntry& WithLegalAddress(const Address& value) { SetLegalAddress(value); return *this;}
    inline TaxRegistrationEntry& WithLegalAddress(Address&& value) { SetLegalAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legal name associated with your TRN. </p>  <p>If you're setting a
     * TRN in Brazil, you don't need to specify the legal name. For TRNs in other
     * countries, you must specify the legal name.</p> 
     */
    inline const Aws::String& GetLegalName() const{ return m_legalName; }
    inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
    inline void SetLegalName(const Aws::String& value) { m_legalNameHasBeenSet = true; m_legalName = value; }
    inline void SetLegalName(Aws::String&& value) { m_legalNameHasBeenSet = true; m_legalName = std::move(value); }
    inline void SetLegalName(const char* value) { m_legalNameHasBeenSet = true; m_legalName.assign(value); }
    inline TaxRegistrationEntry& WithLegalName(const Aws::String& value) { SetLegalName(value); return *this;}
    inline TaxRegistrationEntry& WithLegalName(Aws::String&& value) { SetLegalName(std::move(value)); return *this;}
    inline TaxRegistrationEntry& WithLegalName(const char* value) { SetLegalName(value); return *this;}
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
    inline TaxRegistrationEntry& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline TaxRegistrationEntry& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline TaxRegistrationEntry& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Your tax registration type. This can be either <code>VAT</code> or
     * <code>GST</code>. </p>
     */
    inline const TaxRegistrationType& GetRegistrationType() const{ return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(const TaxRegistrationType& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline void SetRegistrationType(TaxRegistrationType&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }
    inline TaxRegistrationEntry& WithRegistrationType(const TaxRegistrationType& value) { SetRegistrationType(value); return *this;}
    inline TaxRegistrationEntry& WithRegistrationType(TaxRegistrationType&& value) { SetRegistrationType(std::move(value)); return *this;}
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
    inline TaxRegistrationEntry& WithSector(const Sector& value) { SetSector(value); return *this;}
    inline TaxRegistrationEntry& WithSector(Sector&& value) { SetSector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details needed to verify your TRN information in Brazil. You only
     * need to specify this parameter when you set a TRN in Brazil that is the CPF tax
     * type.</p>  <p>Don't specify this parameter to set a TRN in Brazil of the
     * CNPJ tax type or to set a TRN for another country. </p> 
     */
    inline const VerificationDetails& GetVerificationDetails() const{ return m_verificationDetails; }
    inline bool VerificationDetailsHasBeenSet() const { return m_verificationDetailsHasBeenSet; }
    inline void SetVerificationDetails(const VerificationDetails& value) { m_verificationDetailsHasBeenSet = true; m_verificationDetails = value; }
    inline void SetVerificationDetails(VerificationDetails&& value) { m_verificationDetailsHasBeenSet = true; m_verificationDetails = std::move(value); }
    inline TaxRegistrationEntry& WithVerificationDetails(const VerificationDetails& value) { SetVerificationDetails(value); return *this;}
    inline TaxRegistrationEntry& WithVerificationDetails(VerificationDetails&& value) { SetVerificationDetails(std::move(value)); return *this;}
    ///@}
  private:

    AdditionalInfoRequest m_additionalTaxInformation;
    bool m_additionalTaxInformationHasBeenSet = false;

    Aws::String m_certifiedEmailId;
    bool m_certifiedEmailIdHasBeenSet = false;

    Address m_legalAddress;
    bool m_legalAddressHasBeenSet = false;

    Aws::String m_legalName;
    bool m_legalNameHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    TaxRegistrationType m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Sector m_sector;
    bool m_sectorHasBeenSet = false;

    VerificationDetails m_verificationDetails;
    bool m_verificationDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
