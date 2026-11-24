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
 * Number (TRN) in New Zealand, such as the Peppol ID used for electronic invoicing
 * (e-invoicing).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/NewZealandAdditionalInfo">AWS
 * API Reference</a></p>
 */
class NewZealandAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API NewZealandAdditionalInfo() = default;
  AWS_TAXSETTINGS_API NewZealandAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API NewZealandAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Peppol ID used for electronic invoicing (e-invoicing) in New Zealand.
   * Must be your 13-digit New Zealand Business Number (NZBN), without the
   * <code>0088</code> scheme prefix. Only accepted when the <code>sector</code> is
   * <code>Government</code>.</p>
   */
  inline const Aws::String& GetPeppolId() const { return m_peppolId; }
  inline bool PeppolIdHasBeenSet() const { return m_peppolIdHasBeenSet; }
  template <typename PeppolIdT = Aws::String>
  void SetPeppolId(PeppolIdT&& value) {
    m_peppolIdHasBeenSet = true;
    m_peppolId = std::forward<PeppolIdT>(value);
  }
  template <typename PeppolIdT = Aws::String>
  NewZealandAdditionalInfo& WithPeppolId(PeppolIdT&& value) {
    SetPeppolId(std::forward<PeppolIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_peppolId;
  bool m_peppolIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
