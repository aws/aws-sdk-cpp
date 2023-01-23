/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ADMChannelResponse.h>
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
  class GetAdmChannelResult
  {
  public:
    AWS_PINPOINT_API GetAdmChannelResult();
    AWS_PINPOINT_API GetAdmChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetAdmChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ADMChannelResponse& GetADMChannelResponse() const{ return m_aDMChannelResponse; }

    
    inline void SetADMChannelResponse(const ADMChannelResponse& value) { m_aDMChannelResponse = value; }

    
    inline void SetADMChannelResponse(ADMChannelResponse&& value) { m_aDMChannelResponse = std::move(value); }

    
    inline GetAdmChannelResult& WithADMChannelResponse(const ADMChannelResponse& value) { SetADMChannelResponse(value); return *this;}

    
    inline GetAdmChannelResult& WithADMChannelResponse(ADMChannelResponse&& value) { SetADMChannelResponse(std::move(value)); return *this;}

  private:

    ADMChannelResponse m_aDMChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
