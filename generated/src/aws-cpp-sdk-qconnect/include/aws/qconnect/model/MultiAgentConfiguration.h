/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/DelegateAgentConfiguration.h>
#include <aws/qconnect/model/HandoffAgentConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>A union that configures a single collaborator agent for an Orchestration AI
 * Agent, as either a delegate or a handoff.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MultiAgentConfiguration">AWS
 * API Reference</a></p>
 */
class MultiAgentConfiguration {
 public:
  AWS_QCONNECT_API MultiAgentConfiguration() = default;
  AWS_QCONNECT_API MultiAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API MultiAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configures the collaborator agent as a delegate that the Orchestration AI
   * Agent invokes while retaining control of the conversation.</p>
   */
  inline const DelegateAgentConfiguration& GetDelegateAgentConfiguration() const { return m_delegateAgentConfiguration; }
  inline bool DelegateAgentConfigurationHasBeenSet() const { return m_delegateAgentConfigurationHasBeenSet; }
  template <typename DelegateAgentConfigurationT = DelegateAgentConfiguration>
  void SetDelegateAgentConfiguration(DelegateAgentConfigurationT&& value) {
    m_delegateAgentConfigurationHasBeenSet = true;
    m_delegateAgentConfiguration = std::forward<DelegateAgentConfigurationT>(value);
  }
  template <typename DelegateAgentConfigurationT = DelegateAgentConfiguration>
  MultiAgentConfiguration& WithDelegateAgentConfiguration(DelegateAgentConfigurationT&& value) {
    SetDelegateAgentConfiguration(std::forward<DelegateAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configures the collaborator agent as a handoff target that the Orchestration
   * AI Agent transfers control of the conversation to.</p>
   */
  inline const HandoffAgentConfiguration& GetHandoffAgentConfiguration() const { return m_handoffAgentConfiguration; }
  inline bool HandoffAgentConfigurationHasBeenSet() const { return m_handoffAgentConfigurationHasBeenSet; }
  template <typename HandoffAgentConfigurationT = HandoffAgentConfiguration>
  void SetHandoffAgentConfiguration(HandoffAgentConfigurationT&& value) {
    m_handoffAgentConfigurationHasBeenSet = true;
    m_handoffAgentConfiguration = std::forward<HandoffAgentConfigurationT>(value);
  }
  template <typename HandoffAgentConfigurationT = HandoffAgentConfiguration>
  MultiAgentConfiguration& WithHandoffAgentConfiguration(HandoffAgentConfigurationT&& value) {
    SetHandoffAgentConfiguration(std::forward<HandoffAgentConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  DelegateAgentConfiguration m_delegateAgentConfiguration;

  HandoffAgentConfiguration m_handoffAgentConfiguration;
  bool m_delegateAgentConfigurationHasBeenSet = false;
  bool m_handoffAgentConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
