﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSChannelResponse.h>
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
  class UpdateApnsChannelResult
  {
  public:
    AWS_PINPOINT_API UpdateApnsChannelResult();
    AWS_PINPOINT_API UpdateApnsChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateApnsChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const APNSChannelResponse& GetAPNSChannelResponse() const{ return m_aPNSChannelResponse; }
    inline void SetAPNSChannelResponse(const APNSChannelResponse& value) { m_aPNSChannelResponse = value; }
    inline void SetAPNSChannelResponse(APNSChannelResponse&& value) { m_aPNSChannelResponse = std::move(value); }
    inline UpdateApnsChannelResult& WithAPNSChannelResponse(const APNSChannelResponse& value) { SetAPNSChannelResponse(value); return *this;}
    inline UpdateApnsChannelResult& WithAPNSChannelResponse(APNSChannelResponse&& value) { SetAPNSChannelResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateApnsChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateApnsChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateApnsChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    APNSChannelResponse m_aPNSChannelResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
