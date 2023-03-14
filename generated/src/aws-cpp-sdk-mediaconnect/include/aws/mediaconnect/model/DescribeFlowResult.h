/**
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
    AWS_MEDIACONNECT_API DescribeFlowResult();
    AWS_MEDIACONNECT_API DescribeFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Flow& GetFlow() const{ return m_flow; }

    
    inline void SetFlow(const Flow& value) { m_flow = value; }

    
    inline void SetFlow(Flow&& value) { m_flow = std::move(value); }

    
    inline DescribeFlowResult& WithFlow(const Flow& value) { SetFlow(value); return *this;}

    
    inline DescribeFlowResult& WithFlow(Flow&& value) { SetFlow(std::move(value)); return *this;}


    
    inline const Messages& GetMessages() const{ return m_messages; }

    
    inline void SetMessages(const Messages& value) { m_messages = value; }

    
    inline void SetMessages(Messages&& value) { m_messages = std::move(value); }

    
    inline DescribeFlowResult& WithMessages(const Messages& value) { SetMessages(value); return *this;}

    
    inline DescribeFlowResult& WithMessages(Messages&& value) { SetMessages(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Flow m_flow;

    Messages m_messages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
