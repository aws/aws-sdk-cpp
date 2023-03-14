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
  class DeleteEndpointResult
  {
  public:
    AWS_PINPOINT_API DeleteEndpointResult();
    AWS_PINPOINT_API DeleteEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EndpointResponse& GetEndpointResponse() const{ return m_endpointResponse; }

    
    inline void SetEndpointResponse(const EndpointResponse& value) { m_endpointResponse = value; }

    
    inline void SetEndpointResponse(EndpointResponse&& value) { m_endpointResponse = std::move(value); }

    
    inline DeleteEndpointResult& WithEndpointResponse(const EndpointResponse& value) { SetEndpointResponse(value); return *this;}

    
    inline DeleteEndpointResult& WithEndpointResponse(EndpointResponse&& value) { SetEndpointResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EndpointResponse m_endpointResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
