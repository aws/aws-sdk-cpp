/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/Layout.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/InAppMessageContent.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>InApp Template Request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppTemplateRequest">AWS
   * API Reference</a></p>
   */
  class InAppTemplateRequest
  {
  public:
    AWS_PINPOINT_API InAppTemplateRequest();
    AWS_PINPOINT_API InAppTemplateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppTemplateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline const Aws::Vector<InAppMessageContent>& GetContent() const{ return m_content; }

    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline void SetContent(const Aws::Vector<InAppMessageContent>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline void SetContent(Aws::Vector<InAppMessageContent>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline InAppTemplateRequest& WithContent(const Aws::Vector<InAppMessageContent>& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline InAppTemplateRequest& WithContent(Aws::Vector<InAppMessageContent>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline InAppTemplateRequest& AddContent(const InAppMessageContent& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline InAppTemplateRequest& AddContent(InAppMessageContent&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }


    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomConfig() const{ return m_customConfig; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline bool CustomConfigHasBeenSet() const { return m_customConfigHasBeenSet; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline void SetCustomConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_customConfigHasBeenSet = true; m_customConfig = value; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline void SetCustomConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_customConfigHasBeenSet = true; m_customConfig = std::move(value); }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& WithCustomConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomConfig(value); return *this;}

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& WithCustomConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomConfig(std::move(value)); return *this;}

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& AddCustomConfig(const Aws::String& key, const Aws::String& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, value); return *this; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& AddCustomConfig(Aws::String&& key, const Aws::String& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& AddCustomConfig(const Aws::String& key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& AddCustomConfig(Aws::String&& key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& AddCustomConfig(const char* key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& AddCustomConfig(Aws::String&& key, const char* value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline InAppTemplateRequest& AddCustomConfig(const char* key, const char* value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, value); return *this; }


    /**
     * <p>The layout of the message.</p>
     */
    inline const Layout& GetLayout() const{ return m_layout; }

    /**
     * <p>The layout of the message.</p>
     */
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }

    /**
     * <p>The layout of the message.</p>
     */
    inline void SetLayout(const Layout& value) { m_layoutHasBeenSet = true; m_layout = value; }

    /**
     * <p>The layout of the message.</p>
     */
    inline void SetLayout(Layout&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }

    /**
     * <p>The layout of the message.</p>
     */
    inline InAppTemplateRequest& WithLayout(const Layout& value) { SetLayout(value); return *this;}

    /**
     * <p>The layout of the message.</p>
     */
    inline InAppTemplateRequest& WithLayout(Layout&& value) { SetLayout(std::move(value)); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline InAppTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The description of the template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>The description of the template.</p>
     */
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }

    /**
     * <p>The description of the template.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>The description of the template.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }

    /**
     * <p>The description of the template.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>The description of the template.</p>
     */
    inline InAppTemplateRequest& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The description of the template.</p>
     */
    inline InAppTemplateRequest& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the template.</p>
     */
    inline InAppTemplateRequest& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}

  private:

    Aws::Vector<InAppMessageContent> m_content;
    bool m_contentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customConfig;
    bool m_customConfigHasBeenSet = false;

    Layout m_layout;
    bool m_layoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
