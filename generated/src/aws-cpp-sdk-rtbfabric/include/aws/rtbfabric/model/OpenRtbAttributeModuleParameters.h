/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/Action.h>
#include <aws/rtbfabric/model/Filter.h>
#include <aws/rtbfabric/model/FilterType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes the parameters of an open RTB attribute module.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/OpenRtbAttributeModuleParameters">AWS
 * API Reference</a></p>
 */
class OpenRtbAttributeModuleParameters {
 public:
  AWS_RTBFABRIC_API OpenRtbAttributeModuleParameters() = default;
  AWS_RTBFABRIC_API OpenRtbAttributeModuleParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API OpenRtbAttributeModuleParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter type.</p>
   */
  inline FilterType GetFilterType() const { return m_filterType; }
  inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
  inline void SetFilterType(FilterType value) {
    m_filterTypeHasBeenSet = true;
    m_filterType = value;
  }
  inline OpenRtbAttributeModuleParameters& WithFilterType(FilterType value) {
    SetFilterType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the configuration of a filter.</p>
   */
  inline const Aws::Vector<Filter>& GetFilterConfiguration() const { return m_filterConfiguration; }
  inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
  template <typename FilterConfigurationT = Aws::Vector<Filter>>
  void SetFilterConfiguration(FilterConfigurationT&& value) {
    m_filterConfigurationHasBeenSet = true;
    m_filterConfiguration = std::forward<FilterConfigurationT>(value);
  }
  template <typename FilterConfigurationT = Aws::Vector<Filter>>
  OpenRtbAttributeModuleParameters& WithFilterConfiguration(FilterConfigurationT&& value) {
    SetFilterConfiguration(std::forward<FilterConfigurationT>(value));
    return *this;
  }
  template <typename FilterConfigurationT = Filter>
  OpenRtbAttributeModuleParameters& AddFilterConfiguration(FilterConfigurationT&& value) {
    m_filterConfigurationHasBeenSet = true;
    m_filterConfiguration.emplace_back(std::forward<FilterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes a bid action.</p>
   */
  inline const Action& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Action>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Action>
  OpenRtbAttributeModuleParameters& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hold back percentage.</p>
   */
  inline double GetHoldbackPercentage() const { return m_holdbackPercentage; }
  inline bool HoldbackPercentageHasBeenSet() const { return m_holdbackPercentageHasBeenSet; }
  inline void SetHoldbackPercentage(double value) {
    m_holdbackPercentageHasBeenSet = true;
    m_holdbackPercentage = value;
  }
  inline OpenRtbAttributeModuleParameters& WithHoldbackPercentage(double value) {
    SetHoldbackPercentage(value);
    return *this;
  }
  ///@}
 private:
  FilterType m_filterType{FilterType::NOT_SET};
  bool m_filterTypeHasBeenSet = false;

  Aws::Vector<Filter> m_filterConfiguration;
  bool m_filterConfigurationHasBeenSet = false;

  Action m_action;
  bool m_actionHasBeenSet = false;

  double m_holdbackPercentage{0.0};
  bool m_holdbackPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
