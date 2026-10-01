/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RemediationCompositeFilter.h>

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
 * <p>Contains the criteria used to filter remediation targets, such as resource
 * type, priority, or status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationFilters">AWS
 * API Reference</a></p>
 */
class RemediationFilters {
 public:
  AWS_SECURITYHUB_API RemediationFilters() = default;
  AWS_SECURITYHUB_API RemediationFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A collection of complex filtering conditions that can be applied to
   * remediation target data.</p>
   */
  inline const Aws::Vector<RemediationCompositeFilter>& GetCompositeFilters() const { return m_compositeFilters; }
  inline bool CompositeFiltersHasBeenSet() const { return m_compositeFiltersHasBeenSet; }
  template <typename CompositeFiltersT = Aws::Vector<RemediationCompositeFilter>>
  void SetCompositeFilters(CompositeFiltersT&& value) {
    m_compositeFiltersHasBeenSet = true;
    m_compositeFilters = std::forward<CompositeFiltersT>(value);
  }
  template <typename CompositeFiltersT = Aws::Vector<RemediationCompositeFilter>>
  RemediationFilters& WithCompositeFilters(CompositeFiltersT&& value) {
    SetCompositeFilters(std::forward<CompositeFiltersT>(value));
    return *this;
  }
  template <typename CompositeFiltersT = RemediationCompositeFilter>
  RemediationFilters& AddCompositeFilters(CompositeFiltersT&& value) {
    m_compositeFiltersHasBeenSet = true;
    m_compositeFilters.emplace_back(std::forward<CompositeFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RemediationCompositeFilter> m_compositeFilters;
  bool m_compositeFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
