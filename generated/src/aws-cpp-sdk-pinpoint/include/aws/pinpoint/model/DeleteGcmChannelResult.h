/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/GCMChannelResponse.h>
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
  class DeleteGcmChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteGcmChannelResult() = default;
    AWS_PINPOINT_API DeleteGcmChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteGcmChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const GCMChannelResponse& GetGCMChannelResponse() const { return m_gCMChannelResponse; }
    template<typename GCMChannelResponseT = GCMChannelResponse>
    void SetGCMChannelResponse(GCMChannelResponseT&& value) { m_gCMChannelResponseHasBeenSet = true; m_gCMChannelResponse = std::forward<GCMChannelResponseT>(value); }
    template<typename GCMChannelResponseT = GCMChannelResponse>
    DeleteGcmChannelResult& WithGCMChannelResponse(GCMChannelResponseT&& value) { SetGCMChannelResponse(std::forward<GCMChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteGcmChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GCMChannelResponse m_gCMChannelResponse;
    bool m_gCMChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
