/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VoiceChannelResponse.h>
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
  class DeleteVoiceChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteVoiceChannelResult();
    AWS_PINPOINT_API DeleteVoiceChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteVoiceChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VoiceChannelResponse& GetVoiceChannelResponse() const{ return m_voiceChannelResponse; }

    
    inline void SetVoiceChannelResponse(const VoiceChannelResponse& value) { m_voiceChannelResponse = value; }

    
    inline void SetVoiceChannelResponse(VoiceChannelResponse&& value) { m_voiceChannelResponse = std::move(value); }

    
    inline DeleteVoiceChannelResult& WithVoiceChannelResponse(const VoiceChannelResponse& value) { SetVoiceChannelResponse(value); return *this;}

    
    inline DeleteVoiceChannelResult& WithVoiceChannelResponse(VoiceChannelResponse&& value) { SetVoiceChannelResponse(std::move(value)); return *this;}

  private:

    VoiceChannelResponse m_voiceChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
