/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>

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
 * <p>Additional tax information associated with your TRN in the
 * Philippines.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/PhilippinesAdditionalInfo">AWS
 * API Reference</a></p>
 */
class PhilippinesAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API PhilippinesAdditionalInfo() = default;
  AWS_TAXSETTINGS_API PhilippinesAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API PhilippinesAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether the account is VAT-registered with the Philippines Bureau
   * of Internal Revenue (BIR).</p>
   */
  inline bool GetIsVatRegistered() const { return m_isVatRegistered; }
  inline bool IsVatRegisteredHasBeenSet() const { return m_isVatRegisteredHasBeenSet; }
  inline void SetIsVatRegistered(bool value) {
    m_isVatRegisteredHasBeenSet = true;
    m_isVatRegistered = value;
  }
  inline PhilippinesAdditionalInfo& WithIsVatRegistered(bool value) {
    SetIsVatRegistered(value);
    return *this;
  }
  ///@}
 private:
  bool m_isVatRegistered{false};
  bool m_isVatRegisteredHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
