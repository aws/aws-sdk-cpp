/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SendUsersMessageResponse.h>
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
  class SendUsersMessagesResult
  {
  public:
    AWS_PINPOINT_API SendUsersMessagesResult() = default;
    AWS_PINPOINT_API SendUsersMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API SendUsersMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const SendUsersMessageResponse& GetSendUsersMessageResponse() const { return m_sendUsersMessageResponse; }
    template<typename SendUsersMessageResponseT = SendUsersMessageResponse>
    void SetSendUsersMessageResponse(SendUsersMessageResponseT&& value) { m_sendUsersMessageResponseHasBeenSet = true; m_sendUsersMessageResponse = std::forward<SendUsersMessageResponseT>(value); }
    template<typename SendUsersMessageResponseT = SendUsersMessageResponse>
    SendUsersMessagesResult& WithSendUsersMessageResponse(SendUsersMessageResponseT&& value) { SetSendUsersMessageResponse(std::forward<SendUsersMessageResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendUsersMessagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SendUsersMessageResponse m_sendUsersMessageResponse;
    bool m_sendUsersMessageResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
