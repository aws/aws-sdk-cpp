/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Metadata used in generating the CSR</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/CertificateSubjectType">AWS
   * API Reference</a></p>
   */
  class CertificateSubjectType
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API CertificateSubjectType() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API CertificateSubjectType(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API CertificateSubjectType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Common Name to be used in the certificate signing request</p>
     */
    inline const Aws::String& GetCommonName() const { return m_commonName; }
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
    template<typename CommonNameT = Aws::String>
    void SetCommonName(CommonNameT&& value) { m_commonNameHasBeenSet = true; m_commonName = std::forward<CommonNameT>(value); }
    template<typename CommonNameT = Aws::String>
    CertificateSubjectType& WithCommonName(CommonNameT&& value) { SetCommonName(std::forward<CommonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Organization Unit to be used in the certificate signing request</p>
     */
    inline const Aws::String& GetOrganizationUnit() const { return m_organizationUnit; }
    inline bool OrganizationUnitHasBeenSet() const { return m_organizationUnitHasBeenSet; }
    template<typename OrganizationUnitT = Aws::String>
    void SetOrganizationUnit(OrganizationUnitT&& value) { m_organizationUnitHasBeenSet = true; m_organizationUnit = std::forward<OrganizationUnitT>(value); }
    template<typename OrganizationUnitT = Aws::String>
    CertificateSubjectType& WithOrganizationUnit(OrganizationUnitT&& value) { SetOrganizationUnit(std::forward<OrganizationUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Organization to be used in the certificate signing request</p>
     */
    inline const Aws::String& GetOrganization() const { return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    template<typename OrganizationT = Aws::String>
    void SetOrganization(OrganizationT&& value) { m_organizationHasBeenSet = true; m_organization = std::forward<OrganizationT>(value); }
    template<typename OrganizationT = Aws::String>
    CertificateSubjectType& WithOrganization(OrganizationT&& value) { SetOrganization(std::forward<OrganizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>City to be used in the certificate signing request</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    CertificateSubjectType& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Country to be used in the certificate signing request</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    CertificateSubjectType& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State Or Province to be used in the certificate signing request</p>
     */
    inline const Aws::String& GetStateOrProvince() const { return m_stateOrProvince; }
    inline bool StateOrProvinceHasBeenSet() const { return m_stateOrProvinceHasBeenSet; }
    template<typename StateOrProvinceT = Aws::String>
    void SetStateOrProvince(StateOrProvinceT&& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = std::forward<StateOrProvinceT>(value); }
    template<typename StateOrProvinceT = Aws::String>
    CertificateSubjectType& WithStateOrProvince(StateOrProvinceT&& value) { SetStateOrProvince(std::forward<StateOrProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Email to be used in the certificate signing request</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    CertificateSubjectType& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet = false;

    Aws::String m_organizationUnit;
    bool m_organizationUnitHasBeenSet = false;

    Aws::String m_organization;
    bool m_organizationHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_stateOrProvince;
    bool m_stateOrProvinceHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
