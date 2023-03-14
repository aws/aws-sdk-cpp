/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSSandboxChannelResponse.h>
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
  class DeleteApnsSandboxChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteApnsSandboxChannelResult();
    AWS_PINPOINT_API DeleteApnsSandboxChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteApnsSandboxChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const APNSSandboxChannelResponse& GetAPNSSandboxChannelResponse() const{ return m_aPNSSandboxChannelResponse; }

    
    inline void SetAPNSSandboxChannelResponse(const APNSSandboxChannelResponse& value) { m_aPNSSandboxChannelResponse = value; }

    
    inline void SetAPNSSandboxChannelResponse(APNSSandboxChannelResponse&& value) { m_aPNSSandboxChannelResponse = std::move(value); }

    
    inline DeleteApnsSandboxChannelResult& WithAPNSSandboxChannelResponse(const APNSSandboxChannelResponse& value) { SetAPNSSandboxChannelResponse(value); return *this;}

    
    inline DeleteApnsSandboxChannelResult& WithAPNSSandboxChannelResponse(APNSSandboxChannelResponse&& value) { SetAPNSSandboxChannelResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteApnsSandboxChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteApnsSandboxChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteApnsSandboxChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    APNSSandboxChannelResponse m_aPNSSandboxChannelResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
