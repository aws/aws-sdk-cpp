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
 * Number (TRN) in Germany, such as the economic identification number and
 * Steuernummer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/GermanyAdditionalInfo">AWS
 * API Reference</a></p>
 */
class GermanyAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API GermanyAdditionalInfo() = default;
  AWS_TAXSETTINGS_API GermanyAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API GermanyAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The economic identification number (Wirtschafts-Identifikationsnummer, or
   * W-IdNr) in Germany.</p>
   */
  inline const Aws::String& GetEconomicIdentificationNumber() const { return m_economicIdentificationNumber; }
  inline bool EconomicIdentificationNumberHasBeenSet() const { return m_economicIdentificationNumberHasBeenSet; }
  template <typename EconomicIdentificationNumberT = Aws::String>
  void SetEconomicIdentificationNumber(EconomicIdentificationNumberT&& value) {
    m_economicIdentificationNumberHasBeenSet = true;
    m_economicIdentificationNumber = std::forward<EconomicIdentificationNumberT>(value);
  }
  template <typename EconomicIdentificationNumberT = Aws::String>
  GermanyAdditionalInfo& WithEconomicIdentificationNumber(EconomicIdentificationNumberT&& value) {
    SetEconomicIdentificationNumber(std::forward<EconomicIdentificationNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Steuernummer (tax number issued by the local tax office) in Germany.</p>
   */
  inline const Aws::String& GetSteuernummer() const { return m_steuernummer; }
  inline bool SteuernummerHasBeenSet() const { return m_steuernummerHasBeenSet; }
  template <typename SteuernummerT = Aws::String>
  void SetSteuernummer(SteuernummerT&& value) {
    m_steuernummerHasBeenSet = true;
    m_steuernummer = std::forward<SteuernummerT>(value);
  }
  template <typename SteuernummerT = Aws::String>
  GermanyAdditionalInfo& WithSteuernummer(SteuernummerT&& value) {
    SetSteuernummer(std::forward<SteuernummerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_economicIdentificationNumber;

  Aws::String m_steuernummer;
  bool m_economicIdentificationNumberHasBeenSet = false;
  bool m_steuernummerHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
