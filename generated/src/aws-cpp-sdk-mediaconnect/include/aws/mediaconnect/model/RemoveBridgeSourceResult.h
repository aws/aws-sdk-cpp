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
  class RemoveBridgeSourceResult
  {
  public:
    AWS_MEDIACONNECT_API RemoveBridgeSourceResult();
    AWS_MEDIACONNECT_API RemoveBridgeSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API RemoveBridgeSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArn = value; }

    
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArn = std::move(value); }

    
    inline void SetBridgeArn(const char* value) { m_bridgeArn.assign(value); }

    
    inline RemoveBridgeSourceResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    
    inline RemoveBridgeSourceResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    
    inline RemoveBridgeSourceResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    
    inline void SetSourceName(const Aws::String& value) { m_sourceName = value; }

    
    inline void SetSourceName(Aws::String&& value) { m_sourceName = std::move(value); }

    
    inline void SetSourceName(const char* value) { m_sourceName.assign(value); }

    
    inline RemoveBridgeSourceResult& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    
    inline RemoveBridgeSourceResult& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    
    inline RemoveBridgeSourceResult& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RemoveBridgeSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RemoveBridgeSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RemoveBridgeSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    Aws::String m_sourceName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
