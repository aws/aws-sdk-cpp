/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EmailChannelResponse.h>
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
  class DeleteEmailChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteEmailChannelResult();
    AWS_PINPOINT_API DeleteEmailChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteEmailChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EmailChannelResponse& GetEmailChannelResponse() const{ return m_emailChannelResponse; }

    
    inline void SetEmailChannelResponse(const EmailChannelResponse& value) { m_emailChannelResponse = value; }

    
    inline void SetEmailChannelResponse(EmailChannelResponse&& value) { m_emailChannelResponse = std::move(value); }

    
    inline DeleteEmailChannelResult& WithEmailChannelResponse(const EmailChannelResponse& value) { SetEmailChannelResponse(value); return *this;}

    
    inline DeleteEmailChannelResult& WithEmailChannelResponse(EmailChannelResponse&& value) { SetEmailChannelResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteEmailChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteEmailChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteEmailChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EmailChannelResponse m_emailChannelResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
