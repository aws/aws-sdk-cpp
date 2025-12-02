/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AdvancedFieldSelector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Advanced event selectors let you create fine-grained selectors for
 * management, data, and network activity events.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AdvancedEventSelector">AWS
 * API Reference</a></p>
 */
class AdvancedEventSelector {
 public:
  AWS_OBSERVABILITYADMIN_API AdvancedEventSelector() = default;
  AWS_OBSERVABILITYADMIN_API AdvancedEventSelector(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AdvancedEventSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An optional, descriptive name for an advanced event selector, such as "Log
   * data events for only two S3 buckets".</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AdvancedEventSelector& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains all selector statements in an advanced event selector.</p>
   */
  inline const Aws::Vector<AdvancedFieldSelector>& GetFieldSelectors() const { return m_fieldSelectors; }
  inline bool FieldSelectorsHasBeenSet() const { return m_fieldSelectorsHasBeenSet; }
  template <typename FieldSelectorsT = Aws::Vector<AdvancedFieldSelector>>
  void SetFieldSelectors(FieldSelectorsT&& value) {
    m_fieldSelectorsHasBeenSet = true;
    m_fieldSelectors = std::forward<FieldSelectorsT>(value);
  }
  template <typename FieldSelectorsT = Aws::Vector<AdvancedFieldSelector>>
  AdvancedEventSelector& WithFieldSelectors(FieldSelectorsT&& value) {
    SetFieldSelectors(std::forward<FieldSelectorsT>(value));
    return *this;
  }
  template <typename FieldSelectorsT = AdvancedFieldSelector>
  AdvancedEventSelector& AddFieldSelectors(FieldSelectorsT&& value) {
    m_fieldSelectorsHasBeenSet = true;
    m_fieldSelectors.emplace_back(std::forward<FieldSelectorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::Vector<AdvancedFieldSelector> m_fieldSelectors;
  bool m_fieldSelectorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
