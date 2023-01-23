/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VoiceTemplateResponse.h>
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

  private:

    VoiceTemplateResponse m_voiceTemplateResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
