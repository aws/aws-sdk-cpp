/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/Address.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/SupplementalTaxRegistrationType.h>
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
   * <p> The supplemental TRN information to provide when adding or updating a
   * supplemental TRN. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/SupplementalTaxRegistrationEntry">AWS
   * API Reference</a></p>
   */
  class SupplementalTaxRegistrationEntry
  {
  public:
    AWS_TAXSETTINGS_API SupplementalTaxRegistrationEntry();
    AWS_TAXSETTINGS_API SupplementalTaxRegistrationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SupplementalTaxRegistrationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Address& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline SupplementalTaxRegistrationEntry& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline SupplementalTaxRegistrationEntry& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
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
    inline SupplementalTaxRegistrationEntry& WithLegalName(const Aws::String& value) { SetLegalName(value); return *this;}
    inline SupplementalTaxRegistrationEntry& WithLegalName(Aws::String&& value) { SetLegalName(std::move(value)); return *this;}
    inline SupplementalTaxRegistrationEntry& WithLegalName(const char* value) { SetLegalName(value); return *this;}
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
    inline SupplementalTaxRegistrationEntry& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline SupplementalTaxRegistrationEntry& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline SupplementalTaxRegistrationEntry& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Type of supplemental TRN. Currently, this can only be VAT. </p>
     */
    inline const SupplementalTaxRegistrationType& GetRegistrationType() const{ return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(const SupplementalTaxRegistrationType& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline void SetRegistrationType(SupplementalTaxRegistrationType&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }
    inline SupplementalTaxRegistrationEntry& WithRegistrationType(const SupplementalTaxRegistrationType& value) { SetRegistrationType(value); return *this;}
    inline SupplementalTaxRegistrationEntry& WithRegistrationType(SupplementalTaxRegistrationType&& value) { SetRegistrationType(std::move(value)); return *this;}
    ///@}
  private:

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_legalName;
    bool m_legalNameHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    SupplementalTaxRegistrationType m_registrationType;
    bool m_registrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
