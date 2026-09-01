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
 * <p>Additional tax information associated with your TRN in Monaco.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/MonacoAdditionalInfo">AWS
 * API Reference</a></p>
 */
class MonacoAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API MonacoAdditionalInfo() = default;
  AWS_TAXSETTINGS_API MonacoAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API MonacoAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The business number for the company in Monaco. Can be up to 12 alphanumeric
   * characters.</p>
   */
  inline const Aws::String& GetBusinessNumber() const { return m_businessNumber; }
  inline bool BusinessNumberHasBeenSet() const { return m_businessNumberHasBeenSet; }
  template <typename BusinessNumberT = Aws::String>
  void SetBusinessNumber(BusinessNumberT&& value) {
    m_businessNumberHasBeenSet = true;
    m_businessNumber = std::forward<BusinessNumberT>(value);
  }
  template <typename BusinessNumberT = Aws::String>
  MonacoAdditionalInfo& WithBusinessNumber(BusinessNumberT&& value) {
    SetBusinessNumber(std::forward<BusinessNumberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_businessNumber;
  bool m_businessNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
