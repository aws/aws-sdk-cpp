/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSVoipSandboxChannelResponse.h>
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
  class DeleteApnsVoipSandboxChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteApnsVoipSandboxChannelResult() = default;
    AWS_PINPOINT_API DeleteApnsVoipSandboxChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteApnsVoipSandboxChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const APNSVoipSandboxChannelResponse& GetAPNSVoipSandboxChannelResponse() const { return m_aPNSVoipSandboxChannelResponse; }
    template<typename APNSVoipSandboxChannelResponseT = APNSVoipSandboxChannelResponse>
    void SetAPNSVoipSandboxChannelResponse(APNSVoipSandboxChannelResponseT&& value) { m_aPNSVoipSandboxChannelResponseHasBeenSet = true; m_aPNSVoipSandboxChannelResponse = std::forward<APNSVoipSandboxChannelResponseT>(value); }
    template<typename APNSVoipSandboxChannelResponseT = APNSVoipSandboxChannelResponse>
    DeleteApnsVoipSandboxChannelResult& WithAPNSVoipSandboxChannelResponse(APNSVoipSandboxChannelResponseT&& value) { SetAPNSVoipSandboxChannelResponse(std::forward<APNSVoipSandboxChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteApnsVoipSandboxChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    APNSVoipSandboxChannelResponse m_aPNSVoipSandboxChannelResponse;
    bool m_aPNSVoipSandboxChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
