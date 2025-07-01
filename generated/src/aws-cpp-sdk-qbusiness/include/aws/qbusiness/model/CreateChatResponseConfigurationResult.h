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
  class CreateChatResponseConfigurationResult
  {
  public:
    AWS_QBUSINESS_API CreateChatResponseConfigurationResult() = default;
    AWS_QBUSINESS_API CreateChatResponseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateChatResponseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to a newly created chat response
     * configuration, used for subsequent operations on this resource.</p>
     */
    inline const Aws::String& GetChatResponseConfigurationId() const { return m_chatResponseConfigurationId; }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    void SetChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { m_chatResponseConfigurationIdHasBeenSet = true; m_chatResponseConfigurationId = std::forward<ChatResponseConfigurationIdT>(value); }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    CreateChatResponseConfigurationResult& WithChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { SetChatResponseConfigurationId(std::forward<ChatResponseConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the newly created chat response
     * configuration, which uniquely identifies the resource across all Amazon Web
     * Services services. </p>
     */
    inline const Aws::String& GetChatResponseConfigurationArn() const { return m_chatResponseConfigurationArn; }
    template<typename ChatResponseConfigurationArnT = Aws::String>
    void SetChatResponseConfigurationArn(ChatResponseConfigurationArnT&& value) { m_chatResponseConfigurationArnHasBeenSet = true; m_chatResponseConfigurationArn = std::forward<ChatResponseConfigurationArnT>(value); }
    template<typename ChatResponseConfigurationArnT = Aws::String>
    CreateChatResponseConfigurationResult& WithChatResponseConfigurationArn(ChatResponseConfigurationArnT&& value) { SetChatResponseConfigurationArn(std::forward<ChatResponseConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateChatResponseConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_chatResponseConfigurationId;
    bool m_chatResponseConfigurationIdHasBeenSet = false;

    Aws::String m_chatResponseConfigurationArn;
    bool m_chatResponseConfigurationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
