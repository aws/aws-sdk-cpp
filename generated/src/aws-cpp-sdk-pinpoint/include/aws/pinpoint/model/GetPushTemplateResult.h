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
    AWS_PINPOINT_API GetPushTemplateResult();
    AWS_PINPOINT_API GetPushTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetPushTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PushNotificationTemplateResponse& GetPushNotificationTemplateResponse() const{ return m_pushNotificationTemplateResponse; }

    
    inline void SetPushNotificationTemplateResponse(const PushNotificationTemplateResponse& value) { m_pushNotificationTemplateResponse = value; }

    
    inline void SetPushNotificationTemplateResponse(PushNotificationTemplateResponse&& value) { m_pushNotificationTemplateResponse = std::move(value); }

    
    inline GetPushTemplateResult& WithPushNotificationTemplateResponse(const PushNotificationTemplateResponse& value) { SetPushNotificationTemplateResponse(value); return *this;}

    
    inline GetPushTemplateResult& WithPushNotificationTemplateResponse(PushNotificationTemplateResponse&& value) { SetPushNotificationTemplateResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPushTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPushTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPushTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PushNotificationTemplateResponse m_pushNotificationTemplateResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
