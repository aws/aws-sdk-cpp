/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SendUsersMessageResponse.h>
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
  class SendUsersMessagesResult
  {
  public:
    AWS_PINPOINT_API SendUsersMessagesResult();
    AWS_PINPOINT_API SendUsersMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API SendUsersMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SendUsersMessageResponse& GetSendUsersMessageResponse() const{ return m_sendUsersMessageResponse; }

    
    inline void SetSendUsersMessageResponse(const SendUsersMessageResponse& value) { m_sendUsersMessageResponse = value; }

    
    inline void SetSendUsersMessageResponse(SendUsersMessageResponse&& value) { m_sendUsersMessageResponse = std::move(value); }

    
    inline SendUsersMessagesResult& WithSendUsersMessageResponse(const SendUsersMessageResponse& value) { SetSendUsersMessageResponse(value); return *this;}

    
    inline SendUsersMessagesResult& WithSendUsersMessageResponse(SendUsersMessageResponse&& value) { SetSendUsersMessageResponse(std::move(value)); return *this;}

  private:

    SendUsersMessageResponse m_sendUsersMessageResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
