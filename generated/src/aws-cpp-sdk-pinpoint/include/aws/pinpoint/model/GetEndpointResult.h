/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EndpointResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetEndpointResult
  {
  public:
    AWS_PINPOINT_API GetEndpointResult();
    AWS_PINPOINT_API GetEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EndpointResponse& GetEndpointResponse() const{ return m_endpointResponse; }

    
    inline void SetEndpointResponse(const EndpointResponse& value) { m_endpointResponse = value; }

    
    inline void SetEndpointResponse(EndpointResponse&& value) { m_endpointResponse = std::move(value); }

    
    inline GetEndpointResult& WithEndpointResponse(const EndpointResponse& value) { SetEndpointResponse(value); return *this;}

    
    inline GetEndpointResult& WithEndpointResponse(EndpointResponse&& value) { SetEndpointResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EndpointResponse m_endpointResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
