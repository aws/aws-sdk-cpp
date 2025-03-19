/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/InAppTemplateResponse.h>
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
  class GetInAppTemplateResult
  {
  public:
    AWS_PINPOINT_API GetInAppTemplateResult() = default;
    AWS_PINPOINT_API GetInAppTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetInAppTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InAppTemplateResponse& GetInAppTemplateResponse() const { return m_inAppTemplateResponse; }
    template<typename InAppTemplateResponseT = InAppTemplateResponse>
    void SetInAppTemplateResponse(InAppTemplateResponseT&& value) { m_inAppTemplateResponseHasBeenSet = true; m_inAppTemplateResponse = std::forward<InAppTemplateResponseT>(value); }
    template<typename InAppTemplateResponseT = InAppTemplateResponse>
    GetInAppTemplateResult& WithInAppTemplateResponse(InAppTemplateResponseT&& value) { SetInAppTemplateResponse(std::forward<InAppTemplateResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInAppTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InAppTemplateResponse m_inAppTemplateResponse;
    bool m_inAppTemplateResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
