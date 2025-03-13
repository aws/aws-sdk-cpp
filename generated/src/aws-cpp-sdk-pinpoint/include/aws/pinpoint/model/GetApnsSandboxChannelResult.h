/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSSandboxChannelResponse.h>
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
  class GetApnsSandboxChannelResult
  {
  public:
    AWS_PINPOINT_API GetApnsSandboxChannelResult() = default;
    AWS_PINPOINT_API GetApnsSandboxChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetApnsSandboxChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const APNSSandboxChannelResponse& GetAPNSSandboxChannelResponse() const { return m_aPNSSandboxChannelResponse; }
    template<typename APNSSandboxChannelResponseT = APNSSandboxChannelResponse>
    void SetAPNSSandboxChannelResponse(APNSSandboxChannelResponseT&& value) { m_aPNSSandboxChannelResponseHasBeenSet = true; m_aPNSSandboxChannelResponse = std::forward<APNSSandboxChannelResponseT>(value); }
    template<typename APNSSandboxChannelResponseT = APNSSandboxChannelResponse>
    GetApnsSandboxChannelResult& WithAPNSSandboxChannelResponse(APNSSandboxChannelResponseT&& value) { SetAPNSSandboxChannelResponse(std::forward<APNSSandboxChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApnsSandboxChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    APNSSandboxChannelResponse m_aPNSSandboxChannelResponse;
    bool m_aPNSSandboxChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
