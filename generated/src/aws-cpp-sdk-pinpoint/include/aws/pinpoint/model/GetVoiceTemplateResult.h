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
    AWS_PINPOINT_API GetVoiceTemplateResult() = default;
    AWS_PINPOINT_API GetVoiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetVoiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const VoiceTemplateResponse& GetVoiceTemplateResponse() const { return m_voiceTemplateResponse; }
    template<typename VoiceTemplateResponseT = VoiceTemplateResponse>
    void SetVoiceTemplateResponse(VoiceTemplateResponseT&& value) { m_voiceTemplateResponseHasBeenSet = true; m_voiceTemplateResponse = std::forward<VoiceTemplateResponseT>(value); }
    template<typename VoiceTemplateResponseT = VoiceTemplateResponse>
    GetVoiceTemplateResult& WithVoiceTemplateResponse(VoiceTemplateResponseT&& value) { SetVoiceTemplateResponse(std::forward<VoiceTemplateResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVoiceTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VoiceTemplateResponse m_voiceTemplateResponse;
    bool m_voiceTemplateResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
