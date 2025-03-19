/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Summary information for an Amazon Q Business plugin action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionSummary">AWS
   * API Reference</a></p>
   */
  class ActionSummary
  {
  public:
    AWS_QBUSINESS_API ActionSummary() = default;
    AWS_QBUSINESS_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of an Amazon Q Business plugin action.</p>
     */
    inline const Aws::String& GetActionIdentifier() const { return m_actionIdentifier; }
    inline bool ActionIdentifierHasBeenSet() const { return m_actionIdentifierHasBeenSet; }
    template<typename ActionIdentifierT = Aws::String>
    void SetActionIdentifier(ActionIdentifierT&& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = std::forward<ActionIdentifierT>(value); }
    template<typename ActionIdentifierT = Aws::String>
    ActionSummary& WithActionIdentifier(ActionIdentifierT&& value) { SetActionIdentifier(std::forward<ActionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name assigned by Amazon Q Business to a plugin action. You can't
     * modify this value.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ActionSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Q Business suggested prompt and end user can use to invoke a plugin
     * action. This value can be modified and sent as input to initiate an action. For
     * example:</p> <ul> <li> <p>Create a Jira task</p> </li> <li> <p>Create a chat
     * assistant task to find the root cause of a specific incident</p> </li> </ul>
     */
    inline const Aws::String& GetInstructionExample() const { return m_instructionExample; }
    inline bool InstructionExampleHasBeenSet() const { return m_instructionExampleHasBeenSet; }
    template<typename InstructionExampleT = Aws::String>
    void SetInstructionExample(InstructionExampleT&& value) { m_instructionExampleHasBeenSet = true; m_instructionExample = std::forward<InstructionExampleT>(value); }
    template<typename InstructionExampleT = Aws::String>
    ActionSummary& WithInstructionExample(InstructionExampleT&& value) { SetInstructionExample(std::forward<InstructionExampleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an Amazon Q Business plugin action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ActionSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionIdentifier;
    bool m_actionIdentifierHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_instructionExample;
    bool m_instructionExampleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
