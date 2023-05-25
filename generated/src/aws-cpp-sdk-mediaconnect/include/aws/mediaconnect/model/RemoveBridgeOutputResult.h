/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
  class RemoveBridgeOutputResult
  {
  public:
    AWS_MEDIACONNECT_API RemoveBridgeOutputResult();
    AWS_MEDIACONNECT_API RemoveBridgeOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API RemoveBridgeOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArn = value; }

    
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArn = std::move(value); }

    
    inline void SetBridgeArn(const char* value) { m_bridgeArn.assign(value); }

    
    inline RemoveBridgeOutputResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    
    inline RemoveBridgeOutputResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    
    inline RemoveBridgeOutputResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const Aws::String& GetOutputName() const{ return m_outputName; }

    
    inline void SetOutputName(const Aws::String& value) { m_outputName = value; }

    
    inline void SetOutputName(Aws::String&& value) { m_outputName = std::move(value); }

    
    inline void SetOutputName(const char* value) { m_outputName.assign(value); }

    
    inline RemoveBridgeOutputResult& WithOutputName(const Aws::String& value) { SetOutputName(value); return *this;}

    
    inline RemoveBridgeOutputResult& WithOutputName(Aws::String&& value) { SetOutputName(std::move(value)); return *this;}

    
    inline RemoveBridgeOutputResult& WithOutputName(const char* value) { SetOutputName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RemoveBridgeOutputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RemoveBridgeOutputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RemoveBridgeOutputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    Aws::String m_outputName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
