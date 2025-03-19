/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SMSTemplateResponse.h>
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
  class GetSmsTemplateResult
  {
  public:
    AWS_PINPOINT_API GetSmsTemplateResult() = default;
    AWS_PINPOINT_API GetSmsTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSmsTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const SMSTemplateResponse& GetSMSTemplateResponse() const { return m_sMSTemplateResponse; }
    template<typename SMSTemplateResponseT = SMSTemplateResponse>
    void SetSMSTemplateResponse(SMSTemplateResponseT&& value) { m_sMSTemplateResponseHasBeenSet = true; m_sMSTemplateResponse = std::forward<SMSTemplateResponseT>(value); }
    template<typename SMSTemplateResponseT = SMSTemplateResponse>
    GetSmsTemplateResult& WithSMSTemplateResponse(SMSTemplateResponseT&& value) { SetSMSTemplateResponse(std::forward<SMSTemplateResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSmsTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SMSTemplateResponse m_sMSTemplateResponse;
    bool m_sMSTemplateResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
