/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/UaeTaxRegistrationNumberType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TaxSettings {
namespace Model {

/**
 * <p>Contains additional tax information associated with your Tax Registration
 * Number (TRN) in the United Arab Emirates, such as the TRN type and the Peppol ID
 * used for electronic invoicing (e-invoicing).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/UnitedArabEmiratesAdditionalInfo">AWS
 * API Reference</a></p>
 */
class UnitedArabEmiratesAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API UnitedArabEmiratesAdditionalInfo() = default;
  AWS_TAXSETTINGS_API UnitedArabEmiratesAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API UnitedArabEmiratesAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of your TRN in the United Arab Emirates. Valid values are
   * <code>VATTaxRegistrationNumber</code> and
   * <code>LocalTaxRegistrationNumber</code> (Corporate Tax). This field must be
   * provided.</p>
   */
  inline UaeTaxRegistrationNumberType GetTaxRegistrationNumberType() const { return m_taxRegistrationNumberType; }
  inline bool TaxRegistrationNumberTypeHasBeenSet() const { return m_taxRegistrationNumberTypeHasBeenSet; }
  inline void SetTaxRegistrationNumberType(UaeTaxRegistrationNumberType value) {
    m_taxRegistrationNumberTypeHasBeenSet = true;
    m_taxRegistrationNumberType = value;
  }
  inline UnitedArabEmiratesAdditionalInfo& WithTaxRegistrationNumberType(UaeTaxRegistrationNumberType value) {
    SetTaxRegistrationNumberType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Peppol ID used for electronic invoicing (e-invoicing) in the United Arab
   * Emirates. Optional. Must be a 10-digit number.</p>
   */
  inline const Aws::String& GetPeppolId() const { return m_peppolId; }
  inline bool PeppolIdHasBeenSet() const { return m_peppolIdHasBeenSet; }
  template <typename PeppolIdT = Aws::String>
  void SetPeppolId(PeppolIdT&& value) {
    m_peppolIdHasBeenSet = true;
    m_peppolId = std::forward<PeppolIdT>(value);
  }
  template <typename PeppolIdT = Aws::String>
  UnitedArabEmiratesAdditionalInfo& WithPeppolId(PeppolIdT&& value) {
    SetPeppolId(std::forward<PeppolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your trade license number in the United Arab Emirates. Optional. Must be a
   * 10-digit number.</p>
   */
  inline const Aws::String& GetTradeLicenseNumber() const { return m_tradeLicenseNumber; }
  inline bool TradeLicenseNumberHasBeenSet() const { return m_tradeLicenseNumberHasBeenSet; }
  template <typename TradeLicenseNumberT = Aws::String>
  void SetTradeLicenseNumber(TradeLicenseNumberT&& value) {
    m_tradeLicenseNumberHasBeenSet = true;
    m_tradeLicenseNumber = std::forward<TradeLicenseNumberT>(value);
  }
  template <typename TradeLicenseNumberT = Aws::String>
  UnitedArabEmiratesAdditionalInfo& WithTradeLicenseNumber(TradeLicenseNumberT&& value) {
    SetTradeLicenseNumber(std::forward<TradeLicenseNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your Emirates ID. Optional. Must be in the format
   * <code>784-YYYY-NNNNNNN-N</code>.</p>
   */
  inline const Aws::String& GetEmiratesId() const { return m_emiratesId; }
  inline bool EmiratesIdHasBeenSet() const { return m_emiratesIdHasBeenSet; }
  template <typename EmiratesIdT = Aws::String>
  void SetEmiratesId(EmiratesIdT&& value) {
    m_emiratesIdHasBeenSet = true;
    m_emiratesId = std::forward<EmiratesIdT>(value);
  }
  template <typename EmiratesIdT = Aws::String>
  UnitedArabEmiratesAdditionalInfo& WithEmiratesId(EmiratesIdT&& value) {
    SetEmiratesId(std::forward<EmiratesIdT>(value));
    return *this;
  }
  ///@}
 private:
  UaeTaxRegistrationNumberType m_taxRegistrationNumberType{UaeTaxRegistrationNumberType::NOT_SET};

  Aws::String m_peppolId;

  Aws::String m_tradeLicenseNumber;

  Aws::String m_emiratesId;
  bool m_taxRegistrationNumberTypeHasBeenSet = false;
  bool m_peppolIdHasBeenSet = false;
  bool m_tradeLicenseNumberHasBeenSet = false;
  bool m_emiratesIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
