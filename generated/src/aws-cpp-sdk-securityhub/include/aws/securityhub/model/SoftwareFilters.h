/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/SoftwareCompositeFilter.h>

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
 * <p>Enables filtering of software packages and the resources that contain
 * them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SoftwareFilters">AWS
 * API Reference</a></p>
 */
class SoftwareFilters {
 public:
  AWS_SECURITYHUB_API SoftwareFilters() = default;
  AWS_SECURITYHUB_API SoftwareFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API SoftwareFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A collection of complex filtering conditions that can be applied to software
   * packages.</p>
   */
  inline const Aws::Vector<SoftwareCompositeFilter>& GetCompositeFilters() const { return m_compositeFilters; }
  inline bool CompositeFiltersHasBeenSet() const { return m_compositeFiltersHasBeenSet; }
  template <typename CompositeFiltersT = Aws::Vector<SoftwareCompositeFilter>>
  void SetCompositeFilters(CompositeFiltersT&& value) {
    m_compositeFiltersHasBeenSet = true;
    m_compositeFilters = std::forward<CompositeFiltersT>(value);
  }
  template <typename CompositeFiltersT = Aws::Vector<SoftwareCompositeFilter>>
  SoftwareFilters& WithCompositeFilters(CompositeFiltersT&& value) {
    SetCompositeFilters(std::forward<CompositeFiltersT>(value));
    return *this;
  }
  template <typename CompositeFiltersT = SoftwareCompositeFilter>
  SoftwareFilters& AddCompositeFilters(CompositeFiltersT&& value) {
    m_compositeFiltersHasBeenSet = true;
    m_compositeFilters.emplace_back(std::forward<CompositeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical operator used to combine multiple filter conditions in the
   * structure.</p>
   */
  inline AllowedOperators GetCompositeOperator() const { return m_compositeOperator; }
  inline bool CompositeOperatorHasBeenSet() const { return m_compositeOperatorHasBeenSet; }
  inline void SetCompositeOperator(AllowedOperators value) {
    m_compositeOperatorHasBeenSet = true;
    m_compositeOperator = value;
  }
  inline SoftwareFilters& WithCompositeOperator(AllowedOperators value) {
    SetCompositeOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SoftwareCompositeFilter> m_compositeFilters;

  AllowedOperators m_compositeOperator{AllowedOperators::NOT_SET};
  bool m_compositeFiltersHasBeenSet = false;
  bool m_compositeOperatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
