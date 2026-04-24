/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AdvancedEventSelector.h>

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
 * <p> Parameters specific to Amazon Web Services CloudTrail telemetry
 * configuration. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CloudtrailParameters">AWS
 * API Reference</a></p>
 */
class CloudtrailParameters {
 public:
  AWS_OBSERVABILITYADMIN_API CloudtrailParameters() = default;
  AWS_OBSERVABILITYADMIN_API CloudtrailParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API CloudtrailParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The advanced event selectors to use for filtering Amazon Web Services
   * CloudTrail events. </p>
   */
  inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
  inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }
  template <typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
  void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) {
    m_advancedEventSelectorsHasBeenSet = true;
    m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value);
  }
  template <typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
  CloudtrailParameters& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) {
    SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value));
    return *this;
  }
  template <typename AdvancedEventSelectorsT = AdvancedEventSelector>
  CloudtrailParameters& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) {
    m_advancedEventSelectorsHasBeenSet = true;
    m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
  bool m_advancedEventSelectorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
