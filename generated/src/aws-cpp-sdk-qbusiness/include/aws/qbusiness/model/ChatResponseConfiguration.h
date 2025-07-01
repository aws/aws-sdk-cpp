/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ChatResponseConfigurationStatus.h>
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
   * <p>Configuration details that define how Amazon Q Business generates and formats
   * responses to user queries in chat interactions. This configuration allows
   * administrators to customize response characteristics to meet specific
   * organizational needs and communication standards.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ChatResponseConfiguration">AWS
   * API Reference</a></p>
   */
  class ChatResponseConfiguration
  {
  public:
    AWS_QBUSINESS_API ChatResponseConfiguration() = default;
    AWS_QBUSINESS_API ChatResponseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ChatResponseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for your chat response configuration settings, used to
     * reference and manage the configuration within the Amazon Q Business service.</p>
     */
    inline const Aws::String& GetChatResponseConfigurationId() const { return m_chatResponseConfigurationId; }
    inline bool ChatResponseConfigurationIdHasBeenSet() const { return m_chatResponseConfigurationIdHasBeenSet; }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    void SetChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { m_chatResponseConfigurationIdHasBeenSet = true; m_chatResponseConfigurationId = std::forward<ChatResponseConfigurationIdT>(value); }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    ChatResponseConfiguration& WithChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { SetChatResponseConfigurationId(std::forward<ChatResponseConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the chat response configuration, which
     * uniquely identifies the resource across all Amazon Web Services services and
     * accounts.</p>
     */
    inline const Aws::String& GetChatResponseConfigurationArn() const { return m_chatResponseConfigurationArn; }
    inline bool ChatResponseConfigurationArnHasBeenSet() const { return m_chatResponseConfigurationArnHasBeenSet; }
    template<typename ChatResponseConfigurationArnT = Aws::String>
    void SetChatResponseConfigurationArn(ChatResponseConfigurationArnT&& value) { m_chatResponseConfigurationArnHasBeenSet = true; m_chatResponseConfigurationArn = std::forward<ChatResponseConfigurationArnT>(value); }
    template<typename ChatResponseConfigurationArnT = Aws::String>
    ChatResponseConfiguration& WithChatResponseConfigurationArn(ChatResponseConfigurationArnT&& value) { SetChatResponseConfigurationArn(std::forward<ChatResponseConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable name for the chat response configuration, making it easier
     * to identify and manage multiple configurations within an organization.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ChatResponseConfiguration& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the response configuration settings, providing a concise
     * overview of the key parameters that define how responses are generated and
     * formatted.</p>
     */
    inline const Aws::String& GetResponseConfigurationSummary() const { return m_responseConfigurationSummary; }
    inline bool ResponseConfigurationSummaryHasBeenSet() const { return m_responseConfigurationSummaryHasBeenSet; }
    template<typename ResponseConfigurationSummaryT = Aws::String>
    void SetResponseConfigurationSummary(ResponseConfigurationSummaryT&& value) { m_responseConfigurationSummaryHasBeenSet = true; m_responseConfigurationSummary = std::forward<ResponseConfigurationSummaryT>(value); }
    template<typename ResponseConfigurationSummaryT = Aws::String>
    ChatResponseConfiguration& WithResponseConfigurationSummary(ResponseConfigurationSummaryT&& value) { SetResponseConfigurationSummary(std::forward<ResponseConfigurationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the chat response configuration, indicating whether it
     * is active, pending, or in another state that affects its availability for use in
     * chat interactions.</p>
     */
    inline ChatResponseConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChatResponseConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChatResponseConfiguration& WithStatus(ChatResponseConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the chat response configuration was initially
     * created, useful for tracking the lifecycle of configuration resources.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ChatResponseConfiguration& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the chat response configuration was last
     * modified, helping administrators track changes and maintain version
     * awareness.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ChatResponseConfiguration& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_chatResponseConfigurationId;
    bool m_chatResponseConfigurationIdHasBeenSet = false;

    Aws::String m_chatResponseConfigurationArn;
    bool m_chatResponseConfigurationArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_responseConfigurationSummary;
    bool m_responseConfigurationSummaryHasBeenSet = false;

    ChatResponseConfigurationStatus m_status{ChatResponseConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
