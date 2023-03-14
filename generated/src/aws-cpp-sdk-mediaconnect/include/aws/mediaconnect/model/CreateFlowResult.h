/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Flow.h>
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
  class CreateFlowResult
  {
  public:
    AWS_MEDIACONNECT_API CreateFlowResult();
    AWS_MEDIACONNECT_API CreateFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API CreateFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Flow& GetFlow() const{ return m_flow; }

    
    inline void SetFlow(const Flow& value) { m_flow = value; }

    
    inline void SetFlow(Flow&& value) { m_flow = std::move(value); }

    
    inline CreateFlowResult& WithFlow(const Flow& value) { SetFlow(value); return *this;}

    
    inline CreateFlowResult& WithFlow(Flow&& value) { SetFlow(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Flow m_flow;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
