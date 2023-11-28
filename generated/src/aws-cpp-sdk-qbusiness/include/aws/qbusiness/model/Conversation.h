/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A conversation in an Amazon Q application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Conversation">AWS
   * API Reference</a></p>
   */
  class Conversation
  {
  public:
    AWS_QBUSINESS_API Conversation();
    AWS_QBUSINESS_API Conversation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Conversation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline Conversation& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline Conversation& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline Conversation& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>The start time of the conversation.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the conversation.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the conversation.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the conversation.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the conversation.</p>
     */
    inline Conversation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the conversation.</p>
     */
    inline Conversation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The title of the conversation.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the conversation.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the conversation.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the conversation.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the conversation.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the conversation.</p>
     */
    inline Conversation& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the conversation.</p>
     */
    inline Conversation& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the conversation.</p>
     */
    inline Conversation& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
