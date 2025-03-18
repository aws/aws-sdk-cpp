﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Flow.h>
#include <aws/mediaconnect/model/Messages.h>
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
namespace MediaConnect
{
namespace Model
{
  class DescribeFlowResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeFlowResult() = default;
    AWS_MEDIACONNECT_API DescribeFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Flow& GetFlow() const { return m_flow; }
    template<typename FlowT = Flow>
    void SetFlow(FlowT&& value) { m_flowHasBeenSet = true; m_flow = std::forward<FlowT>(value); }
    template<typename FlowT = Flow>
    DescribeFlowResult& WithFlow(FlowT&& value) { SetFlow(std::forward<FlowT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Messages& GetMessages() const { return m_messages; }
    template<typename MessagesT = Messages>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Messages>
    DescribeFlowResult& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Flow m_flow;
    bool m_flowHasBeenSet = false;

    Messages m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
