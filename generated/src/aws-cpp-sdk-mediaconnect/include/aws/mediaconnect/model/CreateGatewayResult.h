/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Gateway.h>
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
  class CreateGatewayResult
  {
  public:
    AWS_MEDIACONNECT_API CreateGatewayResult();
    AWS_MEDIACONNECT_API CreateGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API CreateGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Gateway& GetGateway() const{ return m_gateway; }

    
    inline void SetGateway(const Gateway& value) { m_gateway = value; }

    
    inline void SetGateway(Gateway&& value) { m_gateway = std::move(value); }

    
    inline CreateGatewayResult& WithGateway(const Gateway& value) { SetGateway(value); return *this;}

    
    inline CreateGatewayResult& WithGateway(Gateway&& value) { SetGateway(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Gateway m_gateway;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
