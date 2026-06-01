/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomPromptInput.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateAgentRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateAgentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAgent"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the agent to update.</p>
   */
  inline const Aws::String& GetAgentId() const { return m_agentId; }
  inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
  template <typename AgentIdT = Aws::String>
  void SetAgentId(AgentIdT&& value) {
    m_agentIdHasBeenSet = true;
    m_agentId = std::forward<AgentIdT>(value);
  }
  template <typename AgentIdT = Aws::String>
  UpdateAgentRequest& WithAgentId(AgentIdT&& value) {
    SetAgentId(std::forward<AgentIdT>(value));
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
  UpdateAgentRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
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
  UpdateAgentRequest& WithName(NameT&& value) {
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
  UpdateAgentRequest& WithDescription(DescriptionT&& value) {
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
  UpdateAgentRequest& WithIconId(IconIdT&& value) {
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
  UpdateAgentRequest& WithStarterPrompts(StarterPromptsT&& value) {
    SetStarterPrompts(std::forward<StarterPromptsT>(value));
    return *this;
  }
  template <typename StarterPromptsT = Aws::String>
  UpdateAgentRequest& AddStarterPrompts(StarterPromptsT&& value) {
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
  UpdateAgentRequest& WithWelcomeMessage(WelcomeMessageT&& value) {
    SetWelcomeMessage(std::forward<WelcomeMessageT>(value));
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
  UpdateAgentRequest& WithCustomPromptInput(CustomPromptInputT&& value) {
    SetCustomPromptInput(std::forward<CustomPromptInputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the spaces to attach to the agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSpacesToAdd() const { return m_spacesToAdd; }
  inline bool SpacesToAddHasBeenSet() const { return m_spacesToAddHasBeenSet; }
  template <typename SpacesToAddT = Aws::Vector<Aws::String>>
  void SetSpacesToAdd(SpacesToAddT&& value) {
    m_spacesToAddHasBeenSet = true;
    m_spacesToAdd = std::forward<SpacesToAddT>(value);
  }
  template <typename SpacesToAddT = Aws::Vector<Aws::String>>
  UpdateAgentRequest& WithSpacesToAdd(SpacesToAddT&& value) {
    SetSpacesToAdd(std::forward<SpacesToAddT>(value));
    return *this;
  }
  template <typename SpacesToAddT = Aws::String>
  UpdateAgentRequest& AddSpacesToAdd(SpacesToAddT&& value) {
    m_spacesToAddHasBeenSet = true;
    m_spacesToAdd.emplace_back(std::forward<SpacesToAddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the spaces to detach from the agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSpacesToRemove() const { return m_spacesToRemove; }
  inline bool SpacesToRemoveHasBeenSet() const { return m_spacesToRemoveHasBeenSet; }
  template <typename SpacesToRemoveT = Aws::Vector<Aws::String>>
  void SetSpacesToRemove(SpacesToRemoveT&& value) {
    m_spacesToRemoveHasBeenSet = true;
    m_spacesToRemove = std::forward<SpacesToRemoveT>(value);
  }
  template <typename SpacesToRemoveT = Aws::Vector<Aws::String>>
  UpdateAgentRequest& WithSpacesToRemove(SpacesToRemoveT&& value) {
    SetSpacesToRemove(std::forward<SpacesToRemoveT>(value));
    return *this;
  }
  template <typename SpacesToRemoveT = Aws::String>
  UpdateAgentRequest& AddSpacesToRemove(SpacesToRemoveT&& value) {
    m_spacesToRemoveHasBeenSet = true;
    m_spacesToRemove.emplace_back(std::forward<SpacesToRemoveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the action connectors to attach to the
   * agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetActionConnectorsToAdd() const { return m_actionConnectorsToAdd; }
  inline bool ActionConnectorsToAddHasBeenSet() const { return m_actionConnectorsToAddHasBeenSet; }
  template <typename ActionConnectorsToAddT = Aws::Vector<Aws::String>>
  void SetActionConnectorsToAdd(ActionConnectorsToAddT&& value) {
    m_actionConnectorsToAddHasBeenSet = true;
    m_actionConnectorsToAdd = std::forward<ActionConnectorsToAddT>(value);
  }
  template <typename ActionConnectorsToAddT = Aws::Vector<Aws::String>>
  UpdateAgentRequest& WithActionConnectorsToAdd(ActionConnectorsToAddT&& value) {
    SetActionConnectorsToAdd(std::forward<ActionConnectorsToAddT>(value));
    return *this;
  }
  template <typename ActionConnectorsToAddT = Aws::String>
  UpdateAgentRequest& AddActionConnectorsToAdd(ActionConnectorsToAddT&& value) {
    m_actionConnectorsToAddHasBeenSet = true;
    m_actionConnectorsToAdd.emplace_back(std::forward<ActionConnectorsToAddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the action connectors to detach from the
   * agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetActionConnectorsToRemove() const { return m_actionConnectorsToRemove; }
  inline bool ActionConnectorsToRemoveHasBeenSet() const { return m_actionConnectorsToRemoveHasBeenSet; }
  template <typename ActionConnectorsToRemoveT = Aws::Vector<Aws::String>>
  void SetActionConnectorsToRemove(ActionConnectorsToRemoveT&& value) {
    m_actionConnectorsToRemoveHasBeenSet = true;
    m_actionConnectorsToRemove = std::forward<ActionConnectorsToRemoveT>(value);
  }
  template <typename ActionConnectorsToRemoveT = Aws::Vector<Aws::String>>
  UpdateAgentRequest& WithActionConnectorsToRemove(ActionConnectorsToRemoveT&& value) {
    SetActionConnectorsToRemove(std::forward<ActionConnectorsToRemoveT>(value));
    return *this;
  }
  template <typename ActionConnectorsToRemoveT = Aws::String>
  UpdateAgentRequest& AddActionConnectorsToRemove(ActionConnectorsToRemoveT&& value) {
    m_actionConnectorsToRemoveHasBeenSet = true;
    m_actionConnectorsToRemove.emplace_back(std::forward<ActionConnectorsToRemoveT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentId;

  Aws::String m_awsAccountId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_iconId;

  Aws::Vector<Aws::String> m_starterPrompts;

  Aws::String m_welcomeMessage;

  CustomPromptInput m_customPromptInput;

  Aws::Vector<Aws::String> m_spacesToAdd;

  Aws::Vector<Aws::String> m_spacesToRemove;

  Aws::Vector<Aws::String> m_actionConnectorsToAdd;

  Aws::Vector<Aws::String> m_actionConnectorsToRemove;
  bool m_agentIdHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_iconIdHasBeenSet = false;
  bool m_starterPromptsHasBeenSet = false;
  bool m_welcomeMessageHasBeenSet = false;
  bool m_customPromptInputHasBeenSet = false;
  bool m_spacesToAddHasBeenSet = false;
  bool m_spacesToRemoveHasBeenSet = false;
  bool m_actionConnectorsToAddHasBeenSet = false;
  bool m_actionConnectorsToRemoveHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
