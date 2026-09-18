/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * <p>A union that identifies a collaborator agent to engage. Specify either an
 * Amazon Connect AI Agent or a third-party agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AgentTarget">AWS
 * API Reference</a></p>
 */
class AgentTarget {
 public:
  AWS_QCONNECT_API AgentTarget() = default;
  AWS_QCONNECT_API AgentTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API AgentTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of an Amazon Connect AI Agent to use as the collaborator
   * agent.</p>
   */
  inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
  inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
  template <typename AiAgentIdT = Aws::String>
  void SetAiAgentId(AiAgentIdT&& value) {
    m_aiAgentIdHasBeenSet = true;
    m_aiAgentId = std::forward<AiAgentIdT>(value);
  }
  template <typename AiAgentIdT = Aws::String>
  AgentTarget& WithAiAgentId(AiAgentIdT&& value) {
    SetAiAgentId(std::forward<AiAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of a third-party agent to use as the collaborator agent.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  AgentTarget& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aiAgentId;

  Aws::String m_applicationId;
  bool m_aiAgentIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
