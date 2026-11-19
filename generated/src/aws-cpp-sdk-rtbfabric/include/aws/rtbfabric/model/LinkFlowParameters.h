/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/Flow.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>

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
 * <p>A requested link flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/LinkFlowParameters">AWS
 * API Reference</a></p>
 */
class LinkFlowParameters {
 public:
  AWS_RTBFABRIC_API LinkFlowParameters() = default;
  AWS_RTBFABRIC_API LinkFlowParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API LinkFlowParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The requested modules.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetModules() const { return m_modules; }
  inline bool ModulesHasBeenSet() const { return m_modulesHasBeenSet; }
  template <typename ModulesT = Aws::Vector<ModuleConfiguration>>
  void SetModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules = std::forward<ModulesT>(value);
  }
  template <typename ModulesT = Aws::Vector<ModuleConfiguration>>
  LinkFlowParameters& WithModules(ModulesT&& value) {
    SetModules(std::forward<ModulesT>(value));
    return *this;
  }
  template <typename ModulesT = ModuleConfiguration>
  LinkFlowParameters& AddModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules.emplace_back(std::forward<ModulesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Flow>& GetFlows() const { return m_flows; }
  inline bool FlowsHasBeenSet() const { return m_flowsHasBeenSet; }
  template <typename FlowsT = Aws::Vector<Flow>>
  void SetFlows(FlowsT&& value) {
    m_flowsHasBeenSet = true;
    m_flows = std::forward<FlowsT>(value);
  }
  template <typename FlowsT = Aws::Vector<Flow>>
  LinkFlowParameters& WithFlows(FlowsT&& value) {
    SetFlows(std::forward<FlowsT>(value));
    return *this;
  }
  template <typename FlowsT = Flow>
  LinkFlowParameters& AddFlows(FlowsT&& value) {
    m_flowsHasBeenSet = true;
    m_flows.emplace_back(std::forward<FlowsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ModuleConfiguration> m_modules;

  Aws::Vector<Flow> m_flows;
  bool m_modulesHasBeenSet = false;
  bool m_flowsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
