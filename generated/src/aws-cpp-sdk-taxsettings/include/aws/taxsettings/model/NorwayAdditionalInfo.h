/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/NorwayTaxRegistrationNumberType.h>

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
 * Number (TRN) in Norway, such as the tax registration number type and the Peppol
 * ID used for electronic invoicing (e-invoicing).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/NorwayAdditionalInfo">AWS
 * API Reference</a></p>
 */
class NorwayAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API NorwayAdditionalInfo() = default;
  AWS_TAXSETTINGS_API NorwayAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API NorwayAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Treated as TaxRegistrationNumber when absent.</p>
   */
  inline NorwayTaxRegistrationNumberType GetTaxRegistrationNumberType() const { return m_taxRegistrationNumberType; }
  inline bool TaxRegistrationNumberTypeHasBeenSet() const { return m_taxRegistrationNumberTypeHasBeenSet; }
  inline void SetTaxRegistrationNumberType(NorwayTaxRegistrationNumberType value) {
    m_taxRegistrationNumberTypeHasBeenSet = true;
    m_taxRegistrationNumberType = value;
  }
  inline NorwayAdditionalInfo& WithTaxRegistrationNumberType(NorwayTaxRegistrationNumberType value) {
    SetTaxRegistrationNumberType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Peppol ID used for electronic invoicing (e-invoicing) in Norway. Must be
   * a valid 9-digit Norwegian Organisation Number, without the <code>0192</code>
   * scheme prefix.</p>
   */
  inline const Aws::String& GetPeppolId() const { return m_peppolId; }
  inline bool PeppolIdHasBeenSet() const { return m_peppolIdHasBeenSet; }
  template <typename PeppolIdT = Aws::String>
  void SetPeppolId(PeppolIdT&& value) {
    m_peppolIdHasBeenSet = true;
    m_peppolId = std::forward<PeppolIdT>(value);
  }
  template <typename PeppolIdT = Aws::String>
  NorwayAdditionalInfo& WithPeppolId(PeppolIdT&& value) {
    SetPeppolId(std::forward<PeppolIdT>(value));
    return *this;
  }
  ///@}
 private:
  NorwayTaxRegistrationNumberType m_taxRegistrationNumberType{NorwayTaxRegistrationNumberType::NOT_SET};

  Aws::String m_peppolId;
  bool m_taxRegistrationNumberTypeHasBeenSet = false;
  bool m_peppolIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
