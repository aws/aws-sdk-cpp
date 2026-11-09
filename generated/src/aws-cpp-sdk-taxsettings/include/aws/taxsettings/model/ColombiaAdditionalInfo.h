/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * Number (TRN) in Colombia, derived from your Registro Único Tributario (RUT)
 * document.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/ColombiaAdditionalInfo">AWS
 * API Reference</a></p>
 */
class ColombiaAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API ColombiaAdditionalInfo() = default;
  AWS_TAXSETTINGS_API ColombiaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API ColombiaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The DIAN fiscal responsibility codes from Box 53 of the RUT document (for
   * example, <code>48</code> for value-added tax (VAT) responsibility).</p>
   */
  inline const Aws::Vector<Aws::String>& GetResponsibilityCodes() const { return m_responsibilityCodes; }
  inline bool ResponsibilityCodesHasBeenSet() const { return m_responsibilityCodesHasBeenSet; }
  template <typename ResponsibilityCodesT = Aws::Vector<Aws::String>>
  void SetResponsibilityCodes(ResponsibilityCodesT&& value) {
    m_responsibilityCodesHasBeenSet = true;
    m_responsibilityCodes = std::forward<ResponsibilityCodesT>(value);
  }
  template <typename ResponsibilityCodesT = Aws::Vector<Aws::String>>
  ColombiaAdditionalInfo& WithResponsibilityCodes(ResponsibilityCodesT&& value) {
    SetResponsibilityCodes(std::forward<ResponsibilityCodesT>(value));
    return *this;
  }
  template <typename ResponsibilityCodesT = Aws::String>
  ColombiaAdditionalInfo& AddResponsibilityCodes(ResponsibilityCodesT&& value) {
    m_responsibilityCodesHasBeenSet = true;
    m_responsibilityCodes.emplace_back(std::forward<ResponsibilityCodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The taxpayer category from Box 24 of the RUT document (<code>1</code> for a
   * legal entity, <code>2</code> for a natural person).</p>
   */
  inline const Aws::String& GetTaxpayerTypeCode() const { return m_taxpayerTypeCode; }
  inline bool TaxpayerTypeCodeHasBeenSet() const { return m_taxpayerTypeCodeHasBeenSet; }
  template <typename TaxpayerTypeCodeT = Aws::String>
  void SetTaxpayerTypeCode(TaxpayerTypeCodeT&& value) {
    m_taxpayerTypeCodeHasBeenSet = true;
    m_taxpayerTypeCode = std::forward<TaxpayerTypeCodeT>(value);
  }
  template <typename TaxpayerTypeCodeT = Aws::String>
  ColombiaAdditionalInfo& WithTaxpayerTypeCode(TaxpayerTypeCodeT&& value) {
    SetTaxpayerTypeCode(std::forward<TaxpayerTypeCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issue date of the RUT document from Box 61, in <code>YYYY-MM-DD</code>
   * format.</p>
   */
  inline const Aws::String& GetIssueDate() const { return m_issueDate; }
  inline bool IssueDateHasBeenSet() const { return m_issueDateHasBeenSet; }
  template <typename IssueDateT = Aws::String>
  void SetIssueDate(IssueDateT&& value) {
    m_issueDateHasBeenSet = true;
    m_issueDate = std::forward<IssueDateT>(value);
  }
  template <typename IssueDateT = Aws::String>
  ColombiaAdditionalInfo& WithIssueDate(IssueDateT&& value) {
    SetIssueDate(std::forward<IssueDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_responsibilityCodes;

  Aws::String m_taxpayerTypeCode;

  Aws::String m_issueDate;
  bool m_responsibilityCodesHasBeenSet = false;
  bool m_taxpayerTypeCodeHasBeenSet = false;
  bool m_issueDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
