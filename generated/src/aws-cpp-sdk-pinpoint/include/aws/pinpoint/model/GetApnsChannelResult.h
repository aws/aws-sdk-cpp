/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSChannelResponse.h>
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
  class GetApnsChannelResult
  {
  public:
    AWS_PINPOINT_API GetApnsChannelResult() = default;
    AWS_PINPOINT_API GetApnsChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetApnsChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const APNSChannelResponse& GetAPNSChannelResponse() const { return m_aPNSChannelResponse; }
    template<typename APNSChannelResponseT = APNSChannelResponse>
    void SetAPNSChannelResponse(APNSChannelResponseT&& value) { m_aPNSChannelResponseHasBeenSet = true; m_aPNSChannelResponse = std::forward<APNSChannelResponseT>(value); }
    template<typename APNSChannelResponseT = APNSChannelResponse>
    GetApnsChannelResult& WithAPNSChannelResponse(APNSChannelResponseT&& value) { SetAPNSChannelResponse(std::forward<APNSChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApnsChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    APNSChannelResponse m_aPNSChannelResponse;
    bool m_aPNSChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
