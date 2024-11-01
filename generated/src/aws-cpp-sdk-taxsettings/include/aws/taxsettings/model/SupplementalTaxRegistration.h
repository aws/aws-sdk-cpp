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
    AWS_TAXSETTINGS_API SupplementalTaxRegistration();
    AWS_TAXSETTINGS_API SupplementalTaxRegistration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SupplementalTaxRegistration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Address& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline SupplementalTaxRegistration& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline SupplementalTaxRegistration& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique authority ID for the supplemental TRN. </p>
     */
    inline const Aws::String& GetAuthorityId() const{ return m_authorityId; }
    inline bool AuthorityIdHasBeenSet() const { return m_authorityIdHasBeenSet; }
    inline void SetAuthorityId(const Aws::String& value) { m_authorityIdHasBeenSet = true; m_authorityId = value; }
    inline void SetAuthorityId(Aws::String&& value) { m_authorityIdHasBeenSet = true; m_authorityId = std::move(value); }
    inline void SetAuthorityId(const char* value) { m_authorityIdHasBeenSet = true; m_authorityId.assign(value); }
    inline SupplementalTaxRegistration& WithAuthorityId(const Aws::String& value) { SetAuthorityId(value); return *this;}
    inline SupplementalTaxRegistration& WithAuthorityId(Aws::String&& value) { SetAuthorityId(std::move(value)); return *this;}
    inline SupplementalTaxRegistration& WithAuthorityId(const char* value) { SetAuthorityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The legal name associated with your TRN registration. </p>
     */
    inline const Aws::String& GetLegalName() const{ return m_legalName; }
    inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
    inline void SetLegalName(const Aws::String& value) { m_legalNameHasBeenSet = true; m_legalName = value; }
    inline void SetLegalName(Aws::String&& value) { m_legalNameHasBeenSet = true; m_legalName = std::move(value); }
    inline void SetLegalName(const char* value) { m_legalNameHasBeenSet = true; m_legalName.assign(value); }
    inline SupplementalTaxRegistration& WithLegalName(const Aws::String& value) { SetLegalName(value); return *this;}
    inline SupplementalTaxRegistration& WithLegalName(Aws::String&& value) { SetLegalName(std::move(value)); return *this;}
    inline SupplementalTaxRegistration& WithLegalName(const char* value) { SetLegalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supplemental TRN unique identifier. </p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }
    inline SupplementalTaxRegistration& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline SupplementalTaxRegistration& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline SupplementalTaxRegistration& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Type of supplemental TRN. Currently, this can only be VAT. </p>
     */
    inline const SupplementalTaxRegistrationType& GetRegistrationType() const{ return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(const SupplementalTaxRegistrationType& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline void SetRegistrationType(SupplementalTaxRegistrationType&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }
    inline SupplementalTaxRegistration& WithRegistrationType(const SupplementalTaxRegistrationType& value) { SetRegistrationType(value); return *this;}
    inline SupplementalTaxRegistration& WithRegistrationType(SupplementalTaxRegistrationType&& value) { SetRegistrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of your TRN. </p>
     */
    inline const TaxRegistrationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaxRegistrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaxRegistrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SupplementalTaxRegistration& WithStatus(const TaxRegistrationStatus& value) { SetStatus(value); return *this;}
    inline SupplementalTaxRegistration& WithStatus(TaxRegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}
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

    SupplementalTaxRegistrationType m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    TaxRegistrationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
