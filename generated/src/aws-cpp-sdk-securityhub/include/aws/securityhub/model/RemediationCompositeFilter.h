/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RemediationStringFilter.h>

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
 * <p>Enables the creation of criteria for remediation targets.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationCompositeFilter">AWS
 * API Reference</a></p>
 */
class RemediationCompositeFilter {
 public:
  AWS_SECURITYHUB_API RemediationCompositeFilter() = default;
  AWS_SECURITYHUB_API RemediationCompositeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationCompositeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables filtering based on string field values.</p>
   */
  inline const Aws::Vector<RemediationStringFilter>& GetStringFilters() const { return m_stringFilters; }
  inline bool StringFiltersHasBeenSet() const { return m_stringFiltersHasBeenSet; }
  template <typename StringFiltersT = Aws::Vector<RemediationStringFilter>>
  void SetStringFilters(StringFiltersT&& value) {
    m_stringFiltersHasBeenSet = true;
    m_stringFilters = std::forward<StringFiltersT>(value);
  }
  template <typename StringFiltersT = Aws::Vector<RemediationStringFilter>>
  RemediationCompositeFilter& WithStringFilters(StringFiltersT&& value) {
    SetStringFilters(std::forward<StringFiltersT>(value));
    return *this;
  }
  template <typename StringFiltersT = RemediationStringFilter>
  RemediationCompositeFilter& AddStringFilters(StringFiltersT&& value) {
    m_stringFiltersHasBeenSet = true;
    m_stringFilters.emplace_back(std::forward<StringFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RemediationStringFilter> m_stringFilters;
  bool m_stringFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
