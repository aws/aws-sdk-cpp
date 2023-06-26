/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ADMChannelResponse.h>
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
  class UpdateAdmChannelResult
  {
  public:
    AWS_PINPOINT_API UpdateAdmChannelResult();
    AWS_PINPOINT_API UpdateAdmChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateAdmChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ADMChannelResponse& GetADMChannelResponse() const{ return m_aDMChannelResponse; }

    
    inline void SetADMChannelResponse(const ADMChannelResponse& value) { m_aDMChannelResponse = value; }

    
    inline void SetADMChannelResponse(ADMChannelResponse&& value) { m_aDMChannelResponse = std::move(value); }

    
    inline UpdateAdmChannelResult& WithADMChannelResponse(const ADMChannelResponse& value) { SetADMChannelResponse(value); return *this;}

    
    inline UpdateAdmChannelResult& WithADMChannelResponse(ADMChannelResponse&& value) { SetADMChannelResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAdmChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAdmChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAdmChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ADMChannelResponse m_aDMChannelResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
