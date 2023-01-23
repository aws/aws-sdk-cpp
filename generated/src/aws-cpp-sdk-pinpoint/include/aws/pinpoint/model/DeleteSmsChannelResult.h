/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SMSChannelResponse.h>
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
  class DeleteSmsChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteSmsChannelResult();
    AWS_PINPOINT_API DeleteSmsChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteSmsChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SMSChannelResponse& GetSMSChannelResponse() const{ return m_sMSChannelResponse; }

    
    inline void SetSMSChannelResponse(const SMSChannelResponse& value) { m_sMSChannelResponse = value; }

    
    inline void SetSMSChannelResponse(SMSChannelResponse&& value) { m_sMSChannelResponse = std::move(value); }

    
    inline DeleteSmsChannelResult& WithSMSChannelResponse(const SMSChannelResponse& value) { SetSMSChannelResponse(value); return *this;}

    
    inline DeleteSmsChannelResult& WithSMSChannelResponse(SMSChannelResponse&& value) { SetSMSChannelResponse(std::move(value)); return *this;}

  private:

    SMSChannelResponse m_sMSChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
