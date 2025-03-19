/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SMSChannelResponse.h>
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
  class GetSmsChannelResult
  {
  public:
    AWS_PINPOINT_API GetSmsChannelResult() = default;
    AWS_PINPOINT_API GetSmsChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSmsChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const SMSChannelResponse& GetSMSChannelResponse() const { return m_sMSChannelResponse; }
    template<typename SMSChannelResponseT = SMSChannelResponse>
    void SetSMSChannelResponse(SMSChannelResponseT&& value) { m_sMSChannelResponseHasBeenSet = true; m_sMSChannelResponse = std::forward<SMSChannelResponseT>(value); }
    template<typename SMSChannelResponseT = SMSChannelResponse>
    GetSmsChannelResult& WithSMSChannelResponse(SMSChannelResponseT&& value) { SetSMSChannelResponse(std::forward<SMSChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSmsChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SMSChannelResponse m_sMSChannelResponse;
    bool m_sMSChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
