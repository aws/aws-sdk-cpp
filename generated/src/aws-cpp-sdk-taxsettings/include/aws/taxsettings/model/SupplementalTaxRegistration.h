/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/Address.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/SupplementalTaxRegistrationType.h>
#include <aws/taxsettings/model/TaxRegistrationStatus.h>
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
   * <p> Supplemental TRN details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/SupplementalTaxRegistration">AWS
   * API Reference</a></p>
   */
  class SupplementalTaxRegistration
  {
  public:
    AWS_TAXSETTINGS_API SupplementalTaxRegistration() = default;
    AWS_TAXSETTINGS_API SupplementalTaxRegistration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SupplementalTaxRegistration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    SupplementalTaxRegistration& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique authority ID for the supplemental TRN. </p>
     */
    inline const Aws::String& GetAuthorityId() const { return m_authorityId; }
    inline bool AuthorityIdHasBeenSet() const { return m_authorityIdHasBeenSet; }
    template<typename AuthorityIdT = Aws::String>
    void SetAuthorityId(AuthorityIdT&& value) { m_authorityIdHasBeenSet = true; m_authorityId = std::forward<AuthorityIdT>(value); }
    template<typename AuthorityIdT = Aws::String>
    SupplementalTaxRegistration& WithAuthorityId(AuthorityIdT&& value) { SetAuthorityId(std::forward<AuthorityIdT>(value)); return *this;}
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
    SupplementalTaxRegistration& WithLegalName(LegalNameT&& value) { SetLegalName(std::forward<LegalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supplemental TRN unique identifier. </p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    SupplementalTaxRegistration& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Type of supplemental TRN. Currently, this can only be VAT. </p>
     */
    inline SupplementalTaxRegistrationType GetRegistrationType() const { return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(SupplementalTaxRegistrationType value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline SupplementalTaxRegistration& WithRegistrationType(SupplementalTaxRegistrationType value) { SetRegistrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of your TRN. </p>
     */
    inline TaxRegistrationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaxRegistrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SupplementalTaxRegistration& WithStatus(TaxRegistrationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_authorityId;
    bool m_authorityIdHasBeenSet = false;

    Aws::String m_legalName;
    bool m_legalNameHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    SupplementalTaxRegistrationType m_registrationType{SupplementalTaxRegistrationType::NOT_SET};
    bool m_registrationTypeHasBeenSet = false;

    TaxRegistrationStatus m_status{TaxRegistrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
