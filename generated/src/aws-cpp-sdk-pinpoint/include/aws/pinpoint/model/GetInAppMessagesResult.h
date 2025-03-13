/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/InAppMessagesResponse.h>
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
  class GetInAppMessagesResult
  {
  public:
    AWS_PINPOINT_API GetInAppMessagesResult() = default;
    AWS_PINPOINT_API GetInAppMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetInAppMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InAppMessagesResponse& GetInAppMessagesResponse() const { return m_inAppMessagesResponse; }
    template<typename InAppMessagesResponseT = InAppMessagesResponse>
    void SetInAppMessagesResponse(InAppMessagesResponseT&& value) { m_inAppMessagesResponseHasBeenSet = true; m_inAppMessagesResponse = std::forward<InAppMessagesResponseT>(value); }
    template<typename InAppMessagesResponseT = InAppMessagesResponse>
    GetInAppMessagesResult& WithInAppMessagesResponse(InAppMessagesResponseT&& value) { SetInAppMessagesResponse(std::forward<InAppMessagesResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInAppMessagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InAppMessagesResponse m_inAppMessagesResponse;
    bool m_inAppMessagesResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
