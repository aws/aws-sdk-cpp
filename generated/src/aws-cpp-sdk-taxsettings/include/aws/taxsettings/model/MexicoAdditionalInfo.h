/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>

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
 * Number (TRN) in Mexico, such as the SAT tax regime and CFDI usage
 * code.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/MexicoAdditionalInfo">AWS
 * API Reference</a></p>
 */
class MexicoAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API MexicoAdditionalInfo() = default;
  AWS_TAXSETTINGS_API MexicoAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API MexicoAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SAT-assigned tax regime code for your business in Mexico. Must be a
   * 3-digit number (for example, <code>601</code> for General de Ley Personas
   * Morales).</p>
   */
  inline const Aws::String& GetTaxRegime() const { return m_taxRegime; }
  inline bool TaxRegimeHasBeenSet() const { return m_taxRegimeHasBeenSet; }
  template <typename TaxRegimeT = Aws::String>
  void SetTaxRegime(TaxRegimeT&& value) {
    m_taxRegimeHasBeenSet = true;
    m_taxRegime = std::forward<TaxRegimeT>(value);
  }
  template <typename TaxRegimeT = Aws::String>
  MexicoAdditionalInfo& WithTaxRegime(TaxRegimeT&& value) {
    SetTaxRegime(std::forward<TaxRegimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full name of the SAT tax regime associated with your business in
   * Mexico.</p>
   */
  inline const Aws::String& GetTaxRegimeFullName() const { return m_taxRegimeFullName; }
  inline bool TaxRegimeFullNameHasBeenSet() const { return m_taxRegimeFullNameHasBeenSet; }
  template <typename TaxRegimeFullNameT = Aws::String>
  void SetTaxRegimeFullName(TaxRegimeFullNameT&& value) {
    m_taxRegimeFullNameHasBeenSet = true;
    m_taxRegimeFullName = std::forward<TaxRegimeFullNameT>(value);
  }
  template <typename TaxRegimeFullNameT = Aws::String>
  MexicoAdditionalInfo& WithTaxRegimeFullName(TaxRegimeFullNameT&& value) {
    SetTaxRegimeFullName(std::forward<TaxRegimeFullNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SAT CFDI usage code that identifies the purpose of the invoice in Mexico
   * (for example, <code>G01</code> for goods acquisition, <code>S01</code> for no
   * tax effects).</p>
   */
  inline const Aws::String& GetCfdiUsageCode() const { return m_cfdiUsageCode; }
  inline bool CfdiUsageCodeHasBeenSet() const { return m_cfdiUsageCodeHasBeenSet; }
  template <typename CfdiUsageCodeT = Aws::String>
  void SetCfdiUsageCode(CfdiUsageCodeT&& value) {
    m_cfdiUsageCodeHasBeenSet = true;
    m_cfdiUsageCode = std::forward<CfdiUsageCodeT>(value);
  }
  template <typename CfdiUsageCodeT = Aws::String>
  MexicoAdditionalInfo& WithCfdiUsageCode(CfdiUsageCodeT&& value) {
    SetCfdiUsageCode(std::forward<CfdiUsageCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_taxRegime;

  Aws::String m_taxRegimeFullName;

  Aws::String m_cfdiUsageCode;
  bool m_taxRegimeHasBeenSet = false;
  bool m_taxRegimeFullNameHasBeenSet = false;
  bool m_cfdiUsageCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
