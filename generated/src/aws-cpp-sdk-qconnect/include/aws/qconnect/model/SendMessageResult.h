/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageConfiguration.h>
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
namespace QConnect
{
namespace Model
{
  class SendMessageResult
  {
  public:
    AWS_QCONNECT_API SendMessageResult() = default;
    AWS_QCONNECT_API SendMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API SendMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the submitted message.</p>
     */
    inline const Aws::String& GetRequestMessageId() const { return m_requestMessageId; }
    template<typename RequestMessageIdT = Aws::String>
    void SetRequestMessageId(RequestMessageIdT&& value) { m_requestMessageIdHasBeenSet = true; m_requestMessageId = std::forward<RequestMessageIdT>(value); }
    template<typename RequestMessageIdT = Aws::String>
    SendMessageResult& WithRequestMessageId(RequestMessageIdT&& value) { SetRequestMessageId(std::forward<RequestMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_amazon-q-connect_SendMessage.html">SendMessage</a>
     * request.</p>
     */
    inline const MessageConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = MessageConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = MessageConfiguration>
    SendMessageResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next message, used by GetNextMessage.</p>
     */
    inline const Aws::String& GetNextMessageToken() const { return m_nextMessageToken; }
    template<typename NextMessageTokenT = Aws::String>
    void SetNextMessageToken(NextMessageTokenT&& value) { m_nextMessageTokenHasBeenSet = true; m_nextMessageToken = std::forward<NextMessageTokenT>(value); }
    template<typename NextMessageTokenT = Aws::String>
    SendMessageResult& WithNextMessageToken(NextMessageTokenT&& value) { SetNextMessageToken(std::forward<NextMessageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendMessageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestMessageId;
    bool m_requestMessageIdHasBeenSet = false;

    MessageConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_nextMessageToken;
    bool m_nextMessageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
