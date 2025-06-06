﻿/**
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
    AWS_PINPOINT_API DeleteEmailChannelResult() = default;
    AWS_PINPOINT_API DeleteEmailChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteEmailChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const EmailChannelResponse& GetEmailChannelResponse() const { return m_emailChannelResponse; }
    template<typename EmailChannelResponseT = EmailChannelResponse>
    void SetEmailChannelResponse(EmailChannelResponseT&& value) { m_emailChannelResponseHasBeenSet = true; m_emailChannelResponse = std::forward<EmailChannelResponseT>(value); }
    template<typename EmailChannelResponseT = EmailChannelResponse>
    DeleteEmailChannelResult& WithEmailChannelResponse(EmailChannelResponseT&& value) { SetEmailChannelResponse(std::forward<EmailChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteEmailChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EmailChannelResponse m_emailChannelResponse;
    bool m_emailChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
