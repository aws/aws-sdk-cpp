/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VoiceTemplateResponse.h>
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
  class GetVoiceTemplateResult
  {
  public:
    AWS_PINPOINT_API GetVoiceTemplateResult();
    AWS_PINPOINT_API GetVoiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetVoiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VoiceTemplateResponse& GetVoiceTemplateResponse() const{ return m_voiceTemplateResponse; }

    
    inline void SetVoiceTemplateResponse(const VoiceTemplateResponse& value) { m_voiceTemplateResponse = value; }

    
    inline void SetVoiceTemplateResponse(VoiceTemplateResponse&& value) { m_voiceTemplateResponse = std::move(value); }

    
    inline GetVoiceTemplateResult& WithVoiceTemplateResponse(const VoiceTemplateResponse& value) { SetVoiceTemplateResponse(value); return *this;}

    
    inline GetVoiceTemplateResult& WithVoiceTemplateResponse(VoiceTemplateResponse&& value) { SetVoiceTemplateResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceTemplateResponse m_voiceTemplateResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
