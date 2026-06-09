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
 * <p>Additional tax information associated with your TRN in Belgium.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/BelgiumAdditionalInfo">AWS
 * API Reference</a></p>
 */
class BelgiumAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API BelgiumAdditionalInfo() = default;
  AWS_TAXSETTINGS_API BelgiumAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API BelgiumAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Peppol ID for electronic invoicing in Belgium.</p>
   */
  inline const Aws::String& GetPeppolId() const { return m_peppolId; }
  inline bool PeppolIdHasBeenSet() const { return m_peppolIdHasBeenSet; }
  template <typename PeppolIdT = Aws::String>
  void SetPeppolId(PeppolIdT&& value) {
    m_peppolIdHasBeenSet = true;
    m_peppolId = std::forward<PeppolIdT>(value);
  }
  template <typename PeppolIdT = Aws::String>
  BelgiumAdditionalInfo& WithPeppolId(PeppolIdT&& value) {
    SetPeppolId(std::forward<PeppolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the Mercurius e-invoicing box is enabled for
   * business-to-government (B2G) invoicing in Belgium.</p>
   */
  inline bool GetIsMercuriusBoxEnabled() const { return m_isMercuriusBoxEnabled; }
  inline bool IsMercuriusBoxEnabledHasBeenSet() const { return m_isMercuriusBoxEnabledHasBeenSet; }
  inline void SetIsMercuriusBoxEnabled(bool value) {
    m_isMercuriusBoxEnabledHasBeenSet = true;
    m_isMercuriusBoxEnabled = value;
  }
  inline BelgiumAdditionalInfo& WithIsMercuriusBoxEnabled(bool value) {
    SetIsMercuriusBoxEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_peppolId;

  bool m_isMercuriusBoxEnabled{false};
  bool m_peppolIdHasBeenSet = false;
  bool m_isMercuriusBoxEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
