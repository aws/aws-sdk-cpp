/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Bridge.h>
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
  class DescribeBridgeResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeBridgeResult();
    AWS_MEDIACONNECT_API DescribeBridgeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeBridgeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Bridge& GetBridge() const{ return m_bridge; }

    
    inline void SetBridge(const Bridge& value) { m_bridge = value; }

    
    inline void SetBridge(Bridge&& value) { m_bridge = std::move(value); }

    
    inline DescribeBridgeResult& WithBridge(const Bridge& value) { SetBridge(value); return *this;}

    
    inline DescribeBridgeResult& WithBridge(Bridge&& value) { SetBridge(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBridgeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBridgeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBridgeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Bridge m_bridge;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
