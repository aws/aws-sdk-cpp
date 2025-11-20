/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/ResourcesTrendsStringFilter.h>

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
 * <p>A filter structure that contains a logical combination of string filters and
 * nested composite filters for resources trend data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesTrendsCompositeFilter">AWS
 * API Reference</a></p>
 */
class ResourcesTrendsCompositeFilter {
 public:
  AWS_SECURITYHUB_API ResourcesTrendsCompositeFilter() = default;
  AWS_SECURITYHUB_API ResourcesTrendsCompositeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourcesTrendsCompositeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of string filters that apply to resources trend data fields.</p>
   */
  inline const Aws::Vector<ResourcesTrendsStringFilter>& GetStringFilters() const { return m_stringFilters; }
  inline bool StringFiltersHasBeenSet() const { return m_stringFiltersHasBeenSet; }
  template <typename StringFiltersT = Aws::Vector<ResourcesTrendsStringFilter>>
  void SetStringFilters(StringFiltersT&& value) {
    m_stringFiltersHasBeenSet = true;
    m_stringFilters = std::forward<StringFiltersT>(value);
  }
  template <typename StringFiltersT = Aws::Vector<ResourcesTrendsStringFilter>>
  ResourcesTrendsCompositeFilter& WithStringFilters(StringFiltersT&& value) {
    SetStringFilters(std::forward<StringFiltersT>(value));
    return *this;
  }
  template <typename StringFiltersT = ResourcesTrendsStringFilter>
  ResourcesTrendsCompositeFilter& AddStringFilters(StringFiltersT&& value) {
    m_stringFiltersHasBeenSet = true;
    m_stringFilters.emplace_back(std::forward<StringFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of nested composite filters that you can use to create complex filter
   * conditions for resources trend data.</p>
   */
  inline const Aws::Vector<ResourcesTrendsCompositeFilter>& GetNestedCompositeFilters() const { return m_nestedCompositeFilters; }
  inline bool NestedCompositeFiltersHasBeenSet() const { return m_nestedCompositeFiltersHasBeenSet; }
  template <typename NestedCompositeFiltersT = Aws::Vector<ResourcesTrendsCompositeFilter>>
  void SetNestedCompositeFilters(NestedCompositeFiltersT&& value) {
    m_nestedCompositeFiltersHasBeenSet = true;
    m_nestedCompositeFilters = std::forward<NestedCompositeFiltersT>(value);
  }
  template <typename NestedCompositeFiltersT = Aws::Vector<ResourcesTrendsCompositeFilter>>
  ResourcesTrendsCompositeFilter& WithNestedCompositeFilters(NestedCompositeFiltersT&& value) {
    SetNestedCompositeFilters(std::forward<NestedCompositeFiltersT>(value));
    return *this;
  }
  template <typename NestedCompositeFiltersT = ResourcesTrendsCompositeFilter>
  ResourcesTrendsCompositeFilter& AddNestedCompositeFilters(NestedCompositeFiltersT&& value) {
    m_nestedCompositeFiltersHasBeenSet = true;
    m_nestedCompositeFilters.emplace_back(std::forward<NestedCompositeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical operator (AND, OR) to apply between the string filters and nested
   * composite filters.</p>
   */
  inline AllowedOperators GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(AllowedOperators value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline ResourcesTrendsCompositeFilter& WithOperator(AllowedOperators value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ResourcesTrendsStringFilter> m_stringFilters;
  bool m_stringFiltersHasBeenSet = false;

  Aws::Vector<ResourcesTrendsCompositeFilter> m_nestedCompositeFilters;
  bool m_nestedCompositeFiltersHasBeenSet = false;

  AllowedOperators m_operator{AllowedOperators::NOT_SET};
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
