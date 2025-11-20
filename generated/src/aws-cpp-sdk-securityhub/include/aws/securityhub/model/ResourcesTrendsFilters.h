/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/ResourcesTrendsCompositeFilter.h>

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
 * <p>The structure that defines filters to apply to resources trend data
 * queries.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesTrendsFilters">AWS
 * API Reference</a></p>
 */
class ResourcesTrendsFilters {
 public:
  AWS_SECURITYHUB_API ResourcesTrendsFilters() = default;
  AWS_SECURITYHUB_API ResourcesTrendsFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourcesTrendsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of composite filters to apply to the resources trend data.</p>
   */
  inline const Aws::Vector<ResourcesTrendsCompositeFilter>& GetCompositeFilters() const { return m_compositeFilters; }
  inline bool CompositeFiltersHasBeenSet() const { return m_compositeFiltersHasBeenSet; }
  template <typename CompositeFiltersT = Aws::Vector<ResourcesTrendsCompositeFilter>>
  void SetCompositeFilters(CompositeFiltersT&& value) {
    m_compositeFiltersHasBeenSet = true;
    m_compositeFilters = std::forward<CompositeFiltersT>(value);
  }
  template <typename CompositeFiltersT = Aws::Vector<ResourcesTrendsCompositeFilter>>
  ResourcesTrendsFilters& WithCompositeFilters(CompositeFiltersT&& value) {
    SetCompositeFilters(std::forward<CompositeFiltersT>(value));
    return *this;
  }
  template <typename CompositeFiltersT = ResourcesTrendsCompositeFilter>
  ResourcesTrendsFilters& AddCompositeFilters(CompositeFiltersT&& value) {
    m_compositeFiltersHasBeenSet = true;
    m_compositeFilters.emplace_back(std::forward<CompositeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical operator (AND, OR) to apply between multiple composite
   * filters.</p>
   */
  inline AllowedOperators GetCompositeOperator() const { return m_compositeOperator; }
  inline bool CompositeOperatorHasBeenSet() const { return m_compositeOperatorHasBeenSet; }
  inline void SetCompositeOperator(AllowedOperators value) {
    m_compositeOperatorHasBeenSet = true;
    m_compositeOperator = value;
  }
  inline ResourcesTrendsFilters& WithCompositeOperator(AllowedOperators value) {
    SetCompositeOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ResourcesTrendsCompositeFilter> m_compositeFilters;
  bool m_compositeFiltersHasBeenSet = false;

  AllowedOperators m_compositeOperator{AllowedOperators::NOT_SET};
  bool m_compositeOperatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
