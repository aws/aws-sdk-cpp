/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/CardType.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The input shape for defining a plugin card in an Amazon Q App.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/QPluginCardInput">AWS
   * API Reference</a></p>
   */
  class QPluginCardInput
  {
  public:
    AWS_QAPPS_API QPluginCardInput() = default;
    AWS_QAPPS_API QPluginCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API QPluginCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the plugin card.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    QPluginCardInput& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the plugin card.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    QPluginCardInput& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline CardType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CardType value) { m_typeHasBeenSet = true; m_type = value; }
    inline QPluginCardInput& WithType(CardType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt or instructions displayed for the plugin card.</p>
     */
    inline const Aws::String& GetPrompt() const { return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    template<typename PromptT = Aws::String>
    void SetPrompt(PromptT&& value) { m_promptHasBeenSet = true; m_prompt = std::forward<PromptT>(value); }
    template<typename PromptT = Aws::String>
    QPluginCardInput& WithPrompt(PromptT&& value) { SetPrompt(std::forward<PromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the plugin used by the card.</p>
     */
    inline const Aws::String& GetPluginId() const { return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    template<typename PluginIdT = Aws::String>
    void SetPluginId(PluginIdT&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::forward<PluginIdT>(value); }
    template<typename PluginIdT = Aws::String>
    QPluginCardInput& WithPluginId(PluginIdT&& value) { SetPluginId(std::forward<PluginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action identifier of the action to be performed by the plugin card.</p>
     */
    inline const Aws::String& GetActionIdentifier() const { return m_actionIdentifier; }
    inline bool ActionIdentifierHasBeenSet() const { return m_actionIdentifierHasBeenSet; }
    template<typename ActionIdentifierT = Aws::String>
    void SetActionIdentifier(ActionIdentifierT&& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = std::forward<ActionIdentifierT>(value); }
    template<typename ActionIdentifierT = Aws::String>
    QPluginCardInput& WithActionIdentifier(ActionIdentifierT&& value) { SetActionIdentifier(std::forward<ActionIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type{CardType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_prompt;
    bool m_promptHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_actionIdentifier;
    bool m_actionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
