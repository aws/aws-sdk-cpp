/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/InAppTemplateResponse.h>
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
  class GetInAppTemplateResult
  {
  public:
    AWS_PINPOINT_API GetInAppTemplateResult();
    AWS_PINPOINT_API GetInAppTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetInAppTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const InAppTemplateResponse& GetInAppTemplateResponse() const{ return m_inAppTemplateResponse; }

    
    inline void SetInAppTemplateResponse(const InAppTemplateResponse& value) { m_inAppTemplateResponse = value; }

    
    inline void SetInAppTemplateResponse(InAppTemplateResponse&& value) { m_inAppTemplateResponse = std::move(value); }

    
    inline GetInAppTemplateResult& WithInAppTemplateResponse(const InAppTemplateResponse& value) { SetInAppTemplateResponse(value); return *this;}

    
    inline GetInAppTemplateResult& WithInAppTemplateResponse(InAppTemplateResponse&& value) { SetInAppTemplateResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInAppTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInAppTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInAppTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InAppTemplateResponse m_inAppTemplateResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
