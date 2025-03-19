/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EmailTemplateResponse.h>
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
  class GetEmailTemplateResult
  {
  public:
    AWS_PINPOINT_API GetEmailTemplateResult() = default;
    AWS_PINPOINT_API GetEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const EmailTemplateResponse& GetEmailTemplateResponse() const { return m_emailTemplateResponse; }
    template<typename EmailTemplateResponseT = EmailTemplateResponse>
    void SetEmailTemplateResponse(EmailTemplateResponseT&& value) { m_emailTemplateResponseHasBeenSet = true; m_emailTemplateResponse = std::forward<EmailTemplateResponseT>(value); }
    template<typename EmailTemplateResponseT = EmailTemplateResponse>
    GetEmailTemplateResult& WithEmailTemplateResponse(EmailTemplateResponseT&& value) { SetEmailTemplateResponse(std::forward<EmailTemplateResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEmailTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EmailTemplateResponse m_emailTemplateResponse;
    bool m_emailTemplateResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
