/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplateCreateMessageBody.h>
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
  class CreateInAppTemplateResult
  {
  public:
    AWS_PINPOINT_API CreateInAppTemplateResult();
    AWS_PINPOINT_API CreateInAppTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateInAppTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TemplateCreateMessageBody& GetTemplateCreateMessageBody() const{ return m_templateCreateMessageBody; }

    
    inline void SetTemplateCreateMessageBody(const TemplateCreateMessageBody& value) { m_templateCreateMessageBody = value; }

    
    inline void SetTemplateCreateMessageBody(TemplateCreateMessageBody&& value) { m_templateCreateMessageBody = std::move(value); }

    
    inline CreateInAppTemplateResult& WithTemplateCreateMessageBody(const TemplateCreateMessageBody& value) { SetTemplateCreateMessageBody(value); return *this;}

    
    inline CreateInAppTemplateResult& WithTemplateCreateMessageBody(TemplateCreateMessageBody&& value) { SetTemplateCreateMessageBody(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateInAppTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateInAppTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateInAppTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TemplateCreateMessageBody m_templateCreateMessageBody;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
