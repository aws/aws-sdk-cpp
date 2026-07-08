/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CloudConnectorFilterKey.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>A filter for listing cloud connectors.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CloudConnectorFilter">AWS
 * API Reference</a></p>
 */
class CloudConnectorFilter {
 public:
  AWS_SSM_API CloudConnectorFilter() = default;
  AWS_SSM_API CloudConnectorFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API CloudConnectorFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the filter key.</p>
   */
  inline CloudConnectorFilterKey GetFilterKey() const { return m_filterKey; }
  inline bool FilterKeyHasBeenSet() const { return m_filterKeyHasBeenSet; }
  inline void SetFilterKey(CloudConnectorFilterKey value) {
    m_filterKeyHasBeenSet = true;
    m_filterKey = value;
  }
  inline CloudConnectorFilter& WithFilterKey(CloudConnectorFilterKey value) {
    SetFilterKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter values. Valid values for each filter key are as follows:</p> <dl>
   * <dt>SubscriptionId</dt> <dd> <p>The Azure subscription ID to filter by. To
   * return only tenant-level connectors, specify <code>NONE</code>.</p> </dd>
   * <dt>TenantId</dt> <dd> <p>The Azure tenant ID to filter by. Filters the results
   * to connectors that target the specified tenant.</p> </dd> </dl>
   */
  inline const Aws::Vector<Aws::String>& GetFilterValues() const { return m_filterValues; }
  inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  void SetFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues = std::forward<FilterValuesT>(value);
  }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  CloudConnectorFilter& WithFilterValues(FilterValuesT&& value) {
    SetFilterValues(std::forward<FilterValuesT>(value));
    return *this;
  }
  template <typename FilterValuesT = Aws::String>
  CloudConnectorFilter& AddFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues.emplace_back(std::forward<FilterValuesT>(value));
    return *this;
  }
  ///@}
 private:
  CloudConnectorFilterKey m_filterKey{CloudConnectorFilterKey::NOT_SET};

  Aws::Vector<Aws::String> m_filterValues;
  bool m_filterKeyHasBeenSet = false;
  bool m_filterValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
