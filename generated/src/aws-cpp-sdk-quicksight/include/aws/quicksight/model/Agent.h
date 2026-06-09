/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AgentLifecycle.h>
#include <aws/quicksight/model/AgentStatus.h>
#include <aws/quicksight/model/CustomPromptInterface.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>An agent resource in Amazon QuickSight that provides AI-powered
 * conversational experiences.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Agent">AWS
 * API Reference</a></p>
 */
class Agent {
 public:
  AWS_QUICKSIGHT_API Agent() = default;
  AWS_QUICKSIGHT_API Agent(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Agent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the spaces attached to the agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSpaces() const { return m_spaces; }
  inline bool SpacesHasBeenSet() const { return m_spacesHasBeenSet; }
  template <typename SpacesT = Aws::Vector<Aws::String>>
  void SetSpaces(SpacesT&& value) {
    m_spacesHasBeenSet = true;
    m_spaces = std::forward<SpacesT>(value);
  }
  template <typename SpacesT = Aws::Vector<Aws::String>>
  Agent& WithSpaces(SpacesT&& value) {
    SetSpaces(std::forward<SpacesT>(value));
    return *this;
  }
  template <typename SpacesT = Aws::String>
  Agent& AddSpaces(SpacesT&& value) {
    m_spacesHasBeenSet = true;
    m_spaces.emplace_back(std::forward<SpacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the action connectors attached to the
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
  Agent& WithActionConnectors(ActionConnectorsT&& value) {
    SetActionConnectors(std::forward<ActionConnectorsT>(value));
    return *this;
  }
  template <typename ActionConnectorsT = Aws::String>
  Agent& AddActionConnectors(ActionConnectorsT&& value) {
    m_actionConnectorsHasBeenSet = true;
    m_actionConnectors.emplace_back(std::forward<ActionConnectorsT>(value));
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
  Agent& WithDescription(DescriptionT&& value) {
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
  Agent& WithIconId(IconIdT&& value) {
    SetIconId(std::forward<IconIdT>(value));
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
  Agent& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  Agent& WithStarterPrompts(StarterPromptsT&& value) {
    SetStarterPrompts(std::forward<StarterPromptsT>(value));
    return *this;
  }
  template <typename StarterPromptsT = Aws::String>
  Agent& AddStarterPrompts(StarterPromptsT&& value) {
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
  Agent& WithWelcomeMessage(WelcomeMessageT&& value) {
    SetWelcomeMessage(std::forward<WelcomeMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the agent.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Agent& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the agent.</p>
   */
  inline const Aws::String& GetAgentId() const { return m_agentId; }
  inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
  template <typename AgentIdT = Aws::String>
  void SetAgentId(AgentIdT&& value) {
    m_agentIdHasBeenSet = true;
    m_agentId = std::forward<AgentIdT>(value);
  }
  template <typename AgentIdT = Aws::String>
  Agent& WithAgentId(AgentIdT&& value) {
    SetAgentId(std::forward<AgentIdT>(value));
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
  inline Agent& WithAgentLifecycle(AgentLifecycle value) {
    SetAgentLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the agent.</p>
   */
  inline AgentStatus GetAgentStatus() const { return m_agentStatus; }
  inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
  inline void SetAgentStatus(AgentStatus value) {
    m_agentStatusHasBeenSet = true;
    m_agentStatus = value;
  }
  inline Agent& WithAgentStatus(AgentStatus value) {
    SetAgentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the agent was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Agent& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity of the user who created the agent.</p>
   */
  inline const Aws::String& GetCreator() const { return m_creator; }
  inline bool CreatorHasBeenSet() const { return m_creatorHasBeenSet; }
  template <typename CreatorT = Aws::String>
  void SetCreator(CreatorT&& value) {
    m_creatorHasBeenSet = true;
    m_creator = std::forward<CreatorT>(value);
  }
  template <typename CreatorT = Aws::String>
  Agent& WithCreator(CreatorT&& value) {
    SetCreator(std::forward<CreatorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom prompt interface configuration for the agent.</p>
   */
  inline const CustomPromptInterface& GetCustomPromptInterface() const { return m_customPromptInterface; }
  inline bool CustomPromptInterfaceHasBeenSet() const { return m_customPromptInterfaceHasBeenSet; }
  template <typename CustomPromptInterfaceT = CustomPromptInterface>
  void SetCustomPromptInterface(CustomPromptInterfaceT&& value) {
    m_customPromptInterfaceHasBeenSet = true;
    m_customPromptInterface = std::forward<CustomPromptInterfaceT>(value);
  }
  template <typename CustomPromptInterfaceT = CustomPromptInterface>
  Agent& WithCustomPromptInterface(CustomPromptInterfaceT&& value) {
    SetCustomPromptInterface(std::forward<CustomPromptInterfaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An error message associated with the agent, if applicable.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  Agent& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the agent was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Agent& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_spaces;

  Aws::Vector<Aws::String> m_actionConnectors;

  Aws::String m_description;

  Aws::String m_iconId;

  Aws::String m_name;

  Aws::Vector<Aws::String> m_starterPrompts;

  Aws::String m_welcomeMessage;

  Aws::String m_arn;

  Aws::String m_agentId;

  AgentLifecycle m_agentLifecycle{AgentLifecycle::NOT_SET};

  AgentStatus m_agentStatus{AgentStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_creator;

  CustomPromptInterface m_customPromptInterface;

  Aws::String m_errorMessage;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_spacesHasBeenSet = false;
  bool m_actionConnectorsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_iconIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_starterPromptsHasBeenSet = false;
  bool m_welcomeMessageHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_agentIdHasBeenSet = false;
  bool m_agentLifecycleHasBeenSet = false;
  bool m_agentStatusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_creatorHasBeenSet = false;
  bool m_customPromptInterfaceHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
