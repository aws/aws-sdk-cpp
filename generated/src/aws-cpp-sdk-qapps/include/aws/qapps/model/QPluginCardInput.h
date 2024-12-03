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
    AWS_QAPPS_API QPluginCardInput();
    AWS_QAPPS_API QPluginCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API QPluginCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the plugin card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline QPluginCardInput& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline QPluginCardInput& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline QPluginCardInput& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the plugin card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline QPluginCardInput& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline QPluginCardInput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline QPluginCardInput& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline QPluginCardInput& WithType(const CardType& value) { SetType(value); return *this;}
    inline QPluginCardInput& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt or instructions displayed for the plugin card.</p>
     */
    inline const Aws::String& GetPrompt() const{ return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    inline void SetPrompt(const Aws::String& value) { m_promptHasBeenSet = true; m_prompt = value; }
    inline void SetPrompt(Aws::String&& value) { m_promptHasBeenSet = true; m_prompt = std::move(value); }
    inline void SetPrompt(const char* value) { m_promptHasBeenSet = true; m_prompt.assign(value); }
    inline QPluginCardInput& WithPrompt(const Aws::String& value) { SetPrompt(value); return *this;}
    inline QPluginCardInput& WithPrompt(Aws::String&& value) { SetPrompt(std::move(value)); return *this;}
    inline QPluginCardInput& WithPrompt(const char* value) { SetPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the plugin used by the card.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }
    inline QPluginCardInput& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline QPluginCardInput& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline QPluginCardInput& WithPluginId(const char* value) { SetPluginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action identifier of the action to be performed by the plugin card.</p>
     */
    inline const Aws::String& GetActionIdentifier() const{ return m_actionIdentifier; }
    inline bool ActionIdentifierHasBeenSet() const { return m_actionIdentifierHasBeenSet; }
    inline void SetActionIdentifier(const Aws::String& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = value; }
    inline void SetActionIdentifier(Aws::String&& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = std::move(value); }
    inline void SetActionIdentifier(const char* value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier.assign(value); }
    inline QPluginCardInput& WithActionIdentifier(const Aws::String& value) { SetActionIdentifier(value); return *this;}
    inline QPluginCardInput& WithActionIdentifier(Aws::String&& value) { SetActionIdentifier(std::move(value)); return *this;}
    inline QPluginCardInput& WithActionIdentifier(const char* value) { SetActionIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type;
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
