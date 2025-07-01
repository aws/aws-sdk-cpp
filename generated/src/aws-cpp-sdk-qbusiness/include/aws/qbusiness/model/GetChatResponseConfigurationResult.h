/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ChatResponseConfigurationDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{
  class GetChatResponseConfigurationResult
  {
  public:
    AWS_QBUSINESS_API GetChatResponseConfigurationResult() = default;
    AWS_QBUSINESS_API GetChatResponseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetChatResponseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the retrieved chat response configuration.</p>
     */
    inline const Aws::String& GetChatResponseConfigurationId() const { return m_chatResponseConfigurationId; }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    void SetChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { m_chatResponseConfigurationIdHasBeenSet = true; m_chatResponseConfigurationId = std::forward<ChatResponseConfigurationIdT>(value); }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    GetChatResponseConfigurationResult& WithChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { SetChatResponseConfigurationId(std::forward<ChatResponseConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved chat response configuration,
     * which uniquely identifies the resource across all Amazon Web Services services.
     * </p>
     */
    inline const Aws::String& GetChatResponseConfigurationArn() const { return m_chatResponseConfigurationArn; }
    template<typename ChatResponseConfigurationArnT = Aws::String>
    void SetChatResponseConfigurationArn(ChatResponseConfigurationArnT&& value) { m_chatResponseConfigurationArnHasBeenSet = true; m_chatResponseConfigurationArn = std::forward<ChatResponseConfigurationArnT>(value); }
    template<typename ChatResponseConfigurationArnT = Aws::String>
    GetChatResponseConfigurationResult& WithChatResponseConfigurationArn(ChatResponseConfigurationArnT&& value) { SetChatResponseConfigurationArn(std::forward<ChatResponseConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The human-readable name of the retrieved chat response configuration, making
     * it easier to identify among multiple configurations.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetChatResponseConfigurationResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the chat response configuration was initially
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetChatResponseConfigurationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currently active configuration settings that are being used to generate
     * responses in the Amazon Q Business application.</p>
     */
    inline const ChatResponseConfigurationDetail& GetInUseConfiguration() const { return m_inUseConfiguration; }
    template<typename InUseConfigurationT = ChatResponseConfigurationDetail>
    void SetInUseConfiguration(InUseConfigurationT&& value) { m_inUseConfigurationHasBeenSet = true; m_inUseConfiguration = std::forward<InUseConfigurationT>(value); }
    template<typename InUseConfigurationT = ChatResponseConfigurationDetail>
    GetChatResponseConfigurationResult& WithInUseConfiguration(InUseConfigurationT&& value) { SetInUseConfiguration(std::forward<InUseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent update to the configuration, including
     * timestamp and modification details.</p>
     */
    inline const ChatResponseConfigurationDetail& GetLastUpdateConfiguration() const { return m_lastUpdateConfiguration; }
    template<typename LastUpdateConfigurationT = ChatResponseConfigurationDetail>
    void SetLastUpdateConfiguration(LastUpdateConfigurationT&& value) { m_lastUpdateConfigurationHasBeenSet = true; m_lastUpdateConfiguration = std::forward<LastUpdateConfigurationT>(value); }
    template<typename LastUpdateConfigurationT = ChatResponseConfigurationDetail>
    GetChatResponseConfigurationResult& WithLastUpdateConfiguration(LastUpdateConfigurationT&& value) { SetLastUpdateConfiguration(std::forward<LastUpdateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChatResponseConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_chatResponseConfigurationId;
    bool m_chatResponseConfigurationIdHasBeenSet = false;

    Aws::String m_chatResponseConfigurationArn;
    bool m_chatResponseConfigurationArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ChatResponseConfigurationDetail m_inUseConfiguration;
    bool m_inUseConfigurationHasBeenSet = false;

    ChatResponseConfigurationDetail m_lastUpdateConfiguration;
    bool m_lastUpdateConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
