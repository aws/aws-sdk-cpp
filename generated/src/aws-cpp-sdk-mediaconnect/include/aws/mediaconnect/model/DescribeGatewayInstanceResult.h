/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/GatewayInstance.h>
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
  class DescribeGatewayInstanceResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeGatewayInstanceResult();
    AWS_MEDIACONNECT_API DescribeGatewayInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeGatewayInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const GatewayInstance& GetGatewayInstance() const{ return m_gatewayInstance; }

    
    inline void SetGatewayInstance(const GatewayInstance& value) { m_gatewayInstance = value; }

    
    inline void SetGatewayInstance(GatewayInstance&& value) { m_gatewayInstance = std::move(value); }

    
    inline DescribeGatewayInstanceResult& WithGatewayInstance(const GatewayInstance& value) { SetGatewayInstance(value); return *this;}

    
    inline DescribeGatewayInstanceResult& WithGatewayInstance(GatewayInstance&& value) { SetGatewayInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeGatewayInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeGatewayInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeGatewayInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GatewayInstance m_gatewayInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
