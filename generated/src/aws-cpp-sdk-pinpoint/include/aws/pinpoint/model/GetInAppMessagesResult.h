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
    AWS_PINPOINT_API GetInAppMessagesResult();
    AWS_PINPOINT_API GetInAppMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetInAppMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const InAppMessagesResponse& GetInAppMessagesResponse() const{ return m_inAppMessagesResponse; }

    
    inline void SetInAppMessagesResponse(const InAppMessagesResponse& value) { m_inAppMessagesResponse = value; }

    
    inline void SetInAppMessagesResponse(InAppMessagesResponse&& value) { m_inAppMessagesResponse = std::move(value); }

    
    inline GetInAppMessagesResult& WithInAppMessagesResponse(const InAppMessagesResponse& value) { SetInAppMessagesResponse(value); return *this;}

    
    inline GetInAppMessagesResult& WithInAppMessagesResponse(InAppMessagesResponse&& value) { SetInAppMessagesResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInAppMessagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInAppMessagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInAppMessagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InAppMessagesResponse m_inAppMessagesResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
