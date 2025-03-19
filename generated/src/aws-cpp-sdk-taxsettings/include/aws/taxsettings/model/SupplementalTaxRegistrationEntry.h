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
    AWS_TAXSETTINGS_API SupplementalTaxRegistrationEntry() = default;
    AWS_TAXSETTINGS_API SupplementalTaxRegistrationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SupplementalTaxRegistrationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    SupplementalTaxRegistrationEntry& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
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
    SupplementalTaxRegistrationEntry& WithLegalName(LegalNameT&& value) { SetLegalName(std::forward<LegalNameT>(value)); return *this;}
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
    SupplementalTaxRegistrationEntry& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Type of supplemental TRN. Currently, this can only be VAT. </p>
     */
    inline SupplementalTaxRegistrationType GetRegistrationType() const { return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(SupplementalTaxRegistrationType value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline SupplementalTaxRegistrationEntry& WithRegistrationType(SupplementalTaxRegistrationType value) { SetRegistrationType(value); return *this;}
    ///@}
  private:

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_legalName;
    bool m_legalNameHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    SupplementalTaxRegistrationType m_registrationType{SupplementalTaxRegistrationType::NOT_SET};
    bool m_registrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
