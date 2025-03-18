/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSVoipChannelResponse.h>
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
  class UpdateApnsVoipChannelResult
  {
  public:
    AWS_PINPOINT_API UpdateApnsVoipChannelResult() = default;
    AWS_PINPOINT_API UpdateApnsVoipChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateApnsVoipChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const APNSVoipChannelResponse& GetAPNSVoipChannelResponse() const { return m_aPNSVoipChannelResponse; }
    template<typename APNSVoipChannelResponseT = APNSVoipChannelResponse>
    void SetAPNSVoipChannelResponse(APNSVoipChannelResponseT&& value) { m_aPNSVoipChannelResponseHasBeenSet = true; m_aPNSVoipChannelResponse = std::forward<APNSVoipChannelResponseT>(value); }
    template<typename APNSVoipChannelResponseT = APNSVoipChannelResponse>
    UpdateApnsVoipChannelResult& WithAPNSVoipChannelResponse(APNSVoipChannelResponseT&& value) { SetAPNSVoipChannelResponse(std::forward<APNSVoipChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApnsVoipChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    APNSVoipChannelResponse m_aPNSVoipChannelResponse;
    bool m_aPNSVoipChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
