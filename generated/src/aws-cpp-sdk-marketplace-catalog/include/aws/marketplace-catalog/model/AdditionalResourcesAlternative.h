/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AdditionalResource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>A proposed set of additional resources for a listing.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AdditionalResourcesAlternative">AWS
 * API Reference</a></p>
 */
class AdditionalResourcesAlternative {
 public:
  AWS_MARKETPLACECATALOG_API AdditionalResourcesAlternative() = default;
  AWS_MARKETPLACECATALOG_API AdditionalResourcesAlternative(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API AdditionalResourcesAlternative& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The proposed additional resources.</p>
   */
  inline const Aws::Vector<AdditionalResource>& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::Vector<AdditionalResource>>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::Vector<AdditionalResource>>
  AdditionalResourcesAlternative& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  template <typename ValueT = AdditionalResource>
  AdditionalResourcesAlternative& AddValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value.emplace_back(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why this alternative is recommended.</p>
   */
  inline const Aws::String& GetRationale() const { return m_rationale; }
  inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
  template <typename RationaleT = Aws::String>
  void SetRationale(RationaleT&& value) {
    m_rationaleHasBeenSet = true;
    m_rationale = std::forward<RationaleT>(value);
  }
  template <typename RationaleT = Aws::String>
  AdditionalResourcesAlternative& WithRationale(RationaleT&& value) {
    SetRationale(std::forward<RationaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AdditionalResource> m_value;

  Aws::String m_rationale;
  bool m_valueHasBeenSet = false;
  bool m_rationaleHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
