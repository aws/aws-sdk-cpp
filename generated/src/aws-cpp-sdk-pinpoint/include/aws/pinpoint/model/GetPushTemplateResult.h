/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/PushNotificationTemplateResponse.h>
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
  class GetPushTemplateResult
  {
  public:
    AWS_PINPOINT_API GetPushTemplateResult() = default;
    AWS_PINPOINT_API GetPushTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetPushTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const PushNotificationTemplateResponse& GetPushNotificationTemplateResponse() const { return m_pushNotificationTemplateResponse; }
    template<typename PushNotificationTemplateResponseT = PushNotificationTemplateResponse>
    void SetPushNotificationTemplateResponse(PushNotificationTemplateResponseT&& value) { m_pushNotificationTemplateResponseHasBeenSet = true; m_pushNotificationTemplateResponse = std::forward<PushNotificationTemplateResponseT>(value); }
    template<typename PushNotificationTemplateResponseT = PushNotificationTemplateResponse>
    GetPushTemplateResult& WithPushNotificationTemplateResponse(PushNotificationTemplateResponseT&& value) { SetPushNotificationTemplateResponse(std::forward<PushNotificationTemplateResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPushTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PushNotificationTemplateResponse m_pushNotificationTemplateResponse;
    bool m_pushNotificationTemplateResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
