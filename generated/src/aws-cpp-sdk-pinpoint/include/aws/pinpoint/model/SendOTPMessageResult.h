/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/MessageResponse.h>
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
  class SendOTPMessageResult
  {
  public:
    AWS_PINPOINT_API SendOTPMessageResult();
    AWS_PINPOINT_API SendOTPMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API SendOTPMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const MessageResponse& GetMessageResponse() const{ return m_messageResponse; }

    
    inline void SetMessageResponse(const MessageResponse& value) { m_messageResponse = value; }

    
    inline void SetMessageResponse(MessageResponse&& value) { m_messageResponse = std::move(value); }

    
    inline SendOTPMessageResult& WithMessageResponse(const MessageResponse& value) { SetMessageResponse(value); return *this;}

    
    inline SendOTPMessageResult& WithMessageResponse(MessageResponse&& value) { SetMessageResponse(std::move(value)); return *this;}

  private:

    MessageResponse m_messageResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
