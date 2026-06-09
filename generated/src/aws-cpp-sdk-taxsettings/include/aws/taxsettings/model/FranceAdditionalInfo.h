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
 * <p>Additional tax information associated with your TRN in France.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/FranceAdditionalInfo">AWS
 * API Reference</a></p>
 */
class FranceAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API FranceAdditionalInfo() = default;
  AWS_TAXSETTINGS_API FranceAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API FranceAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SIREN number for the company in France. Must be a 9-digit number.</p>
   */
  inline const Aws::String& GetSirenNumber() const { return m_sirenNumber; }
  inline bool SirenNumberHasBeenSet() const { return m_sirenNumberHasBeenSet; }
  template <typename SirenNumberT = Aws::String>
  void SetSirenNumber(SirenNumberT&& value) {
    m_sirenNumberHasBeenSet = true;
    m_sirenNumber = std::forward<SirenNumberT>(value);
  }
  template <typename SirenNumberT = Aws::String>
  FranceAdditionalInfo& WithSirenNumber(SirenNumberT&& value) {
    SetSirenNumber(std::forward<SirenNumberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sirenNumber;
  bool m_sirenNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
