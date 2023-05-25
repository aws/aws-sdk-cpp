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
    AWS_PINPOINT_API GetEmailTemplateResult();
    AWS_PINPOINT_API GetEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EmailTemplateResponse& GetEmailTemplateResponse() const{ return m_emailTemplateResponse; }

    
    inline void SetEmailTemplateResponse(const EmailTemplateResponse& value) { m_emailTemplateResponse = value; }

    
    inline void SetEmailTemplateResponse(EmailTemplateResponse&& value) { m_emailTemplateResponse = std::move(value); }

    
    inline GetEmailTemplateResult& WithEmailTemplateResponse(const EmailTemplateResponse& value) { SetEmailTemplateResponse(value); return *this;}

    
    inline GetEmailTemplateResult& WithEmailTemplateResponse(EmailTemplateResponse&& value) { SetEmailTemplateResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEmailTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEmailTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEmailTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EmailTemplateResponse m_emailTemplateResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
