/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EndpointsResponse.h>
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
  class GetUserEndpointsResult
  {
  public:
    AWS_PINPOINT_API GetUserEndpointsResult() = default;
    AWS_PINPOINT_API GetUserEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetUserEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const EndpointsResponse& GetEndpointsResponse() const { return m_endpointsResponse; }
    template<typename EndpointsResponseT = EndpointsResponse>
    void SetEndpointsResponse(EndpointsResponseT&& value) { m_endpointsResponseHasBeenSet = true; m_endpointsResponse = std::forward<EndpointsResponseT>(value); }
    template<typename EndpointsResponseT = EndpointsResponse>
    GetUserEndpointsResult& WithEndpointsResponse(EndpointsResponseT&& value) { SetEndpointsResponse(std::forward<EndpointsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EndpointsResponse m_endpointsResponse;
    bool m_endpointsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
