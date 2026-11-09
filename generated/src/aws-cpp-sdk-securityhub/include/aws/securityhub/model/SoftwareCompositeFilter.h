/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/SoftwareStringFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Enables the creation of criteria for software packages in Security
 * Hub.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SoftwareCompositeFilter">AWS
 * API Reference</a></p>
 */
class SoftwareCompositeFilter {
 public:
  AWS_SECURITYHUB_API SoftwareCompositeFilter() = default;
  AWS_SECURITYHUB_API SoftwareCompositeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API SoftwareCompositeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables filtering based on string field values.</p>
   */
  inline const Aws::Vector<SoftwareStringFilter>& GetStringFilters() const { return m_stringFilters; }
  inline bool StringFiltersHasBeenSet() const { return m_stringFiltersHasBeenSet; }
  template <typename StringFiltersT = Aws::Vector<SoftwareStringFilter>>
  void SetStringFilters(StringFiltersT&& value) {
    m_stringFiltersHasBeenSet = true;
    m_stringFilters = std::forward<StringFiltersT>(value);
  }
  template <typename StringFiltersT = Aws::Vector<SoftwareStringFilter>>
  SoftwareCompositeFilter& WithStringFilters(StringFiltersT&& value) {
    SetStringFilters(std::forward<StringFiltersT>(value));
    return *this;
  }
  template <typename StringFiltersT = SoftwareStringFilter>
  SoftwareCompositeFilter& AddStringFilters(StringFiltersT&& value) {
    m_stringFiltersHasBeenSet = true;
    m_stringFilters.emplace_back(std::forward<StringFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides an additional level of filtering, creating a three-layer nested
   * structure. The first layer is a <code>CompositeFilters</code> array with a
   * <code>CompositeOperator</code> (<code>AND</code>/<code>OR</code>). The second
   * layer is a <code>CompositeFilter</code> object that contains direct filters and
   * <code>NestedCompositeFilters</code>. The third layer is
   * <code>NestedCompositeFilters</code>, which contains additional filter
   * conditions.</p>
   */
  inline const Aws::Vector<SoftwareCompositeFilter>& GetNestedCompositeFilters() const { return m_nestedCompositeFilters; }
  inline bool NestedCompositeFiltersHasBeenSet() const { return m_nestedCompositeFiltersHasBeenSet; }
  template <typename NestedCompositeFiltersT = Aws::Vector<SoftwareCompositeFilter>>
  void SetNestedCompositeFilters(NestedCompositeFiltersT&& value) {
    m_nestedCompositeFiltersHasBeenSet = true;
    m_nestedCompositeFilters = std::forward<NestedCompositeFiltersT>(value);
  }
  template <typename NestedCompositeFiltersT = Aws::Vector<SoftwareCompositeFilter>>
  SoftwareCompositeFilter& WithNestedCompositeFilters(NestedCompositeFiltersT&& value) {
    SetNestedCompositeFilters(std::forward<NestedCompositeFiltersT>(value));
    return *this;
  }
  template <typename NestedCompositeFiltersT = SoftwareCompositeFilter>
  SoftwareCompositeFilter& AddNestedCompositeFilters(NestedCompositeFiltersT&& value) {
    m_nestedCompositeFiltersHasBeenSet = true;
    m_nestedCompositeFilters.emplace_back(std::forward<NestedCompositeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical operator used to combine multiple filter conditions.</p>
   */
  inline AllowedOperators GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(AllowedOperators value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline SoftwareCompositeFilter& WithOperator(AllowedOperators value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SoftwareStringFilter> m_stringFilters;

  Aws::Vector<SoftwareCompositeFilter> m_nestedCompositeFilters;

  AllowedOperators m_operator{AllowedOperators::NOT_SET};
  bool m_stringFiltersHasBeenSet = false;
  bool m_nestedCompositeFiltersHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
