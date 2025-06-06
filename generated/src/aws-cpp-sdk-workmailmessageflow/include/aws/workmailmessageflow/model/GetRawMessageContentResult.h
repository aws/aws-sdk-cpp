﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace WorkMailMessageFlow
{
namespace Model
{
  class GetRawMessageContentResult
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult() = default;
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult(GetRawMessageContentResult&&) = default;
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult& operator=(GetRawMessageContentResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetRawMessageContentResult(const GetRawMessageContentResult&) = delete;
    GetRawMessageContentResult& operator=(const GetRawMessageContentResult&) = delete;


    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The raw content of the email message, in MIME format.</p>
     */
    inline Aws::IOStream& GetMessageContent() const { return m_messageContent.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_messageContent = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRawMessageContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_messageContent{};
    bool m_messageContentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
