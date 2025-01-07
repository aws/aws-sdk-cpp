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
    AWS_QBUSINESS_API ActionSummary();
    AWS_QBUSINESS_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of an Amazon Q Business plugin action.</p>
     */
    inline const Aws::String& GetActionIdentifier() const{ return m_actionIdentifier; }
    inline bool ActionIdentifierHasBeenSet() const { return m_actionIdentifierHasBeenSet; }
    inline void SetActionIdentifier(const Aws::String& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = value; }
    inline void SetActionIdentifier(Aws::String&& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = std::move(value); }
    inline void SetActionIdentifier(const char* value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier.assign(value); }
    inline ActionSummary& WithActionIdentifier(const Aws::String& value) { SetActionIdentifier(value); return *this;}
    inline ActionSummary& WithActionIdentifier(Aws::String&& value) { SetActionIdentifier(std::move(value)); return *this;}
    inline ActionSummary& WithActionIdentifier(const char* value) { SetActionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name assigned by Amazon Q Business to a plugin action. You can't
     * modify this value.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ActionSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ActionSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ActionSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Q Business suggested prompt and end user can use to invoke a plugin
     * action. This value can be modified and sent as input to initiate an action. For
     * example:</p> <ul> <li> <p>Create a Jira task</p> </li> <li> <p>Create a chat
     * assistant task to find the root cause of a specific incident</p> </li> </ul>
     */
    inline const Aws::String& GetInstructionExample() const{ return m_instructionExample; }
    inline bool InstructionExampleHasBeenSet() const { return m_instructionExampleHasBeenSet; }
    inline void SetInstructionExample(const Aws::String& value) { m_instructionExampleHasBeenSet = true; m_instructionExample = value; }
    inline void SetInstructionExample(Aws::String&& value) { m_instructionExampleHasBeenSet = true; m_instructionExample = std::move(value); }
    inline void SetInstructionExample(const char* value) { m_instructionExampleHasBeenSet = true; m_instructionExample.assign(value); }
    inline ActionSummary& WithInstructionExample(const Aws::String& value) { SetInstructionExample(value); return *this;}
    inline ActionSummary& WithInstructionExample(Aws::String&& value) { SetInstructionExample(std::move(value)); return *this;}
    inline ActionSummary& WithInstructionExample(const char* value) { SetInstructionExample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an Amazon Q Business plugin action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ActionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ActionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ActionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
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
