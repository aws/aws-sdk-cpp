/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AgentLifecycle.h>
#include <aws/quicksight/model/CustomPromptInput.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateAgentRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateAgentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAgent"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the spaces to attach to the agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSpaces() const { return m_spaces; }
  inline bool SpacesHasBeenSet() const { return m_spacesHasBeenSet; }
  template <typename SpacesT = Aws::Vector<Aws::String>>
  void SetSpaces(SpacesT&& value) {
    m_spacesHasBeenSet = true;
    m_spaces = std::forward<SpacesT>(value);
  }
  template <typename SpacesT = Aws::Vector<Aws::String>>
  CreateAgentRequest& WithSpaces(SpacesT&& value) {
    SetSpaces(std::forward<SpacesT>(value));
    return *this;
  }
  template <typename SpacesT = Aws::String>
  CreateAgentRequest& AddSpaces(SpacesT&& value) {
    m_spacesHasBeenSet = true;
    m_spaces.emplace_back(std::forward<SpacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the action connectors to attach to the
   * agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetActionConnectors() const { return m_actionConnectors; }
  inline bool ActionConnectorsHasBeenSet() const { return m_actionConnectorsHasBeenSet; }
  template <typename ActionConnectorsT = Aws::Vector<Aws::String>>
  void SetActionConnectors(ActionConnectorsT&& value) {
    m_actionConnectorsHasBeenSet = true;
    m_actionConnectors = std::forward<ActionConnectorsT>(value);
  }
  template <typename ActionConnectorsT = Aws::Vector<Aws::String>>
  CreateAgentRequest& WithActionConnectors(ActionConnectorsT&& value) {
    SetActionConnectors(std::forward<ActionConnectorsT>(value));
    return *this;
  }
  template <typename ActionConnectorsT = Aws::String>
  CreateAgentRequest& AddActionConnectors(ActionConnectorsT&& value) {
    m_actionConnectorsHasBeenSet = true;
    m_actionConnectors.emplace_back(std::forward<ActionConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the agent.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  CreateAgentRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the agent.</p>
   */
  inline const Aws::String& GetAgentId() const { return m_agentId; }
  inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
  template <typename AgentIdT = Aws::String>
  void SetAgentId(AgentIdT&& value) {
    m_agentIdHasBeenSet = true;
    m_agentId = std::forward<AgentIdT>(value);
  }
  template <typename AgentIdT = Aws::String>
  CreateAgentRequest& WithAgentId(AgentIdT&& value) {
    SetAgentId(std::forward<AgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the agent.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAgentRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the agent.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateAgentRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The icon identifier for the agent.</p>
   */
  inline const Aws::String& GetIconId() const { return m_iconId; }
  inline bool IconIdHasBeenSet() const { return m_iconIdHasBeenSet; }
  template <typename IconIdT = Aws::String>
  void SetIconId(IconIdT&& value) {
    m_iconIdHasBeenSet = true;
    m_iconId = std::forward<IconIdT>(value);
  }
  template <typename IconIdT = Aws::String>
  CreateAgentRequest& WithIconId(IconIdT&& value) {
    SetIconId(std::forward<IconIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of starter prompts that are displayed to users when they begin
   * interacting with the agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStarterPrompts() const { return m_starterPrompts; }
  inline bool StarterPromptsHasBeenSet() const { return m_starterPromptsHasBeenSet; }
  template <typename StarterPromptsT = Aws::Vector<Aws::String>>
  void SetStarterPrompts(StarterPromptsT&& value) {
    m_starterPromptsHasBeenSet = true;
    m_starterPrompts = std::forward<StarterPromptsT>(value);
  }
  template <typename StarterPromptsT = Aws::Vector<Aws::String>>
  CreateAgentRequest& WithStarterPrompts(StarterPromptsT&& value) {
    SetStarterPrompts(std::forward<StarterPromptsT>(value));
    return *this;
  }
  template <typename StarterPromptsT = Aws::String>
  CreateAgentRequest& AddStarterPrompts(StarterPromptsT&& value) {
    m_starterPromptsHasBeenSet = true;
    m_starterPrompts.emplace_back(std::forward<StarterPromptsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The welcome message that is displayed when a user starts a conversation with
   * the agent.</p>
   */
  inline const Aws::String& GetWelcomeMessage() const { return m_welcomeMessage; }
  inline bool WelcomeMessageHasBeenSet() const { return m_welcomeMessageHasBeenSet; }
  template <typename WelcomeMessageT = Aws::String>
  void SetWelcomeMessage(WelcomeMessageT&& value) {
    m_welcomeMessageHasBeenSet = true;
    m_welcomeMessage = std::forward<WelcomeMessageT>(value);
  }
  template <typename WelcomeMessageT = Aws::String>
  CreateAgentRequest& WithWelcomeMessage(WelcomeMessageT&& value) {
    SetWelcomeMessage(std::forward<WelcomeMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the agent. Valid values are <code>PREVIEW</code> and
   * <code>PUBLISHED</code>.</p>
   */
  inline AgentLifecycle GetAgentLifecycle() const { return m_agentLifecycle; }
  inline bool AgentLifecycleHasBeenSet() const { return m_agentLifecycleHasBeenSet; }
  inline void SetAgentLifecycle(AgentLifecycle value) {
    m_agentLifecycleHasBeenSet = true;
    m_agentLifecycle = value;
  }
  inline CreateAgentRequest& WithAgentLifecycle(AgentLifecycle value) {
    SetAgentLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom prompt configuration for the agent.</p>
   */
  inline const CustomPromptInput& GetCustomPromptInput() const { return m_customPromptInput; }
  inline bool CustomPromptInputHasBeenSet() const { return m_customPromptInputHasBeenSet; }
  template <typename CustomPromptInputT = CustomPromptInput>
  void SetCustomPromptInput(CustomPromptInputT&& value) {
    m_customPromptInputHasBeenSet = true;
    m_customPromptInput = std::forward<CustomPromptInputT>(value);
  }
  template <typename CustomPromptInputT = CustomPromptInput>
  CreateAgentRequest& WithCustomPromptInput(CustomPromptInputT&& value) {
    SetCustomPromptInput(std::forward<CustomPromptInputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_spaces;

  Aws::Vector<Aws::String> m_actionConnectors;

  Aws::String m_awsAccountId;

  Aws::String m_agentId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_iconId;

  Aws::Vector<Aws::String> m_starterPrompts;

  Aws::String m_welcomeMessage;

  AgentLifecycle m_agentLifecycle{AgentLifecycle::NOT_SET};

  CustomPromptInput m_customPromptInput;
  bool m_spacesHasBeenSet = false;
  bool m_actionConnectorsHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_agentIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_iconIdHasBeenSet = false;
  bool m_starterPromptsHasBeenSet = false;
  bool m_welcomeMessageHasBeenSet = false;
  bool m_agentLifecycleHasBeenSet = false;
  bool m_customPromptInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
